#include <iostream>
using namespace std;

int maxRow(int arr[][5], int rows, int num);
int ifPositive(int arr[], int row);

int main()
{
    int x[2][5] = { {-1, -2, 1, -3, 5}, {1, -4, 1, -7, -8} };
    cout << maxRow(x, 2, 5) << endl; // prints 0
     // because row 0 has two positive entries and row 1 has none
    return 0;
}

int ifPositive(int arr[], int row)
{
    if (row == 0)
    {
        return 0;
    }
    int test = ifPositive(arr, row - 1);
    if (arr[row] <= arr[test])
    {
        return test;
    }
    return row;
}

int maxRow(int arr[][5], int rows, int num)
{
    int temp0 = 0, temp1 = 0;
    int counter[5] = { 0,0,0,0,0 }; 

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < num; column++)
        {
            if (arr[row][column] > 0)
            {
                counter[row] += 1;
            }
        }
    }
    return ifPositive(counter, rows - 1);
}