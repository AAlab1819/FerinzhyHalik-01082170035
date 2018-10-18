#include <iostream>

using namespace std;


void heapify(int arr[], int id[], int newZ[], int n, int i)
{
    int largest=i;
    int left = (2*i)+1;
    int right = (2*i)+2;

    if(left < n && arr[left] > arr[largest])
        largest = left;

    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i)
    {
        swap(arr[i], arr[largest]);
        swap(id[i], id[largest]);
        swap(newZ[i], newZ[largest]);

        heapify(arr, id, newZ, n, largest);
    }
}


void heapsort(int arr[], int id[], int newZ[], int n)
{
    for(int i=(n/2)-1; i>=0; i--)
        heapify(arr,id,newZ,n,i);


    for(int i= (n-1); i>=0; i--)
    {
        swap(arr[0], arr[i]);
        swap(newZ[0], newZ[i]);
        swap(id[0], id[i]);



        heapify(arr, id, newZ, i ,0);
    } 
}



void printarray(int arr[], int newZ[], int n)
{
    for(int i=(n-1); i>(n-6); i--)
    {
        cout << arr[i] << " ";
        cout << newZ[i] << " ";
        cout << endl;
    }
}

int main()
{
    int number;
    cin >> number;
    int topics[number];
    int like[number];
    int comment[number];
    int posts[number];
    int share[number];
    int OldZ[number];
    int NewZ[number];
    int move[number];

    for(int i=0; i<number; i++)
    {
        cin >> topics[i];
        cin >> OldZ[i];
        cin >> posts[i];
        cin >> like[i];
        cin >> comment[i];
        cin >> share[i];
        posts[i] = posts[i]*50;
        like[i] = like[i]*5;
        comment[i] = comment[i]*10;
        share[i] = share[i]*20;
    }

    for(int i=0; i<number; i++)
    {
        NewZ[i] = posts[i] + like[i] + share[i] + comment[i];
        move[i] = NewZ[i]-OldZ[i];    
    }

    heapsort (move, topics, NewZ, number);

    for(int i=0; i<number; i++)
    {
        for(int j=(i+1); j<number; j++)
        {
            if(move[i] == move[j])
            {
                if(topics[i]>topics[j])
                {
                swap(topics[i], topics[j]);
                swap(move[i], move[j]);
                swap(NewZ[i], NewZ[j]);  
                }
            }
        }
    }
    printarray(topics, NewZ, number);
}