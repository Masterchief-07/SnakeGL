#pragma once
#include <interface.hpp>



class Snake : public ISnake
{
    public:

    Snake();
    ~Snake() override;

    void setStart(Position pos, Direction dir) override;
    void eat(int points) override;
    inline void changeDir(Direction dir) override { _dir = dir;};
    inline unsigned int     getSize() const override {return _body.size();};
    inline const Body&      getBody() const override {return _body;};
    inline const Position&  getHead() const override {return _body.front();}
    inline bool             isDead() const override {return _isDead;}

    void update() override;

    private:

    Body _body;
    Direction _dir = Direction::RIGHT;
    bool _isDead = false;
};