#include <bits/stdc++.h>
using namespace std;

int n, m, a[101][101], t;

int main()
{
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        int dong = n, cot = m, k = 1, p = 1;
        while (k <= m * n)
        {
            for (int i = p; i <= cot; i++)
            {
                cout << a[p][i] << " ";
                k++;
            }
            for (int i = p + 1; i <= dong; i++)
            {
                cout << a[i][cot] << " ";
                k++;
            }
            if (p != dong)
                for (int i = cot - 1; i >= p; i--)
                {
                    cout << a[dong][i] << " ";
                    k++;
                }
            if (p != cot)
                for (int i = dong - 1; i >= p + 1; i--)
                {
                    cout << a[i][p] << " ";
                    k++;
                }
            p++;
            cot--;
            dong--;
        }
        cout<<endl;
    }
    return 0;
}
