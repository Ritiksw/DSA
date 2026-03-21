#include <bits/stdc++.h>
using namespace std;

void printF(int idx, int arr[],vector<int>&ds, int n ){
    if(idx==n){
        for(auto it : ds){
            cout << it;
        }
        if(ds.size()== 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    //take
    ds.push_back(arr[idx]);
    printF(idx+1, arr, ds, n);
    //not take
    ds.pop_back();
    printF(idx+1, arr, ds, n);
}


int main() {
	
	int arr[] = {3,1,2};
	int n = 3;
	vector<int>ds;
	printF(0,arr,ds,n);
	return 0;
}
