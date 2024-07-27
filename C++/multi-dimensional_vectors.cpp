#include <vector> //including vector class header
#include <iostream>

using namespace std;

int main()
{
    int n, q, i, j;

    cin >> n >> q;

    vector<vector<int>> main_array;

    for (i = 0; i < n; i++)
    {
        int k;

        cin >> k;

        vector<int> element_array;

        for (j = 0; j < k; j++)
        {
            int c;
            cin >> c;

            element_array.push_back(c);
        }

        main_array.push_back(element_array);
    }

    for (i = 0; i < q; i++)
    {
        int n, k;
        cin >> n >> k;

        cout << main_array[n][k] << endl;
    }
    
    return 0;
}