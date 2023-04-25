#include<iostream>
#include<string>
class Entity
{
protected:
    int x , y;
    void Print() {}
public:
    Entity()
    {
        x = 0;
        y = 0;
        Print();
    }
};

class Player : public Entity
{
public:
    Player()
    {
        x = 1;
        Print();
    }

};

int main(int argc, const char **argv)
{
    Entity e;

    return 0;
}
