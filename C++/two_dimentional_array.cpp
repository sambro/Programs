#include<iostream>

using namespace std;

int main()
{
    int a[5][2]=
    {
        {0,0},
        {1,2},
        {2,4},
        {3,6},
        {4,8}
    },i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)

        std::cout<<"["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
    }

    return 0;
}
