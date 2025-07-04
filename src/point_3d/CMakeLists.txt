set(TARGET_POINT3D Point3D)

add_library(${TARGET_POINT3D} STATIC Point3D.cpp)
target_include_directories(${TARGET_POINT3D} PUBLIC .)

target_link_libraries(${TARGET_POINT3D} PRIVATE Point2D)