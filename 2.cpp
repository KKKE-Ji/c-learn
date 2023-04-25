#include<iostream>
using std::cout;
using std::endl;
using std::cin;
int main() {

    double *p = new double[3];
    p[0] = 0.01;
    p[1] = 0.02;
    p[2] = 0.03;
    cout<<p[0]<<endl<<p[1]<<endl<<p[2]<<endl;
    if(p[0] and p [1] == 0.01)
    {
        cout<<"okk"<<endl;
    }
    else
        cout<< "no"<<endl;
    delete [] p; 
    return 0;
}

