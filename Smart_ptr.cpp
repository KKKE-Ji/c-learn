/*
 * @Author: kkke
 * @Date: 2023-04-25 13:42:51
 * @LastEditors: kkke
 * @LastEditTime: 2023-04-25 14:04:14
 */


#include<iostream>
#include<string>
#include<memory>
using namespace std;
class Entity
{
public:
    Entity()
    {
        //cout << "Created Entity!" << endl;
    }
    ~Entity()
    {
        //cout << "Destroyed Entity!" << endl;
    }
    void Print() const
    {
        cout << "print!" << endl;
    }
    int x;
};
class ScopedPtr
{
private:
    Entity* m_obj;
public:
    ScopedPtr(Entity* ptr):m_obj(ptr)//构造并将指针给m_Ptr
    {

    }
    ~ScopedPtr()
    {
        cout << "ScopedPtr Destructor!" << endl;
        delete m_obj;
    }
    Entity* Getobj()
    {
        return m_obj;
    }
    const Entity* operator->() const//重载->运算符
    {
        return m_obj;
    }
};


int main()
{
    const ScopedPtr entity = new Entity();
    entity->Print();
    
    Entity* e = new Entity();
    e->Print();




    return 0;
}