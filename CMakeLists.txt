cmake_minimum_required(VERSION 3.16)

project(Anatidae LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# speed flags
set(CMAKE_CXX_FLAGS_RELEASE "-03 -DNDEBUG")

add_executable(Anatidae
    src/main.cpp
    src/engine/board.cpp
    src/uci/uci.cpp
)