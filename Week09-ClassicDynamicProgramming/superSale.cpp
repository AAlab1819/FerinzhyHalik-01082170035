#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max(int x, int y)
{
    return (x > y)? x : y ;
}

int knapSack(int z, int wt[], int val[], int n)
{
   int i, j;
   int K[n+1][z+1];

   for (i = 0; i <= n; i++)
   {
       for (j = 0; j <= z; j++)
       {
           if (i==0 || j==0)
               K[i][j] = 0;
           else if (wt[i-1] <= j)
                 K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]],  K[i-1][j]);
           else
                 K[i][j] = K[i-1][j];
       }
   }
   return K[n][z];
}

int main()
{
    std::ios::sync_with_stdio(false);
    int input;

    cin >> input;
    while (input--)
    {
        int n;
        int sum = 0;
        cin >> n;
        int val[n], wt[n];
        for (int i=0; i<n; i++)
        {
            cin >> val[i];
            cin >> wt[i];
        }
        int people, z;
        cin >> people;

        for (int i=0; i<people; i++)
        {
            cin >> z;
            sum += knapSack(z, wt, val, n);
        }
        cout << sum << endl;
    }
}