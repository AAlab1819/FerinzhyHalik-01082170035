#include <bits/stdc++.h>

using namespace std;

int main(){

    map<int, int> superior;
    int employee;
    int manager;
    int depth;
    int counter; 
    int groups = 0;
    
    cin >> employee;
    for(int i = 1; i <= employee; i++){
        cin >> manager;
        superior[i] = manager;
    }
    for(int i = 1; i <= employee; i++){
        depth = 1;
        counter = superior[i];
        while(counter != -1){
            depth++;
            counter = superior[counter];
        }
        groups = max(depth, groups);
    }
    cout << groups;
    return 0;
}