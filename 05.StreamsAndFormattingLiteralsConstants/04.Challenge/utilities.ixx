module;
#include <string_view>
#include <SFML/Graphics.hpp>
#include <iostream>

export module utilities; 

export void app(){

  //Store the data in predefined variables.
  constexpr int width = 200;
  constexpr int height = 200;  
  constexpr float circleRadius = 100.f;

  //std::string and sf::Color are not constexpr ready, so we can't use them in the constexpr variables.
  const std::string title = "SFML works!";
  const sf::Color backgroundColor = sf::Color::Red;
  const sf::Color shapeColor = sf::Color::Green;

  //Change the code to use the predefined variables.
  sf::RenderWindow window(sf::VideoMode(width,height), title);
  sf::CircleShape shape(circleRadius);
  shape.setFillColor(shapeColor);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed){
        window.close();
      }
      if (event.type == sf::Event::KeyPressed){

        if (event.key.code == sf::Keyboard::Escape){
          window.close();
        }
        if(event.key.code == sf::Keyboard::A){
          std::cout << "A was pressed" << std::endl;
          shape.setFillColor(sf::Color::Blue);
        }
        if(event.key.code == sf::Keyboard::B){
          std::cout << "B was pressed" << std::endl;
          shape.setFillColor(sf::Color::Yellow);
        }
      }
    }

    window.clear(backgroundColor);
    window.draw(shape);
    window.display();
  }

}