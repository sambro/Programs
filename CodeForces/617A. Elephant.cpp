#include<iostream>
#include<string.h>

using namespace std;

int main(){

    long long x,v1;
    cin>>x;

    if(x>5){
        v1=x/5;

        if(x%5==0)
        {
            cout<<v1;
        }
        else if(x%5==1){
            cout<<v1+1;
        }
        else if(x%5==2){
            cout<<v1+1;
        }
        else if(x%5==3){
            cout<<v1+1;
        }
        else if(x%5==4){
            cout<<v1+1;
        }

    }

    else if(x<=5){
        v1=1;
        cout<<v1;
    }

    return 0;
    }
