#include <iostream>
 
using namespace std;
 
int main()
{
    long long a,b,c,d,i,n,countt=0;
 
    cin>>n;
 
    for(i=0;i<n;i++){
    cin>>a>>b>>c>>d;
 
         if(b>a && c<a && d<a){cout<<"1"<<endl;}
    else if(b>a && c>a && d<a){cout<<"2"<<endl;}
    else if(b>a && c>a && d>a){cout<<"3"<<endl;}
 
    else if(c>a && b<a && d<a){cout<<"1"<<endl;}
    else if(c>a && b>a && d<a){cout<<"2"<<endl;}
    else if(c>a && b>a && d>a){cout<<"3"<<endl;}
 
    else if(d>a && b<a && c<a){cout<<"1"<<endl;}
    else if(d>a && b>a && c<a){cout<<"2"<<endl;}
    else if(d>a && b>a && c>a){cout<<"3"<<endl;} ///
 
    else if(b<a && c<a && d<a){cout<<"0"<<endl;}
    else if(b<a && c>a && d<a){cout<<"1"<<endl;}
    else if(b<a && c>a && d>a){cout<<"2"<<endl;}
 
    else if(c<a && b<a && d<a){cout<<"0"<<endl;}
    else if(c<a && b>a && d<a){cout<<"1"<<endl;}
    else if(c<a && b>a && d>a){cout<<"2"<<endl;}
 
    else if(d<a && b<a && c<a){cout<<"0"<<endl;}
    else if(d<a && b>a && c<a){cout<<"1"<<endl;}
    else if(d<a && b>a && c>a){cout<<"2"<<endl;} ///
    else {cout<<"0"<<endl;}
    }
 
 return 0;
 
}
