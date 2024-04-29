#ifndef Rectangle_h
#define Rectangle_h

#include <SFML/Graphics.hpp>
using namespace sf;

class Rectangle{
private:
    Vector2f speed;
    Vector2f objective;
    RectangleShape shape;

public:
    Rectangle(Vector2f size);
    Rectangle(Vector2f size, Vector2i position);

    void update();
    void setObjective(Vector2f objectivo);
    void drawTo(RenderWindow &window);
};

#endif