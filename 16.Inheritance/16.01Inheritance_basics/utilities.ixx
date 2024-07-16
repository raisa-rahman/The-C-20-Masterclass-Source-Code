module;

#include <iostream>
#include <string_view>
#include <fmt/format.h>

export module utilities;

import inh_basics;
import protected_members;

//Module purview
export void print_msg(std::string_view msg) {
	fmt::println("{}",msg);
}

export void inheritance_basics(){
	inh_basics::Player p1("Basketball");
	p1.set_first_name("John");
	p1.set_last_name("Snow");
	std::cout << "player: " << p1 << "\n";
}

export void protected_members_func(){
	protected_members::Player p1("Basketball", "John", "Snow");
	std::cout << "player: " << p1 << "\n";
}