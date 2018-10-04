#include<bits/stdc++.h>
using namespace std;

int main() {

    map <string, int> names;
    string username;
    int a;

    cin >> a;

    for (int i=0; i<a; i++) {
        cin>>username;
        if (names[username]==0) {
            names[username]=1;
            cout<< "OK" <<endl;
        }else {
            cout<<username<<names[username]<<endl;
            names[username]++;
        }
    }

    return 0;
}