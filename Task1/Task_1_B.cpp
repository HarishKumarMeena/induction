#include <iostream>

using namespace std;

int main()
{
    // decleaarig variables 
    int p, q, r, s;
    cin >> p >> q >> r >> s;

    if (p == r && q == s)
    {
        cout << q - p << endl;
    }

    else if (r >= p && q >= s)
    {
        cout << s - r << endl;
    }

    else if (p >= r && s >= q)
    {
        cout << q - p << endl;
    }

    else if (r > p)
    {
        if (q > r)
            cout << q - r << endl;
        else
            cout << 0 << endl;
    }
    else if (r < p)
    {
        if (s > p)
            cout << s - p << endl;
        else
            cout << 0 << endl;
    }
}
