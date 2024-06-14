#include <iostream>

using namespace std;

int main()
{
    int n, w, l = 0, i, lead = 0, m, key;
    cin >> n;
    m = 2 * n;
    int A[m], K[n];
    for (i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    for (i = 0; i < m; i++)
    {
        if (i % 2 != 0)
            lead = A[i - 1] - A[i];
    }
    if (lead < 0)
        w = 1;
    else
        w = 2;
    for (i = 0; i < m; i++)
    {
        if (i % 2 != 0)
        {
            lead = A[i - 1] - A[i];
            if (lead < 0)
                lead = -lead;
            if (i != 0)
                K[i - 1] = lead;
        }
    }
    key = K[2];
    for (i = 0; i < n; i++)
        if (key < K[i])
            l = K[i];
    cout << w << " " << l << endl;
    return 0;
}
