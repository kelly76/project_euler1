#include <iostream>

using namespace std;

int main()
{
long long primo,i=2,cont=0,c=1;
while(c<=10001){
    for(int j=1;j<=i;j=j+1){
        if(i%j==0)
            cont=cont+1;
    }
    if(cont==2){
        primo=i;
        c=c+1;
        cout<<primo<<" ";
    }
    cont=0;
    i=i+1;
}
cout<<primo<<endl;
    return 0;
}
