#include <iostream>

using namespace std;

int main()
{int a=20;
while(true){
    if(a%1==0&&a%2==0&&a%3==0&&a%4==0&&a%5==0&&a%6==0&&a%7==0&&a%8==0&&a%9==0&&a%10==0&&a%11==0&&a%12==0&&a%13==0&&a%15==0&&a%16==0&&a%17==0&&a%19==0&&a%20==0)
        break;
    else
        a=a+1;
}
cout<<a<<endl;
}
