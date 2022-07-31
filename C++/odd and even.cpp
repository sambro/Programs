#include<iostream>

using namespace std;

int main()
{
    int a;

    std::cout<<"Enter the value of a: ";
    std::cin>>a;

    (a%2==0)?cout<<"Even"<<"\n":cout<<"Odd"<<"\n";

    return 0;
}
