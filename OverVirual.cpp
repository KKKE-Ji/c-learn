//纯虚函数
#include <iostream>
#include <string>
class Pringtable//叫做接口，只有纯虚函数的类
{
public:
    virtual std::string GetName() = 0;
};

class Entity :public Pringtable
{
public:
    virtual std::string GetName() { return "Entity"; };//纯虚函数，在子类中必须重写
    std::string GetClassName() { return "Entity"; }
};


class Player : public Entity,  Pringtable
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


void PrintName(Entity *entity)
{
    std::cout << entity->GetName() << std::endl;
}
void Print(Pringtable *obj)
{
    std::cout << obj->GetName() << std::endl;
}

int main(int argc, const char **argv)
{

    //纯虚函数必须被实现，才能创建对象
    Entity *e = new Entity();
    //PrintName(e);
    Player *p = new Player("Cherno");
    //PrintName(p);
    Print(e);
    
    //entity and player共用一个指针
    //通常定义方法时是在类内部实现，调用也会调用该类内部的方法 
    Entity *entity = p;
    std::cout << entity->GetName() << std::endl;
    return 0;
}