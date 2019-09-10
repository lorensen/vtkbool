/*
Copyright 2012-2019 Ronald Römer

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

#ifndef __Utilities_h
#define __Utilities_h

#include <iostream>

#include <vtkPolyData.h>
#include <vtkKdTreePointLocator.h>
#include <vtkPoints.h>
#include <vtkIdList.h>

#include "Tools.h"
#include "BooleanModule.h" // For export macro

BOOLEAN_EXPORT double GetAngle (double *vA, double *vB, double *n);
BOOLEAN_EXPORT double GetD (double *a, double *b);

/* VTK */
BOOLEAN_EXPORT void ComputeNormal (vtkPoints *pts, double *n, vtkIdList *poly = nullptr);
BOOLEAN_EXPORT void FindPoints (vtkKdTreePointLocator *pl, const double *pt, vtkIdList *pts, double tol = 1e-6);
BOOLEAN_EXPORT void WriteVTK (const char *name, vtkPolyData *pd);

/* Misc */
BOOLEAN_EXPORT double Mod (int a, int b);

class BOOLEAN_EXPORT Base {
public:
    Base (vtkPoints *pts, vtkIdList *poly);
    Base () {}
    double n[3], ei[3], ej[3], d;
};

void Transform (const double *in, double *out, Base &base);
// void BackTransform (const double *in, double *out, Base &base);

#endif
