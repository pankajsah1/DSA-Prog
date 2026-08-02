#include<iostream>
using namespace std;
bool checkSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = checkSorted(arr, n);
    if(ans == true) cout << "Given array is sorted.";
    else cout << "Given array is not sorted";
    
    return 0;
}