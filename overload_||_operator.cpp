#include<iostream>
using namespace std;
class Numbers{
public:
	int a;
	int operator||(Numbers num1){
	return a&&num1.a;
}
};

int main(){
Numbers num1,num2;
cout<<"Enter a number"<<endl;
cin>>num1.a;
cout<<"Enter second number"<<endl;
cin>>num2.a;
int num3 = num1||num2;
cout<<"After performing operator overloading on || to get && the result is :"<<num3<<endl;

return 0;
}
