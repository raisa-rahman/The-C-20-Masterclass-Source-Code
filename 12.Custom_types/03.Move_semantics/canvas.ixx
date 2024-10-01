module;

#include <cstddef>
#include <fmt/format.h>
#include <vector>

export module canvas;

export import pixel;

namespace raw{
    export class Canvas {
    public:
        Canvas(std::size_t width, std::size_t height);
        Canvas(const Canvas& src);
        ~Canvas();

        Canvas& operator=(const Canvas& rhs);

        //Add move semantics
        Canvas(Canvas&& other) noexcept;
        Canvas& operator=(Canvas&& other) noexcept;

        void modify_pixel(std::size_t x, std::size_t y, const Pixel& pixel);
        Pixel& retrieve_pixel(std::size_t x, std::size_t y);

        void swap(Canvas& other) noexcept;

        void print() const;

    private:
        void verify_coordinate(std::size_t x, std::size_t y) const;

        std::size_t m_width{ 0 };
        std::size_t m_height{ 0 };
        Pixel** m_pixels{ nullptr };
    };

    export void swap(Canvas& first, Canvas& second) noexcept;
}   // namespace raw


namespace modern{
        /*
            . The copy and swap idiom is not needed here. We are using std::vector to manage memory.
                and the copy assignment operator is generated by the compiler.
            . In this modern version, we're not directly managing memory and all that dirty work
                is taken care of by the std::vector member. We are following the rule of 0 here: 
                    . No destructor
                    . No copy constructor
                    . No move constructor
                    . No copy assignment operator
                    . No move assignment operator
            . We declare none of the methods above and they are generated by the compiler. This is known
                as the rule of 0. There is also a rule of 5, that states that if you find yourself declaring
                any of the 5, you probably know better than the compiler and should declare all 5.
        */
        export class Canvas {
    public:
        Canvas(std::size_t width, std::size_t height);
        Canvas(const Canvas& src);

        void modify_pixel(std::size_t x, std::size_t y, const Pixel& pixel);
        Pixel& retrieve_pixel(std::size_t x, std::size_t y);

        void print() const;

    private:
        void verify_coordinate(std::size_t x, std::size_t y) const;

        std::size_t m_width{ 0 };
        std::size_t m_height{ 0 };
        std::vector<std::vector<Pixel>> m_pixels;
    };
} // namespace modern

