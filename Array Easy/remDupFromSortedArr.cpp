#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // set<int>st;
    // for(int i=0; i<n; i++){
    //     st.insert(arr[i]);
    // }
    // int index = 0;
    // for(auto it:st){
    //     arr[index] = it;
    //     index++;
    //     cout << arr[index] << " ";
    // }
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }

    vector<int> v;
    
    int i = 0;
    v.push_back(arr[i]);
    for(int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
            v.push_back(arr[i]);
        }

        // if(arr[i] != arr[j]){
        //     cout << arr[i-1] << " ";
        // }
        
    }
    for(int x:v){
        cout << x << " ";
    }
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }

    // cout << i+1; 
    
    
    return 0;    
}