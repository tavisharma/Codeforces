#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

string sol(){
    string s;
    cin >> s;
    if(s.size()<=10)
        return s;
    return s[0]+ to_string(s.size()-2) + s[s.size()-1];
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;
    while(testCase--){
        cout << sol() << '\n';
    }
}