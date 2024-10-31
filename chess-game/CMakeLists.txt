cmake_minimum_required(VERSION 3.10)

project(ChessGame)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    src/main.cpp
    src/Game.cpp
    src/Board.cpp
    src/Piece.cpp
    src/Utils.cpp
)

add_executable(ChessGame ${SOURCES})