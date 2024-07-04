module;
#include <string_view>
#include <fmt/format.h>
//Global module fragment : #include , preprocessor directives
export module utilities; // Name doesn't have to match the .ixx file

// #1: Aggregate initialization
export struct Point
{
  double x;
  double y;
};

export void print_point(const Point &p) { fmt::println("Point [ x: {}, y: {}]", p.x, p.y); }


// #2: Designated initializers
struct Component
{
  double x;
  double y;
  double z;
};

void print_component(const Component &c) { fmt::println("Component [ x: {}, y: {}, z: {}]", c.x, c.y, c.z); }

//Module purview
export void print_msg(std::string_view msg) {
	fmt::println("{}",msg);
}

// #1: Aggregate initialization
export void aggregate_initialization(){
	Point p1{ 10, 20 };
	print_point(p1);

	int scores[]{ 44, 62, 67, 82, 98, 43, 2, 5, 67 };
}


// #2: Designated initializers
export void designated_initializers(){
	Component c1{ .x = 5.7, .y = 8.2, .z = 5.2 };
	Component c2{ .x = 6.2, .z = 8.4 };
	Component c3{ .y = 6.2, .z = 5.9 };
	// Component c4 {.z =5.9 , .x=10.4 , .y =6.89}; // Compiler error

	print_component(c1);
	print_component(c2);
	print_component(c3);
}