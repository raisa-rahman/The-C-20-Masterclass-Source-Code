#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"
class Pigeon : public Bird
{
public:
    Pigeon() = default;
    Pigeon(std::string_view wing_color, std::string_view description);
    virtual ~Pigeon();
    
    virtual void coo() const{
        fmt::println("Pigeon::coo called for pigeon : {}", m_description );
    }


};

#endif // PIGEON_H
