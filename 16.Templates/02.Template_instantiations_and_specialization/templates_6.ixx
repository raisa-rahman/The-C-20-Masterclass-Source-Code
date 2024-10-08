/*
    . Partial specialization applies only when the primary template has more 
        than one   template parameter.
        . You can then partially one template parameter while keeping the other(s) generic.

    . Partial specialization for function templates is not supported in C++.
        . You can use function overloading to achieve the same effect.
*/
module;

#include<fmt/format.h>

export module templates_6;

namespace templates_6{

    // Primary template
    export template <typename T1, typename T2>
    class Adder {
    public:
        T1 add(T1 a, T2 b) {
            fmt::println("Generic template class");
            return a + b;
        }
    };

    // Partial specialization for when the first type is int
    export template <typename T2>
    class Adder<int, T2> {
    public:
        int add(int a, T2 b) {
            fmt::println("Partial specialization with int as the first type");
            return a + b;
        }
    };


    //Partial specialization for function templates is not supported in C++.
    // Generic template function
    export template <typename T1, typename T2>
    T1 add(T1 a, T2 b) {
        fmt::println("Generic template function");
        return a + b;
    }

    //  This will not compile
    /*
    template <typename T2>
    T1 add(int a, T2 b) {
        fmt::println("Partial specialization with int as the first type");
        return a + b;
    }
    */

    //An overload that achieves the same effect as the partial specialization for 
    //function template that we can't do above.
    export template <typename T>
    T add(int a, T b) {
        fmt::println("Function overload for (int, T)");
        return a + b;
    }
    
} // namespace templates_6