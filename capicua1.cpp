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
    int a, count=0, number;
    cout<<"Insereix-hi un numero enter: ";
    cin>>a;

    for (number=0; number<=a; number=number+1){
        if (number==number_inverted(number)){
            count+=1;
            cout<<"El numero de capicuas que hi ha en un rang de 0 a "<<a<<" es de: "<<count<<" capicuas"<<endl;
        }
    }

    return 0;
}
