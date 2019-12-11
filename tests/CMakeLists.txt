#set(CMAKE_PREFIX_PATH "${PROJECT_SOURCE_DIR}/lib/cmake")
find_package(Catch2 REQUIRED)

include_directories("${PROJECT_SOURCE_DIR}/source")

add_executable(tests_all	tests_main.cpp
							tests_point.cpp
)

target_link_libraries(tests_all PRIVATE Catch2::Catch2
										sxy_graph
)

include(CTest)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(tests_all)
