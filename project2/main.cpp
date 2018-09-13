#include <iostream>

using namespace std;

int main()
{
int cont,sum=0,a=1,b=1;
while (true){
        cont=a+b;
        a=b;
        b=cont;
        if (cont>=4000000)
            break;
        if(cont%2==0)
            sum=sum+cont;
}
cout<<"suma: "<<sum<<endl;
    return 0;
}
