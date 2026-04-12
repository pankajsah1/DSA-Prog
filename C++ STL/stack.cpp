#include<iostream>
using namespace std;
void explainStack(){
    stack<int>st;                // A Stack is also a similar container like vector and list , 

st.push_back(1); // {1}
st.emplace_back(2); // {1, 2}
st.push_front(4); // {4, 1, 2}
st.emplace_front(3); // {3, 4, 1, 2}

st.pop_back(); // {3, 4, 1}
st.push_front(); // {4, 1}

st.back();
st.front();

    // rest functons are same as vector and list
    // begin, end, rbegin, clear, insert , size, swap
}
int main(){
    explainStack();
    return 0;
}