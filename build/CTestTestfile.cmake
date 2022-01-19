# CMake generated Testfile for 
# Source directory: /home/aicha/TD2
# Build directory: /home/aicha/TD2/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(mytest "./Main.exe")
set_tests_properties(mytest PROPERTIES  _BACKTRACE_TRIPLES "/home/aicha/TD2/CMakeLists.txt;13;add_test;/home/aicha/TD2/CMakeLists.txt;0;")
subdirs("MainProject")
subdirs("LibProject")
