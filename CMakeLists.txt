cmake_minimum_required(VERSION 3.10)
project(Singleton)

add_executable(singleton_app 
    main.cpp 
    singleton.h
)

enable_testing()
add_executable(singl_test 
    test.cpp 
    singleton.h
)

find_package(GTest REQUIRED)
target_link_libraries(singl_test GTest::GTest GTest::Main)
