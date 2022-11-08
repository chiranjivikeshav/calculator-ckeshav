#include<iostream>
using namespace std;
int main(){
double num1,num2;
char op;
cout<<"enter operator + - * / ^ "<<endl;
cin>>op;
cout<<"enter num1 and num2"<<endl;
cin>>num1>>num2;
switch (op){
case'+':
        {cout<<num1<<op<<num2<<" = "<<num1 + num2<<endl;
      break;
}
 case'-':
        {cout<<num1<<op<<num2<<" = "<<num1 - num2<<endl;
      break;
}
 case'*':
        {cout<<num1<<op<<num2 <<"= "<<num1 * num2<<endl;
      break;
}
 case'/':
        {if(num2==0){
            cout<<"denominater is zero"<<endl;}
     else{cout<<num1<<op<<num2<<" = "<<num1 / num2<<endl;
      break;}
}
 case'^':{
     int x=num1;
     for(int i=1;i<num2;i++)
        {
         num1=num1*x;
     }
     cout<<x<< op <<num2<<" = "<<num1<<endl;}
      break;
}
    return 0;
}
