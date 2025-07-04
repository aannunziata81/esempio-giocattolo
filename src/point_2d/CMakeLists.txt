set(TARGET_POINT2D Point2D)

add_library(${TARGET_POINT2D} STATIC Point2D.cpp)
target_include_directories(${TARGET_POINT2D} PUBLIC .)