set(target Point3D)

add_library(${target} STATIC Point3D.cpp)
target_include_directories(${target} PUBLIC .)

target_link_libraries(${target} PRIVATE Point2D)