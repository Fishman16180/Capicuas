/*################################

    --program made by Fishman--

  ################################*/

#include <iostream>

using namespace std;

int number_inverted(int n){
    int number=0, rest;
    while (n != 0){
        rest = n % 10;
        number = number * 10 + rest;
        n /= 10;
    }
    return number;
}

int main()
{
    int a, b, count=0, number;
    cout<<"Insereix-hi el numero inicial del rang: ";
    cin>>a;
    cout<<"Insereix-hi el numero final del rang: ";
    cin>>b;

    for (number=a; number<=b; number=number+1){
        if (number==number_inverted(number)){
            count+=1;
            cout<<"El numero de capicuas que hi ha en un rang de "<<a<<" a "<<b<<" es de: "<<count<<" capicuas"<<endl;
        }
    }

    return 0;
}
