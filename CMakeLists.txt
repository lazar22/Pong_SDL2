cmake_minimum_required(VERSION 3.20)
project(Pong)

IF (WIN32)
    find_package(SDL2 CONFIG REQUIRED)
ELSE ()
    find_package(SDL2 REQUIRED)
    include_directories(${SDL2_INCLUDE_DIR})
ENDIF ()

add_executable(Pong src/main.cpp
        lib/game/game.cpp
)

target_include_directories(Pong PRIVATE
        lib/game
)

IF (WIN32)
    target_link_libraries(Pong PRIVATE SDL2::SDL2main SDL2::SDL2)
ELSE ()
    target_link_libraries(Pong ${SDL2_LIBRARIES})
ENDIF ()