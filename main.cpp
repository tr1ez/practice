#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

//#include "DCTCompression.cpp"//какие-то проблемы
//#include "FractalCompression.cpp" какие-то проблемы
//#include "Huffman.cpp"
//#include "LZWCompressor.cpp"
#include "RLECompressor.cpp"
int main()
{
    // Создаем окно
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Demonstration");

    // Создаем круг
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(300.f, 200.f);

    // Основной цикл программы
    while (window.isOpen())
    {
        // Обрабатываем события
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Очищаем окно
        window.clear(sf::Color::White);

        // Рисуем круг
        window.draw(circle);

        // Отображаем содержимое окна
        window.display();
    }

    return 0;
}