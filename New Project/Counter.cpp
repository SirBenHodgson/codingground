#include <iostream>

using namespace std;

int counter(){

    cout << "Enter a number to count to: " << endl;
    int n;
        cin >> n;
    int i;
    for (i = 1; i < n; i++)
        {
            cout << i << endl;
        }
    cout << n << endl;
}