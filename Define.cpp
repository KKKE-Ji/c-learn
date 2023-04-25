/*
 * @Author: kkke
 * @Date: 2023-04-25 21:36:04
 * @LastEditors: kkke
 * @LastEditTime: 2023-04-25 22:02:46
 * @Description: 宏的特性
 */
#if 0//禁用宏

#define true rand()%2
#endif
#include<iostream>
#include<string>
#include<random>
#define WAIT std::cin.get()
#define LOG(x) std::cout << x << std::endl
int main()
{

    LOG("Hello World");


    WAIT;
}


