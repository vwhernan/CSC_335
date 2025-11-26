using namespace std;
#include <iostream>

int Key = 0;


int InsertionSort() {
    
    return Key;
}

int MergeSort() {

    return Key;
}

int QuickSort() {

    return Key;
}


int RecursiceAddIntegers(int n) {
    
    if (n < 0) {
     cout <<("Input 'n' must be a non-negative integer.");
    }

    
    if (n == 0) {
        return 0;
    }


    return n + RecursiceAddIntegers(n - 1);
}

int main()
{
    int n = 2;
    
    //should return 3
    int sum = RecursiceAddIntegers(n);
    cout << "The sum when n = " << n << " is: " << sum << endl;
    
    sum = 0;
    n = 10; 

    //should return 55
    sum = RecursiceAddIntegers(n);
    cout << "The sum when n = " << n << " is: " << sum << endl;

    sum = 0;
    n = 15;

    //should return 120
    sum = RecursiceAddIntegers(n);
    cout << "The sum when n = " << n << " is: " << sum << endl;
    
    return 0;
}

