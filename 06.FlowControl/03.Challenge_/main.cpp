/*
    . GUI Challenge: SFML
        . Practice control flow: 

            0. Understanding the while loop in the application

            1. Add more key events: 
                C-> Increase the circle size: radius += 10.f;
                D-> Decrease the circle size: radius -= 10.f;

            2. Add mouse events: 
                Left-> color = sf::Color::Magenta;
                Right-> color = sf::Color::Cyan;

            3. Conditional rendering: 
                . If radius> 150.f -> color = sf::Color::Gray;
                . If radius< 150.f -> color = sf::Color::Black;

            4: Add a timer: 
                . Change the color every 5 seconds.
                . This also shows how we can setup a counter.

    . NOTE: 
        . This example won't work in containers because they don't have a xserver
            set up. It's possible to set up one but we'll pass for this course.
        . You can run it: 
            . On a local box with the requirements met: 
                . a compiler with support for modules with cmake:   
                    . gcc 14 and up
                    . clang 16 and up
                    . latest visual c++
        . Be carefult about the opengl dependencies that vcpkg will complain about in the output .
            Install them: apt-get install libx11-dev libxrandr-dev libxcursor-dev libxi-dev libudev-dev libgl1-mesa-dev
        . Note that even if we don't have access to xserver we can still build the 
            binary successfuly. We simply can't run it and see a GUI.
        . In this course, we will run it on windows 

*/
import utilities;

int main()
{
  //print_msg("starting out...");
  app();

  return 0;
}