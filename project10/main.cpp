#include <iostream>

using namespace std;

int primo(int n)
{int cont=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cont=cont+1;
        }
    }
    if(cont==2){
        return true;
    }else
        return false;
}

int main()
{
long long a=2000000,sum=0;
for(int j=2;j<=a;j=j+1){
    if(primo(j)){
        cout<<j<<" ";
        sum=sum+j;
    }
}
cout<<primo(31)<<endl;
cout<<sum<<endl;
    return 0;
}
