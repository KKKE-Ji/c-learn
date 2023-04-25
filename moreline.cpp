/*
 * @Author: kkke
 * @Date: 2023-04-25 20:47:45
 * @LastEditors: kkke
 * @LastEditTime: 2023-04-25 21:09:22
 * @Description: 多线程防止阻塞程序进行，多线程并行，可以提高程序的效率
 */
#include<iostream>
#include<string>
#include<thread>
using namespace std;

static bool s_Finished = false; 

void DoWork()
{
    using namespace std::literals::chrono_literals;
    cout <<"started thread id = " << this_thread::get_id() << endl;
    while (!s_Finished)
    {
    cout << "Working ..." << endl;
    this_thread::sleep_for(1s);
    }
    cout << "DoWork Finished." << endl;
}

int main()
{

    thread worker(DoWork);//创建线程
    cout <<"started thread id = " << this_thread::get_id() << endl;
    cin.get();
    s_Finished = true;//设置结束标志
    
    worker.join();//等待线程结束

    cin.get();
    return 0;
}