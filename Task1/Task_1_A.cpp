#include <iostream>

using namespace std;

int main()
{
    int toffies, rupees;
    cin >> toffies >> rupees;

    int toffie_price[toffies];

    int count = 0;

    // making the array of toffie price
    for (int i = 0; i < toffies; i++)
        cin >> toffie_price[i];
    
    //sorting the array O(n)
    for (int j = 0; j < toffies; j++)
    {
        for (int k = 0; k < toffies - 1; k++)
        {
            if (toffie_price[k] > toffie_price[k + 1])
            {
                int temp = toffie_price[k];
                toffie_price[k] = toffie_price[k + 1];
                toffie_price[k + 1] = temp;
            }
        }
    }
    
    // reducing the price of toffies from total rupees 
    for (int l = 0; l < toffies; l++)
    {

        if (rupees < toffie_price[l])
            break;
        rupees -= toffie_price[l];
        count++;
    }

    cout << count << endl;
}
