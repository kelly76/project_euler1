#include <iostream>

using namespace std;

int main()
{
int sum1=0,sum2=0,r;
for(int i=1;i<=100;i=i+1){
    r=i*i;
    cout<<r<<" ";
    sum1=sum1+r;
}
for(int j=1;j<=100;j=j+1){
    sum2=sum2+j;
    cout<<sum2<<" ";
}
cout<<sum1-(sum2*sum2)<<endl;
    return 0;
}
