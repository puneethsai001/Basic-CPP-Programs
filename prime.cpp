#include <iostream>

using namespace std;

int main(){

    int n,flag = 1;

    cout << "Enter a number: ";
    cin >> n;
    
    int m = n;
    n --;

    while (n>1)
    {
        if (m%n == 0)
        {
            flag = 0;
            break;
        }
        n--;
    }

    (flag == 0) ? cout << "Not a prime number \n" : 
    cout << "Prime number \n";

    return 0;
}