cmake_minimum_required(VERSION 3.29)
project(CS106B)

set(CMAKE_CXX_STANDARD 20)

# Add the necessary flag for MSVC to enable proper C++17 standard reporting
if (MSVC)
    add_compile_options(/Zc:__cplusplus)
endif()

# Set CMAKE_PREFIX_PATH to locate Qt6Config.cmake
set(CMAKE_PREFIX_PATH "C:/Qt/6.7.2/mingw_64/lib/cmake")

# Find and include Qt modules
find_package(Qt6 COMPONENTS Core Gui Widgets Network Multimedia REQUIRED)

# Enable automatic handling of Qt moc files
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Automatically gather all .cpp files from CS106-Lib directory and subdirectories
file(GLOB_RECURSE LIBRARY_SRC "${CMAKE_SOURCE_DIR}/CS106-Lib/**/*.cpp")

# Collect all header files
file(GLOB_RECURSE HEADER_FILES "${CMAKE_SOURCE_DIR}/CS106-Lib/**/*.h")

# Add your executable target and source files
add_executable(CS106B
        Chapter_3/pigLatin.cpp
        Chapter_5/RPNCalculator.cpp
        Chapter_5/RPNCalculator.hpp
        Chapter_5/main.cpp
        ${LIBRARY_SRC}  # Source files
        ${HEADER_FILES}  # Header files
)

# Debugging: Print out the collected source files
message(STATUS "LIBRARY_SRC contains: ${LIBRARY_SRC}")

# Add the external library source files to the target
target_sources(CS106B PRIVATE ${LIBRARY_SRC})

# Include directories for headers
target_include_directories(CS106B PUBLIC
        "${CMAKE_SOURCE_DIR}/CS106-Lib/collections"
        "${CMAKE_SOURCE_DIR}/CS106-Lib/console"
        "${CMAKE_SOURCE_DIR}/CS106-Lib/graphics"
        "${CMAKE_SOURCE_DIR}/CS106-Lib/io"
        "${CMAKE_SOURCE_DIR}/CS106-Lib/private"
        "${CMAKE_SOURCE_DIR}/CS106-Lib/resources"
        "${CMAKE_SOURCE_DIR}/CS106-Lib/system"
        "${CMAKE_SOURCE_DIR}/CS106-Lib/testing"
        "${CMAKE_SOURCE_DIR}/CS106-Lib/util"
        "C:/Qt/6.7.2/mingw_64/include"
)

# Platform-specific includes for Windows vs Unix-like systems
target_link_libraries(CS106B Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Network Qt6::Multimedia)