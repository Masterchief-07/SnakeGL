#pragma once
#include <string_view>
#include <vector>

class ISnake
{
    public:
    using Position = std::pair<unsigned int, unsigned int>;
    using Body = std::vector<Position>;
    enum class Direction : unsigned int
    {
        UP = 0,
        DOWN,
        LEFT,
        RIGHT
    };

    virtual ~ISnake() = default;

    virtual void update() = 0;
    virtual bool isDead() const = 0;

    virtual void            setStart(Position pos, Direction dir) = 0;
    virtual void            eat(int points) = 0;
    virtual void            changeDir(Direction dir) = 0;
    virtual unsigned int    getSize() const = 0;
    virtual const Body&     getBody() const = 0;
    virtual const Position& getHead() const = 0;
    virtual Direction       getDirection() const = 0;
};

class IDisplay
{
    public:
    virtual ~IDisplay() = default;

    virtual void clear() = 0;
    virtual void setDisplaySize(unsigned int width, unsigned int height) = 0;
    virtual void drawSquare(unsigned int posX, unsigned int posY, unsigned int width, unsigned int height, unsigned int color) = 0;
    virtual void drawCircle(unsigned int posX, unsigned int posY, unsigned int radius, unsigned int color) = 0;
    virtual void drawText(unsigned int posX, unsigned int posY, std::string_view message, unsigned int color) = 0;

};