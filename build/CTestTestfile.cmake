# CMake generated Testfile for 
# Source directory: C:/uni2/OS/OS_lab2
# Build directory: C:/uni2/OS/OS_lab2/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(tests "C:/uni2/OS/OS_lab2/build/Debug/tests.exe")
  set_tests_properties(tests PROPERTIES  _BACKTRACE_TRIPLES "C:/uni2/OS/OS_lab2/CMakeLists.txt;28;add_test;C:/uni2/OS/OS_lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(tests "C:/uni2/OS/OS_lab2/build/Release/tests.exe")
  set_tests_properties(tests PROPERTIES  _BACKTRACE_TRIPLES "C:/uni2/OS/OS_lab2/CMakeLists.txt;28;add_test;C:/uni2/OS/OS_lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(tests "C:/uni2/OS/OS_lab2/build/MinSizeRel/tests.exe")
  set_tests_properties(tests PROPERTIES  _BACKTRACE_TRIPLES "C:/uni2/OS/OS_lab2/CMakeLists.txt;28;add_test;C:/uni2/OS/OS_lab2/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(tests "C:/uni2/OS/OS_lab2/build/RelWithDebInfo/tests.exe")
  set_tests_properties(tests PROPERTIES  _BACKTRACE_TRIPLES "C:/uni2/OS/OS_lab2/CMakeLists.txt;28;add_test;C:/uni2/OS/OS_lab2/CMakeLists.txt;0;")
else()
  add_test(tests NOT_AVAILABLE)
endif()
subdirs("_deps/googletest-build")
