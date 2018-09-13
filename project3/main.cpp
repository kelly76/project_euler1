#include <iostream>

using namespace std;

int main()
{long long a=12345678;
int mayor,primo,cont;
for(int i=1;i<=a;i=i+1){
    for(int j=1;j<=i;j=j+1){
        if(i%j==0)
            cont=cont+1;
    }
    if(cont==2)
        primo=i;
    if(a%primo==0)
        mayor=primo;
    cont=0;
}
cout<<"mayor primo: "<<mayor<<endl;
    return 0;
}
