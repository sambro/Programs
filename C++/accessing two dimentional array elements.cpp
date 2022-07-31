#include<iostream>

using namespace std;

int main()
{
    int i, j;
    int a[5][2]=
    {
        {0,0},
        {1,2},
        {2,4},
        {3,6},
        {4,8}
    };

    for(i=0;i<5;i++)
    {
    for(j=0;j<2;j++)
    {
    std::cout<<"a["<<i<<"]["<<j<<"]=";
    std::cout<<a[i][j]<<endl;
    }
    }
        return 0;
}
