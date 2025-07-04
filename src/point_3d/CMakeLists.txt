set(TARGET Point3D)

add_library(${TARGET} STATIC Point3D.cpp)
target_include_directories(${TARGET} PUBLIC .)

target_link_libraries(${TARGET} PRIVATE Point2D)