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
  constexpr float timerInterval = 5.f;
  const std::string title = "SFML works!";
  const sf::Color backgroundColor = sf::Color::Red;
  const sf::Color shapeColor = sf::Color::Green;

  //Change the code to use the predefined variables.
  sf::RenderWindow window(sf::VideoMode(width,height), title);
  sf::CircleShape shape(circleRadius);
  shape.setFillColor(shapeColor);

  sf::Clock clock; // Timer initialization
  unsigned int counter = 0; // Counter initialization

  while (window.isOpen()) {

    sf::Time elapsed = clock.getElapsedTime(); // Timer
    if(elapsed.asSeconds() > timerInterval){
      counter++;
      if(counter % 2 == 0){
        shape.setFillColor(sf::Color::Blue);
      }else{
        shape.setFillColor(sf::Color::Yellow);
      }
      clock.restart();
    } 


    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed){
        window.close();
      }

      //Key press event
      if (event.type == sf::Event::KeyPressed){

        if (event.key.code == sf::Keyboard::Escape){
          window.close();
        }

        //Pressing A and B will change the color
        if(event.key.code == sf::Keyboard::A){
          std::cout << "A was pressed" << std::endl;
          shape.setFillColor(sf::Color::Blue);
        }
        if(event.key.code == sf::Keyboard::B){
          std::cout << "B was pressed" << std::endl;
          shape.setFillColor(sf::Color::Yellow);
        }

        //Pressing C and D will change the radius
        if(event.key.code == sf::Keyboard::C){
          shape.setRadius(shape.getRadius() + 10.f);
          std::cout << "C was pressed" << std::endl;
          std::cout << "Radius: " << shape.getRadius() << std::endl;
        }

        if(event.key.code == sf::Keyboard::D){
          shape.setRadius(shape.getRadius() - 10.f);
          std::cout << "D was pressed" << std::endl;
          std::cout << "Radius: " << shape.getRadius() << std::endl;
        }

      }

      //Mouse events
      if(event.type == sf::Event::MouseButtonPressed){
        if(event.mouseButton.button == sf::Mouse::Left){
          shape.setFillColor(sf::Color::Magenta);
          std::cout << "Left mouse button was pressed" << std::endl;
        }
        if(event.mouseButton.button == sf::Mouse::Right){
          shape.setFillColor(sf::Color::Cyan);
          std::cout << "Right mouse button was pressed" << std::endl;
        }
      }
    }

    //Conditional rendering: Code that shows up further down overrides the code that shows up further up.
    /*
    if(shape.getRadius() > 150.f){
      shape.setFillColor(sf::Color::Black);
    }else if(shape.getRadius() < 150.f){
      shape.setFillColor(sf::Color::Blue);
    }
    */

    window.clear(backgroundColor);
    window.draw(shape);
    window.display();
  }

}