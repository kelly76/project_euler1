#include <iostream>

using namespace std;

int main()
{
int a,b,c,tri;
for(a=1;a<=999;a=a+1){
    for(b=2;b<=999;b=b+1){
        for(c=3;c<=999;c=c+1){
            if(a<b<c&&a+b+c==1000){
                if(a*a+b*b==c*c)
                    tri=a*b*c;
            }
        }
    }
}
cout<<tri<<" ";
    return 0;
}
