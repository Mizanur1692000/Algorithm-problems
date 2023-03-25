//0-1 knapsack
#include<iostream>

using namespace std;


int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

    else
        return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
                knapSack(W, wt, val, n - 1));
}

int main()
{
    cout << "Enter the total number of items in a Knapsack: ";
    int n, W;
    cin >> n;
    int val[n], wt[n];
  string name;
    for (int i = 0; i < n; i++)
    {
      cin.ignore();
      cout<<"Enter the name of the item no.: "<<i+1<<" = ";
      getline(cin,name);
        cout << "Enter value of " << " item no. "<<i+1<<" ($)= ";
        cin >> val[i];
        cout << "Enter weight of " << " item no."<<i+1<<" (kg)= ";
        cin >> wt[i];
    }
    cout << "Enter the maximal weight: ";
    cin >> W;
    cout <<"Theif can carry "<<knapSack(W, wt, val, n)<< " $ which is optimal profit.";

    return 0;
}
