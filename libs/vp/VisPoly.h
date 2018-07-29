/*
Copyright 2012-2018 Ronald Römer

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef __VisPoly_h
#define __VisPoly_h

#include <vector>
#include <map>
#include <ostream>
#include <cassert>
#include <exception>

#include "Tools.h"

class Vert : public Point {
public:
    double r[2], phi;
    int nxt;

    Vert (double *_x, Point &p) : Point(p), nxt(NO_USE) {
        r[0] = pt[0]-_x[0];
        r[1] = pt[1]-_x[1];

        Normalize(r);
    }
    Vert (double *_x, Point &p, double *ref, int _nxt = NO_USE) : Vert(_x, p) {
        nxt = _nxt;
        phi = GetAngle(ref, r);
    }

};

typedef std::vector<Vert> VertsType;

class Bag {
public:
    Bag (int _f, int _g, double _phi) : f(_f), g(_g), phi(_phi) {

    }

    int f, g;
    double phi;

    friend std::ostream& operator<< (std::ostream &out, const Bag &b) {
        out << "phi: " << b.phi
            << ", g: " << b.g
            << ", f: " << b.f;
        return out;
    }
};

class vp_error : public std::exception {
public:
    const char* what() const throw() {
        return "Too many pop's.";
    }
};

class Vert2 {
public:
    Vert2 (int _i, double _l) : i(_i), l(_l) {}
    double l;
    int i;
};

typedef std::vector<Vert2> VertsType2;

class Pos {
public:
    int par;
    double t;
    Pos (int par, double t) : par(par), t(t) {}
    Pos () {}

    friend std::ostream& operator<< (std::ostream &out, const Pos &p) {
        out << "t: " << p.t
            << ", par: " << p.par;
        return out;
    }
};

class Tracker {
public:
    std::map<int, Pos> locs;
    Tracker (const PolyType &poly) {
        for (const Point &p : poly) {
            locs[p.tag] = {p.tag, 0};
        }
    }
    void Track (const Point &parent, const Point &child, double t) {
        assert(locs.find(parent.tag) != locs.end());
        double d = locs[parent.tag].t;
        locs[child.tag] = { locs[parent.tag].par, d+(1-d)*t };
    }
};

class Vert4 : public Point {
public:
    double t;
    Vert4 (Point &p, double t) : Point(p), t(t) {}

    friend std::ostream& operator<< (std::ostream &out, const Vert4 &v) {
        out << (Point) v
            << ", t: " << v.t;
        return out;
    }

    bool operator< (const Vert4 &other) const {
        return t < other.t;
    }
};

typedef std::vector<Vert4> VertsType4;

// diese darf nicht direkt verwendet werden
void GetVisPoly (PolyType &poly, Tracker &tr, PolyType &res, int ind = 0);

bool GetVisPoly_wrapper (PolyType &poly, PolyType &res, int ind);

#endif
