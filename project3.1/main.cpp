#include <iostream>

using namespace std;

int main()
{
long long num_destino=600851475143;
int div=2;
int div_act=2;
while(num_destino >1){
    while(num_destino%div_act==0){
        div=div_act;
        num_destino=num_destino/div_act;
    }
    div_act=div_act+1;
}
cout<<div<<endl;
    return 0;
}
