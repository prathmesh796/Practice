#include <vector>
#include <iomanip>
#include <algorithm>
#include <iostream>

using namespace std;

void printTable(vector<vector<float>> items, bool isResult)
{
    const int cellWidth = 10;
    cout << setw(cellWidth) << left << "Profit |";
    cout << setw(cellWidth) << left << "Weight  |";
    if (isResult)
        cout << setw(cellWidth) << left << "Fraction |";
    else
        cout << setw(cellWidth) << left << "P/W |";
    cout << endl;

    for (int i = 0; i < 3; ++i)
        cout << "+ -------- +";

    cout << endl;
    for (int i = 0; i < items.size(); i++)
    {
        cout << setfill(' ') << setw(cellWidth) << left << items[i][1] << " |";
        cout << setw(cellWidth) << left << items[i][2] << " |";
        cout << setw(cellWidth) << left << items[i][0] << " |";
        cout << endl;
    }
    cout << endl;
}

void takeInput(vector<vector<float>> &items, int &n, float &maxWeight)
{
    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        float profit, weight, pw;
        cout << "Enter profit for item " << i + 1 << ": ";
        cin >> profit;
        cout << "Enter weight for item " << i + 1 << ": ";
        cin >> weight;
        cout << endl;
        pw = profit / weight;
        vector<float> item;
        item.push_back(pw);
        item.push_back(profit);
        item.push_back(weight);

        items.push_back(item);
    }

    cout << "Enter maximum weight allowed: ";
    cin >> maxWeight;
    cout << endl;
}

int main()
{
    vector<vector<float>> items;
    int n;
    float maxWeight;
    takeInput(items, n, maxWeight);

    cout << "Entered Elements are: " << endl;
    printTable(items, false);
    sort(items.begin(), items.end(), greater<vector<float>>());
    vector<vector<float>> result = items;
    float profit = 0;

    for (int i = 0; i < n; i++)
    {
        if (items[i][2] <= maxWeight)
        {
            maxWeight -= items[i][2];
            profit += items[i][1];
            result[i][0] = 1;
        }
        else
        {
            profit += items[i][1] * (maxWeight / items[i][2]);
            result[i][0] = (maxWeight / items[i][2]);
            break;
        }
    }

    cout << "Final Result: " << endl;
    printTable(result, true);
    cout << "Final Profit: " << profit << endl;

    return 0;
}