include_directories(${MyProject_SOURCE_DIR}/MainProject/include)
include_directories(${MyProject_SOURCE_DIR}/LibProject/include)

link_directories(${MyProject_SOURCE_DIR}/LibProject/src)

add_executable(MainProject main.cpp)
target_link_libraries(MainProject LibProject)

enable_testing()
add_test(NAME mytest
         COMMAND ./MainProject)