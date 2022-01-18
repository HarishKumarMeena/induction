#include <iostream>
#include <vector>

using namespace std;

//checking if the number is prime
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

    //Considered some cases
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
    
    // using vector as we didn't how many prime numbers are going to be there
    vector<int> prime_num;
    
    for (int i = 2; i <= n; i++)
    {
        if (prime(i) == 0)
            prime_num.push_back(i);
    }


    int count = 0;
    int check = 0;

    int k;
    for (k = 0; k < prime_num.size(); k++)
    {
        // if we get the desired number of harshprime than we should stop the loop
        if (count == x && check == 0)
        {
            cout << "YES" << endl;
            check = 1;
            break;
        }
        
        //checking each cases 
        for (int l = 0; l < prime_num.size(); l++)
        {

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
