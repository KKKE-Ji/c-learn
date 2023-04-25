/*
 * @Author: kkke
 * @Date: 2023-04-25 13:09:48
 * @LastEditors: kkke
 * @LastEditTime: 2023-04-25 13:35:33
 * @Description: 
 */
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Entity
{
public:
    Entity()
    {
        cout << "Created Entity!" << endl;
    }
    ~Entity()
    {
        cout << "Destroyed Entity!" << endl;
    }
    void Print()
    {
        cout << "Print!" << endl;
    }
};

int main()
{
    shared_ptr<Entity> e0;
    {
        

        {
            unique_ptr<Entity> entity = make_unique<Entity>(); // 创建一个智能指针，然后将其赋值给entity
            // unique_ptr<Entity>entity (new Entity());
            entity->Print();
            // unique_ptr<Entity>entity2
        }
        cout << "-------------------" << endl;
        {
            // shared_ptr引用计数，当引用计数为0时，才会自动释放内存，解决unique_ptr释放一次就死亡的缺点
            shared_ptr<Entity> sharedEntity = make_shared<Entity>();
            sharedEntity->Print();
            weak_ptr<Entity> weakEntity = sharedEntity;//弱指针，不会增加引用计数

        }
    }

    cin.get(); 
}
//应该尽量使用智能指针，而不是使用new和delete，会使内存管理更加简单
//对象之间共享使用shared_ptr，对象独占使用unique_ptr（优先选择）
