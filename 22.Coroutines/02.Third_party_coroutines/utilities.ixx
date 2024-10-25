module;

#include <string_view>
#include <fmt/format.h>
#include <iostream>

export module utilities; 

import practical_coro_01;
import practical_coro_02;

export void practical_coro_01_demo(){
	for (auto i : practical_coro_01::fibonacci())
	{
		if (i > 10) break;
		std::cout << i << std::endl;
	}
}

export void practical_coro_02_demo(){
    /* 
	int max_value = 100;
    for (int value : fibonacci(max_value)) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
	*/
}