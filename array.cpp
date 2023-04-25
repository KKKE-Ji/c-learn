#include<iostream>

int main()
{
    int exapmle[5];
    int *ptr = exapmle;
    exapmle[2] = 5;
    *(ptr + 2) = 6;
    exapmle[0] = 2;
    exapmle[4] = 4;
    std::cout << exapmle[0] << std::endl;
    std::cout<<exapmle<<std::endl;
    
    int* anothrt = new int[5];

    delete [] anothrt;
    return 0;
}