#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the value of N" << endl;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (j <= i)
            {
                cout << "x ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j <= N; j++)
        {
            if (j > N - i)
            {
                cout << "x ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (j <= N - i+1)
            {
                cout << "x ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j <= N; j++)
        {
            if (j>=i)
            {
                cout << "x ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}