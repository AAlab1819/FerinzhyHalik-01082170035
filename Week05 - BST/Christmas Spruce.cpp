#include <bits/stdc++.h>

using namespace std;
  int parents[10000];
  int leafs[10000];
  int counter[10000];
  int i;
  int vertices;

int main()
{

     cin>>vertices;
    for(i=2; i<=vertices; i++)
    {
        cin>>parents[i];
       ++leafs[parents[i]];
    }

    for(i=1; i<=vertices; i++)
    {
        if(!leafs[i])
        {
            ++counter[parents[i]];
        }
    }

    for(i=1; i<=vertices; i++)
    {
        if(leafs[i] && counter[i]<3)
        {
            break;
        }
    }
    if(i>vertices)
    {
       cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}
