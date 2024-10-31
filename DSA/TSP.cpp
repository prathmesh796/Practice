#include <vector>
#include <algorithm>
#include <iostream>
#include<limits.h>
#include <numeric>

using namespace std;

const int INF = INT_MAX;

class TSP
{
    int n;
    vector<vector<int>> costMatrix;

public:
    TSP(int n, vector<vector<int>> costMatrix) : n(n), costMatrix(costMatrix) {}

    int calculateCost(vector<int> &path)
    {
        int cost = 0;
        for (int i = 0; i < path.size() - 1; i++)
        {
            cost += costMatrix[path[i]][path[i + 1]];
        }
        cost += costMatrix[path.back()][path[0]];
        return cost;
    }

    void solve()
    {
        vector<int> bestPath;
        int minCost = INF;

        vector<int> minEdge(n, INF);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (costMatrix[i][j] != 0 && costMatrix[i][j] < minEdge[i])
                {
                    minEdge[i] = costMatrix[i][j];
                }
            }
        }

        vector<int> path(n);
        iota(path.begin(), path.end(), 0);
        do
        {
            int currentCost = calculateCost(path);
            if (currentCost < minCost)
            {
                minCost = currentCost;
                bestPath = path;
            }
        } while (next_permutation(path.begin(), path.end()));
        cout << "Minimum cost: " << minCost << endl;
        cout << "Path: ";
        for (int city : bestPath)
        {
            cout << city << " ";
        }
        cout << bestPath[0] << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of cities: ";
    cin >> n;

    vector<vector<int>> costMatrix(n, vector<int>(n));
    cout << "Enter the cost matrix (enter " << n * n << " elements row-wise): " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> costMatrix[i][j];
        }
    }

    TSP tsp(n, costMatrix);
    tsp.solve();
    return 0;
}