#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <fmt/format.h>
class Shape
{
public:
    Shape() = default;
    Shape(std::string_view description);
    ~Shape();
    
     virtual void draw() const{
        fmt::println( "Shape::draw() called. Drawing {}", m_description );
    }
    
protected : 
    std::string m_description{""};
};

#endif // SHAPE_H
