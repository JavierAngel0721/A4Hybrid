cmake_minimum_required(VERSION 3.11)
set(CMAKE_CXX_STANDARD 17)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(A4Hybrid)
include(FetchContent)


FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v2.13.10  
)


FetchContent_MakeAvailable(Catch2)


include_directories(src) 
include_directories(include())

message("Including source files for build")

add_executable(A4Hybrid
    src/main.cpp
    src/car.cpp
    src/electricCar.cpp
    src/gasolineCar.cpp
    src/hybridCar.cpp
)

# Add your test file and link Catch2 for your tests
add_executable(tests
    test/test.cpp
    src/car.cpp
    src/electricCar.cpp
    src/gasolineCar.cpp
    src/hybridCar.cpp
)

target_link_libraries(tests PRIVATE Catch2::Catch2)


set_target_properties(tests PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
)

enable_testing()
add_test(NAME Test COMMAND tests)
