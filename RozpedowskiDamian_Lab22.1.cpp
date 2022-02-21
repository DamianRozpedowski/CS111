#include <iostream>
using namespace std;

void move(int arr[], int num);

int main()
{
    int x[5] = { 1, 2, 3, 4, 5 };
    move(x, 5);
    cout << x[0] << x[1] << x[2] << x[3] << x[4] << endl;
    return 0;
}

void move(int arr[], int num)
{
    for (int x = 0; x < num; x++)
    {
        int temp = arr[x];
        arr[x] = arr[num-1];
        arr[num - 1] = temp;
    }
    return;
}