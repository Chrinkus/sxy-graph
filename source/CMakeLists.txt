add_library(sxy_graph	point.cpp)

set_target_properties(sxy_graph PROPERTIES PUBLIC_HEADER point.hpp)

install(TARGETS sxy_graph
		LIBRARY DESTINATION lib64
		PUBLIC_HEADER DESTINATION include)
