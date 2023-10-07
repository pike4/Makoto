cmake_minimum_required(VERSION 3.26.4)
project(unnamed-engine)

include(FetchContent)

set(SDL_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/sdl)
set(SDL_IMAGE_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/sdl-image)
set(JSON_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/json)

FetchContent_Declare(dep_sdl
    SOURCE_DIR ${SDL_ROOT_DIR}
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG SDL2)

FetchContent_Declare(dep_sdl_image
    SOURCE_DIR ${SDL_IMAGE_ROOT_DIR}
    GIT_REPOSITORY https://github.com/libsdl-org/SDL_image.git
    GIT_TAG SDL2)

FetchContent_Declare(dep_json
    SOURCE_DIR ${JSON_ROOT_DIR}
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG develop)

FetchContent_MakeAvailable(dep_sdl)
FetchContent_MakeAvailable(dep_sdl_image)
FetchContent_MakeAvailable(dep_json)

set(SDL2_DIR ${SDL_ROOT_DIR})

include_directories(${SDL2_INCLUDE_DIRS})

find_package(SDL2 REQUIRED)

add_executable(engine
    main.cpp)

    
target_link_libraries(engine ${SDL2_LIBRARIES} )

