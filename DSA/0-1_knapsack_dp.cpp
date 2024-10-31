#include <vector>
#include <iostream>

using namespace std;

int knapSack(int W, vector<int> wt, vector<int> val, int n)
{
    vector<vector<int>> K(n + 1, vector<int>(W + 1));

    int p, q;

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            q = w;
        }
        p = i;
    }

    K[p][q] = K[p - 1][q];
    return K[n][W];
}
int main()
{
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    vector<int>
        val(n), wt(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for item " << i + 1 << ": ";
        cin >> val[i];
        cout << "Enter weight for item " << i + 1 << ": ";
        cin >> wt[i];
    }
    cout << "Enter the maximum weight capacity: ";
    cin >> W;

    cout << "Maximum profit: " << knapSack(W, wt, val, n) << endl;

    return 0;
}