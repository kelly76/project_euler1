#include <iostream>

using namespace std;

int palindromo(int n)
{
int u,d,c,m,dm,cm,rev;
if(n>99999){
    u=n%10;
    d=(n-u)/10%10;
    c=(n-u-d)/100%10;
    m=(n-u-d-c)/1000%10;
    dm=(n-u-d-c-m)/10000%10;
    cm=(n-u-d*10-c*100-m*1000-dm*10000)/100000%10;
rev=u*100000+d*10000+c*1000+m*100+dm*10+cm;
}
if(n<=99999){
     u=n%10;
    d=(n-u)/10%10;
    c=(n-u-d)/100%10;
    m=(n-u-d-c)/1000%10;
    dm=(n-u-d-c-m)/10000%10;
rev=u*10000+d*1000+c*100+m*10+dm;
}
if (rev==n)
    return true;
else
    return false;
}

int main()
{
    int mayor,b,i=999,j=999;
mayor=10000;
for(int i=100;i<=999;i=i+1){
    for(int j=100;j<=999;j=j+1){
        b=i*j;
        if(palindromo(b))
            if(b>mayor)
                mayor=i*j;
    }
}
cout<<"b: "<<mayor;
    return 0;
}
