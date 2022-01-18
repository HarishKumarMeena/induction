#include <iostream>
#include <vector>

using namespace std;

int prime(int number)
{
    if (number == 2)
        return 0;
    else if (number % 2 == 0)
        return 1;
    else
    {
        for (int i = 3; i < (number / 2) + 1; i++)
        {
            if (number % i == 0)
                return 1;
        }
        return 0;
    }
}

int main()
{
    int n, x;
    cin >> n >> x;

    if (n == 2 && x > 0)
    {
        cout << "NO" << endl;
        exit(0);
    }

    if (x == 0)
    {
        cout << "YES" << endl;
        exit(0);
    }

    vector<int> prime_num;

    for (int i = 2; i <= n; i++)
    {
        if (prime(i) == 0)
            prime_num.push_back(i);
    }

    // cout << "\nPrime Numbers b/w 2 and " << n << " are:" << endl;

    // for (int j = 0; j < prime_num.size(); j++)
    // {
    //     cout << prime_num[j] << " ";
    // }
    // cout << endl;

    int count = 0;
    int check = 0;

    int k;
    for (k = 0; k < prime_num.size(); k++)
    {
        if (count == x && check == 0)
        {
            cout << "YES" << endl;
            check = 1;
            break;
        }

        for (int l = 0; l < prime_num.size(); l++)
        {
            // cout << "\nPairs: " << endl;
            // cout << prime_num[l] << " " << prime_num[l + 1] << " Checking for " << prime_num[k] << endl;

            if (prime_num[l] + prime_num[l + 1] + 1 == prime_num[k])
            {
                count++;
                // cout << prime_num[k] << endl;
            }
            if (count == x && check == 0)
            {
                cout << "YES" << endl;
                check = 1;
                break;
            }
            if (prime_num[l] + prime_num[l + 1] + 1 > prime_num[k])
                break;
        }
    }

    if (k == prime_num.size() && count != x && check != 1)
        cout << "NO" << endl;
}