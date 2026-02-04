#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int numbers[size] = { 10, 15, 20, 25, 30 };

    for (int index = 0; index < size; index++)
    {
        if (numbers[index] % 2 == 0)
        {
            cout << numbers[index] << " ";
        }
    }

    return 0;
}