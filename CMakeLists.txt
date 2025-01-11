cmake_minimum_required(VERSION 3.5.0)
project(remote_test VERSION 0.1.0 LANGUAGES C CXX)


find_package(OpenCV REQUIRED)
add_executable(remote_test main.cpp src/server.cpp src/client.cpp)

target_link_libraries(remote_test ${OpenCV_LIBS})

include_directories(${CMAKE_SOURCE_DIR}/include)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

