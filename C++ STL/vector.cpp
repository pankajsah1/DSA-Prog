#include<iostream>
#include<vector>
using namespace std;
void explainVector(){     // vector is just a container which stores element just like array but it can dynamically 
        vector<int> v;    // increase the size of the array wherever we want.

        v.push_back(1);
        v.emplace_back(2);

        vector<pair <int, int>> vec;

        vec.push_back({1,2});
        vec.emplace_back(3,4);
         
        cout << vec[1].second << endl;

        vector<int> v1(5,100);
        for(int x : v1){
            cout << x << " ";
        }

        cout << endl;
        vector<int> v2(5);

        vector<int> v3(5, 20);
        for(int x : v3){
            cout << x << " ";
        }

        cout << endl;

        vector<int> v4(v3);
        for(int x : v4){
            cout << x << " ";
        }

        cout << endl;
        // Accessing the elements of the vector

        v.push_back(5);
        v.push_back(7);
        vector<int> :: iterator it = v.begin();
        it++;
        cout << *(it) << " ";

        it = it + 2;
        cout << *(it) << " ";

        vector <int> :: iterator it1 = v.end();
        it1--;
        cout << *(it1);
        // vector <int> :: iterator it2 = v.rend();
        // vector <int> :: iterator it3 = v.rbegin();

         cout << endl <<  v[0] << " " << v.at(0) << endl;
         cout << v.back() << " " << endl; 

        // No. of ways to print the entire elements of the vector...

        for(vector <int> :: iterator it = v.begin(); it != v.end(); it++){
            cout << *(it) << " ";
        }

        cout << endl;

        for(auto it = v.begin(); it != v.end(); it++){
            cout << *(it) << " ";
        }

        cout << endl;

        for(auto x : v){
            cout << x << " ";
        }

    }
int main(){
    explainVector();
    return 0;
}