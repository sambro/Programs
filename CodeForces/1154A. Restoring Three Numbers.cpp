#include<iostream>
#include<conio.h>

using namespace std;

int main(){

        int a[100],b[100];
        int i,tmp,j;

        for(i=0;i<4;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<4;i++){

            for(j=0;j<4-i-1;j++){

                    if(a[j]>a[j+1]){
                        tmp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=tmp;}
                else{
                    continue;
                    }
            }
        }

        b[0]=a[3]-a[1];
        b[1]=a[2]-b[0];
        b[2]=a[1]-b[1];

        for(i=0;i<3;i++)
        {
            cout<<b[i]<<"\n"<<endl;
        }

        return 0;

}
