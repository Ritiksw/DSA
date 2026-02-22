// add from 1 to n
#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int c;
    
    c = a;
    a = b;
    b = c;
}

void fun(int l, int arr[],int n) {
    
    
    if (l >= n/2) {
        return;
    }

    swap(arr[l],arr[n-l-1]);
    
    fun(l+1,arr,n);
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Before: ";
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
    
    cout << endl;
    
    
    int l = 0;
    fun(l,arr,n);
    
    cout << "After : ";
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
}
