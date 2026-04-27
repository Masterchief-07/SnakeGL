#include <SnakeGL/snake.hpp>
#include "snake.hpp"
#include <cmath>

void Snake::setStart(Position pos, Direction dir)
{
    _body = Body{pos};
    _dir = dir;
}

void Snake::eat(int points)
{
    if(points > 0)
    {
        for(unsigned int i = 0; i < points; i++)
        {
            const auto& lastPosition = _body.back();
            _body.emplace_back(lastPosition.first, lastPosition.second);
        }
    }
    else
    {
        for(unsigned int i = 0; i < std::abs(points); i++)
        {
            _body.pop_back();
        }
    }
}

void Snake::update()
{
    auto headPosition = _body.front();

    switch (_dir)
    {
    case Direction::UP:
    {
        headPosition.second -= 1; 
    }
        break;
    case Direction::DOWN:
    {
        headPosition.second += 1; 
    }
        break;
    case Direction::LEFT:
    {
        headPosition.first -= 1; 
    }
        break;
    case Direction::RIGHT:
    {
        headPosition.first += 1; 
    }
        break;
    default:
        break;
    }

    for(unsigned int pos = 1; pos < _body.size(); pos++)
    {
        _body.at(pos) = _body.at(pos - 1);
    }

    _body.front() = headPosition;
}
