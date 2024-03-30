#include <fmt/format.h>

template <typename T, typename P>
auto maximum ( T a, P b){
    return (a > b)? a : b;
}

int main(){

    //Largest type is going to be deduced as return type

	auto max1 = maximum ('e', 33); // double return type deduced
    fmt::println( "max1 : {}" , max1 );
    fmt::println( "size of max1 : {}" , sizeof(max1) );
   
    return 0;
}

