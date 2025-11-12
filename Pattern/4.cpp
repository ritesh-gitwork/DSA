#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - (i + 1) + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}