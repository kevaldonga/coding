#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "enter the number of integers you want to enter " << endl;
    cin >> n;
    int *ptr = new int[n]; // the memory is allocated
    for (int i = 0; i < n; i++)
    {
        cout << "enter the integer " << i + 1 << ": " << endl;
        cin >> ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "the value of integer " << i + 1 << " is : " << ptr[i] << endl;
    }
    delete[] ptr; // the memory is deallocated
    return 0;
}