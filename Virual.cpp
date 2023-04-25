//虚函数
#include <iostream>
#include <string>
class Entity
{
public:
    virtual std::string GetName()//在调用时虚函数可以被覆盖
    {
        return "Entity";
    }
};
class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string &name): m_Name(name) {}
    std::string GetName() override//override表示覆盖父类的方法(可读性增加)
    //如果试图覆盖父类的方法，编译器会报错
    {
        return m_Name;
    }
};


int main(int argc, const char **argv)
{
    Entity *e = new Entity();
    std::cout << e->GetName() << std::endl;
    Player *p = new Player("Cherno");
    std::cout << p->GetName() << std::endl;
    //entity and player共用一个指针
    //通常定义方法时是在类内部实现，调用也会调用该类内部的方法 
    Entity *entity = p;
    std::cout << entity->GetName() << std::endl;
    return 0;
}