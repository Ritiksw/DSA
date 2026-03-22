#include <bits/stdc++.h>
using namespace std;

void printF(int idx, int arr[],vector<int>&ds, int n, int s, int sum){
    if(idx == n){
        if(sum == s){
            for(auto it : ds){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    //take
    ds.push_back(arr[idx]);
    s += arr[idx];
    printF(idx+1, arr, ds, n, s, sum);
    //not take
    s -= arr[idx];
    ds.pop_back();
    printF(idx+1, arr, ds, n, s, sum);
}


int main() {
	
	int arr[] = {1,1,2};
	int n = 3;
	int sum = 2;
	vector<int>ds;
	printF(0, arr, ds, n, 0, sum);
	return 0;
}
