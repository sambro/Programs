#include<iostream>

using namespace std;

int main()
{
    int a=0,n,i,value=0;

    std::cout<<"Enter the number of values: ";
    std::cin>>n;

    for(i=0;i<n;i++)
    {
        std::cout<<"Enter the numbers : ";
        std::cin>>value;

        a=a+value;
    }

    std::cout<<"The average is: "<<a<<endl;

    return 0;
}
