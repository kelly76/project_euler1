#include <iostream>

using namespace std;

int main()
{
int b,a;
cin>>a>>b;
cout<<"el numero mayor es: ";
(a>b)?cout<<a:cout<<b;
return 0;

}
/*
{
int n,a=1;
cin>>n;
for(int i=1;i<=n;i++){
    (a<<=1);
}
cout<<a;
}

{
int a;
cin>>a;
if((a|1)==a)
    cout<<"es impar"<<endl;
else
    cout<<"es par"<<endl;
}

{
int a;
cin>>a;
if (a&1)
    cout<<a<<" es impar"<<endl;
else
    cout<<a<<" es par"<<endl;
return 0;
}*/
