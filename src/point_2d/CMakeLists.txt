set(TARGET Point2D)

add_library(${TARGET} STATIC Point2D.cpp)
target_include_directories(${TARGET} PUBLIC .)