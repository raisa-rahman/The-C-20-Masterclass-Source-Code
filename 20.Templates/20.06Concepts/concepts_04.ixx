module;

#include <concepts>

export module concepts_04;  

namespace concepts_04{

    export template<typename T> concept TinyType = requires(T t)
    {
    sizeof(T) <= 4;// Simple requirement
    requires sizeof(T) <= 4;// Nested requirement
    };


    export template<typename T>
    // requires std::integral<T> || std::floating_point<T> // OR operator
    // requires std::integral<T> && TinyType<T>
    requires std::integral<T> &&requires(T t)
    {
    sizeof(T) <= 4;// Simple requirement
    requires sizeof(T) <= 4;// Nested requirement
    }
    T add(T a, T b) { return a + b; }

}   // namespace concepts_04