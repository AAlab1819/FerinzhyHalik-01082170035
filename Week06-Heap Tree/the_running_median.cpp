#include <bits/stdc++.h>

using namespace std;


void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2*i) + 1;
    int right = (2*i) + 2;


    if (left < n && arr[left] > arr[largest])
        largest = l;

    if (right < n && arr[right] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n)
{

    for (int i = (n /2) - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i=(n-1); i>=0; i--)
    {
        swap(arr[0], arr[i]);


        heapify(arr, i, 0);
    }
}
int main()
{
    int a;
    float median;
    cin>>a;
    int current_list[a]={0};
    for (int i=0; i<a; i++)
    {
        cin>>current_list[i];
        heapSort(current_list, i+1);

        if ((i+1)%2==0)
        {
            median = current_list[i/2]+current_list[(i/2)+1];
            median = median/2;
        }
        else{
            median = current_list[(i+1)/2];
        }
        
        cout<<fixed<<setprecision(1)<<median<<endl;
    }
    return 0;
}