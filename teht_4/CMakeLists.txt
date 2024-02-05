cmake_minimum_required(VERSION 3.5)

project(teht_4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(teht_4 main.cpp
    house.h house.cpp
    floor.h floor.cpp
    groundfloor.h groundfloor.cpp
    multistorybuilding.h multistorybuilding.cpp)

include(GNUInstallDirs)
install(TARGETS teht_4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
