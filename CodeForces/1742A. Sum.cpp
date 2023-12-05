#include <iostream>
 
using namespace std;
 
int main()
{
    long long a,b,c,sum1,sum2,sum3,n,i;
 
    cin>>n;
    for(i=0;i<n;i++){
    cin>>a>>b>>c;
 
 
 
    sum1=a+b;
    sum2=a+c;
    sum3=b+c;
 
 
    if(sum1==c || sum2==b || sum3==a){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }}
 
 return 0;
}
