#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){

    long double i,n,a,c;
    long long b,t;
    cin>>t;

    for(i=0;i<t;i++){
        cin>>n;

        if(remainder(n,2) == 0)
            {
            c=n/2;
            b=c-1;
            }

        if(remainder(n,2) != 0)
            {
            c=n/2;
            b=c-0.5;
            }
    cout<<b<<endl;


    }
    return 0;
}
