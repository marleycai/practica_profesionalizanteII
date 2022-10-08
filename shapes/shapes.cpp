#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(700, 700), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(500.f, 400.f);

    sf::CircleShape shapea(50.f);
    shapea.setFillColor(sf::Color::Green);
    shapea.setPosition(300.f, 350.f);

    // sf::CircleShape shapee(50.f);
    //shapee.setFillColor(sf::Color::Cyan);
    // set a 10-pixel wide orange outline
    //shapee.setOutlineThickness(10.f);
    //shapee.setPosition(300.f, 305.f);
    //shapee.setOutlineColor(sf::Color(250, 150, 100));

    sf::CircleShape triangle(80.f, 3);
    triangle.setFillColor(sf::Color::Blue);
    triangle.setPosition(0.f, 500.f);
    // define a square
    sf::CircleShape square(80.f, 4);
    square.setFillColor(sf::Color::Yellow);
    square.setPosition(500.f, 5.f);

    // define an octagon
    sf::CircleShape octagon(80.f, 80);
    octagon.setFillColor(sf::Color::Magenta);
    octagon.setPosition(100.f, 30.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(shape);
        //window.draw(shapee);
        window.draw(shapea);
        window.draw(triangle);
        window.draw(square);
        window.draw(octagon);

        window.display();
    }

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
