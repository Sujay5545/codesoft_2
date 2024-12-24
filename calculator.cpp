#include<bits/stdc++.h>
using namespace std;
int main(){
    float ans=0,b,a;
    char c;
    cout<<"Enter Number 1 :";
    cin>>ans;
    cout<<"Enter operator (+,-,*,/) :";
    cin>>c;
    cout<<"Enter Number 2 :";
    cin>>b;
    a=ans;
    switch(c){

        case '+':
        ans+=b;
        break;

        case '-':
        ans-=b;
        break;

        case '*':
        ans*=b;
        break;

        case '/':
        if(b==0){
            cout<<"Can't divide by zero !\n";
        }
        else{
            ans/=b;
        }
        break;

        default:
        cout<<"Calculation can't be done, Please Enter a valid operator!!\n";
        break;
    }
    
    cout<<"The result of "<<a<<c<<b<<" is : "<<ans<<endl;
return 0;
}