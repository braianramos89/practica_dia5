cmake_minimum_required(VERSION 3.22)
project(Templatecpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Templatecpp main.cpp Empleado.cpp Empleado.h Obrero.cpp Obrero.h Gerente.cpp Gerente.h Vendedor.cpp Vendedor.h Adestajo.cpp Adestajo.h)
