#include <iostream>

using namespace std;

void replacesmall(int numbers[], int size);

int main()
{
    const int size = 5;
    int numbers[size] = { 5, 12, 8, 20, 3 };

    replacesmall(numbers, size);

    return 0;
}

void replacesmall(int numbers[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (numbers[index] < 10)
        {
            numbers[index] = 10;
        }
        cout << numbers[index] << " ";
    }

}



   