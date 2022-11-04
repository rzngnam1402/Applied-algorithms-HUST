#include <bits/stdc++.h>

using namespace std;

bool markRow[9][10];
bool markCol[9][10];
bool markSqr[3][3][10];
int x[9][9];

void solution()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << x[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
}

bool check(int v, int r, int c)
{
    return ( markRow[r][v] == false &&
             markCol[c][v] == false &&
             markSqr[r /3][c / 3][v] == false);
}

void Try(int r, int c)
{
    for (int v = 1; v <= 9; v++)
    {
        if (check(v, r, c))
        {
            x[r][c] = v;
            markRow[r][v] = true;
            markCol[c][v] = true;
            markSqr[r /3][c / 3][v] = true;
            if ((c == 8) && (r == 8))
                solution();
            else if (c < 8)
                Try(r, c + 1);
            else
                Try(r + 1, 0);
            markRow[r][v] = false;
            markCol[c][v] = false;
            markSqr[r /3][c / 3][v] = false;
        }
    }
}

int main()
{
    for(int v = 1; v <= 9; v ++)
    {
        for (int r = 0; r <= 8; r++)
        {
            markRow[r][v] = false;
        }
        for (int c = 0; c <= 8; c++)
        {
            markCol[c][v] = false;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                markSqr[i][j][v] = false;
            }
        }
    }
    Try(0, 0);
    return 0;
}
