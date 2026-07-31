#include<iostream>
#include<vector>
using namespace std;
int quickSort(int arr[], int low, int high){
    int pivot = arr[low];
        int i=low;
        int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void qsSort(int arr[], int l, int h){
    if(l<h){
        int pindex = quickSort(arr, l , h);
        qsSort(arr, 0, pindex-1);
        qsSort(arr, pindex+1, h);
   }
}
int main(){
    int n;
    cout << "Enter size of your array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in your array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    qsSort(arr, 0, n-1 );
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}