set(target Point2D)

add_library(${target} STATIC Point2D.cpp)
target_include_directories(${target} PUBLIC .)