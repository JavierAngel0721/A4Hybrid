cmake_minimum_required(VERSION 3.11)
set(CMAKE_CXX_STANDARD 17)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Set the project name
project(A4Hybrid)

# CMake 3.11+ FetchContent module is used to download Catch2
include(FetchContent)

# Fetch Catch2 from GitHub
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v2.13.10  # Or any version you want
)

# Fetch Catch2 and make it available in the project
FetchContent_MakeAvailable(Catch2)

# Include the source directory to locate header files
include_directories(src) 
include_directories(include())

message("Including source files for build")
# Add your source files for the main program
add_executable(A4Hybrid
    src/main.cpp
    src/car.cpp
    src/electricCar.cpp
    src/gasolineCar.cpp
    src/hybridCar.cpp
    # Add other source files for your main application if necessary
)

# Add your test file and link Catch2 for your tests
add_executable(tests
    test/test.cpp
    src/car.cpp
    src/electricCar.cpp
    src/gasolineCar.cpp
    src/hybridCar.cpp
)

# Link Catch2 to the test executable
target_link_libraries(tests PRIVATE Catch2::Catch2)

# Optionally, you can also set C++ standard if needed (just to be sure)
set_target_properties(tests PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
)

# Add test to CTest (optional, for integration with testing tools)
enable_testing()
add_test(NAME Test COMMAND tests)
