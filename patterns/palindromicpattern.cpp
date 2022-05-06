#include <iostream>
using namespace std;

int main()
{

    int n = 7;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int p = i; p >= 1; p--)
        {
            cout << p << " ";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}