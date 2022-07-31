#include<iostream>

using namespace std;

int main()
{
    int a;
    char b[10];

    std::cout<<"The address of variable a is : ";
    std::cout<<&a<<endl;

    std::cout<<"The address of variable b is : ";
    std::cout<<&b<<endl;

    return 0;
}
