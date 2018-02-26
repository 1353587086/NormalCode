
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void calculateGCD(int*);

int main()
{
    int* array = new int[2];
    cout << "Please enter the 1st num : ";
    cin >> array[0];
    cout << "Please enter the 2nd num : ";
    cin >> array[1];

    cout << endl;
    calculateGCD(array);

    cout << endl;
    cout << "The Greatest Common Division is " << array[0] << "." << endl;

    return 0;
}

void calculateGCD(int* p){
    if(p[1]!=0){
        cout << p[0] << " = " << p[0]/p[1] << "*" << p[1];

        int tmp = p[1];
        p[1] = p[0] - (p[0]/p[1])*p[1];
        p[0] = tmp;

        cout << " + " << p[1] << endl;

        calculateGCD(p);
    }
}
