#include <iostream>
#include <math.h>

using namespace std;

double rows_with_boxes(double boxes)
{
    double rows_root_one = (-1 + sqrt((1 + 4 * 2 * boxes))) / 2;
    double rows_root_two = (-1 - sqrt((1 + 4 * 2 * boxes))) / 2;

    if (rows_root_one >= rows_root_two)
        return rows_root_one;

    return rows_root_two;
}

int main()
{
    int rooms, boxes;
    cin >> rooms;

    int arr[rooms];

    for (int i = 0; i < rooms; i++)
    {
        cin >> boxes;
        cout << floor(rows_with_boxes(boxes)) << endl;
    }
}