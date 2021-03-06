cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
project(edsp-test VERSION 0.0.0 LANGUAGES CXX)

find_package(GTest REQUIRED)
set(SOURCE_FILES
        testing_gtest.cpp
        algorithm/testing_algorithm.cpp
        spectral/testing_fft.cpp
        spectral/testing_dct.cpp
        spectral/testing_hartley.cpp
        spectral/testing_hilbert.cpp
        windowing/testing_windowing.cpp
        spectral/testing_correlation.cpp
        oscillators/testing_oscillators.cpp
        filter/testing_filter.cpp
        statistics/testing_statistics.cpp
        io/testing_io.cpp
        effects/testing_tools.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME}
    ${GTEST_LIBRARIES}
    gcov
    pthread
    edsp
    fftw3f
    fftw3
    pffft
    samplerate
    audiofile
    sndfile)

target_include_directories(${PROJECT_NAME} PRIVATE ${GTEST_INCLUDE_DIRS})
target_compile_definitions(${PROJECT_NAME} PRIVATE CURRENT_TEST_PATH="${CMAKE_CURRENT_SOURCE_DIR}")
add_test(NAME ${PROJECT_NAME}
         COMMAND ${PROJECT_NAME})
