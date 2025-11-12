#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        // space
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}