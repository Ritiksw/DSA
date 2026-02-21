// Print from 1 to 1 [Backtracking] 
#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n){
    if(i < 1){
        return;
    }
    
    fun(i-1,n);
    
    cout << i << endl;
}


int main() {
    int n;
    
    cin >> n;
    fun(n,n);
}
