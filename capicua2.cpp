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
    cout<<"Enter the starting number of the range: ";
    cin>>a;
    cout<<"Enter the end number of the range: ";
    cin>>b;

    for (number=a; number<=b; number=number+1){
        if (number==number_inverted(number)){
            count+=1;
            cout<<"The number of capicuas in a range of "<<a<<" to "<<b<<" is of: "<<count<<" capicuas"<<endl;
        }
    }

    return 0;
}
