add_executable("demo" main.cpp)
target_link_libraries(demo PRIVATE Point2D)
target_link_libraries(demo PRIVATE Point3D)