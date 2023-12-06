#include<iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,d,sum=0,str_len,i;
    string str;
 
    cin>>a;cin>>b;cin>>c;cin>>d;
    cin>>str;
 
    str_len=str.size();
 
    for(i=0;i<str_len;i++){
        if(str[i]=='1'){
            sum=sum+a;
        }
        else if(str[i]=='2'){
            sum=sum+b;
        }
        else if(str[i]=='3'){
            sum=sum+c;
        }
        else if(str[i]=='4'){
            sum=sum+d;
        }
 
        else{
            cout<<"Not found"<<endl;
        }
 
    }
 
cout<<sum;
 return 0;
}
