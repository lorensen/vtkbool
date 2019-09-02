include_directories(../../libs/vp)

vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  TestPolyDataBooleanFilter.cxx,NO_DATA
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean0,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  0
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean1,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  1
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean2,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  2
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean3,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  3
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean4,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  4
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean5,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  5
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean6,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  6
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean7,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  7
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean8,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  8
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean9,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  9
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean10,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  10
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean11,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  11
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean12,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  12
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean13,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  13
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean14,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  14
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean15,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  15
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean16,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  16
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean17,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  17
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean18,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  18
)
vtk_add_test_cxx(vtkRemoteBooleanCxxTests tests
  UnitTestPolyDataBoolean19,UnitTestPolyDataBooleanFilter.cxx,NO_VALID,NO_DATA
  19
)

vtk_test_cxx_executable(vtkRemoteBooleanCxxTests tests RENDERING_FACTORY)
