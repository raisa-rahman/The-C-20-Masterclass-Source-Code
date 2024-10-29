module;
#include <string_view>
#include <iostream>
#include <SFML/Graphics.hpp>

export module utilities; 

export void app(){

  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) window.close();
    }

    window.clear(sf::Color::Red);
    window.draw(shape);
    window.display();
  }

}