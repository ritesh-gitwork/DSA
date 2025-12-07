#include <bits/stdc++.h>
using namespace std;

void namePrint(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "ritesh" << endl;
    namePrint(i + 1, n);
}

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    namePrint(1, n);
    return 0;
}
