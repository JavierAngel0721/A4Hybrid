# CMake generated Testfile for 
# Source directory: C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid
# Build directory: C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(Test "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/build/Debug/tests.exe")
  set_tests_properties(Test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/CMakeLists.txt;49;add_test;C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(Test "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/build/Release/tests.exe")
  set_tests_properties(Test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/CMakeLists.txt;49;add_test;C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(Test "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/build/MinSizeRel/tests.exe")
  set_tests_properties(Test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/CMakeLists.txt;49;add_test;C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(Test "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/build/RelWithDebInfo/tests.exe")
  set_tests_properties(Test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/CMakeLists.txt;49;add_test;C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A4Hybrid/CMakeLists.txt;0;")
else()
  add_test(Test NOT_AVAILABLE)
endif()
subdirs("_deps/catch2-build")
