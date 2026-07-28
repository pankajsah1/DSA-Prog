#include<bits/stdc++.h>             // Counting frequency of string character using character hashing(Not hashMap)
using namespace std;
int main(){
    string s;
    cin >> s;

    // Pre Compute
    int hash[26] = {0};

    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a'] ++;
    }

    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        // fetch
        cout << hash[ch - 'a'] << endl;
    }
    return 0;
}