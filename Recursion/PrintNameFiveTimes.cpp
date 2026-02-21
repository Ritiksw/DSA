//Print the name five times
#include <bits/stdc++.h>
using namespace std;

void fun(int i,int cnt){
    if(i > cnt) 
        return;
    cout << "Ritik" << endl;
    
    fun(i+1,cnt);
}


int main() {
    int cnt = 0;
    int n;
    cout << "Enter N: ";
    cin >> cnt;

    fun(1,cnt);
}


// void fun(int n, int cnt){
//     if(cnt == n) return;
//     cout << "Ritik" << endl;
//     cnt++;
//     fun(n,cnt);
// }

// int main() {
//     int cnt = 0;
//     int n;
//     cout << "Enter N: ";
//     cin >> n;

//     fun(n,cnt);
//     return 0;
// }