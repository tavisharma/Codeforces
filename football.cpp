#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string sol(){
    string s1;
    cin >> s1;
    int condition = 1;
    for(int i=1; i<=s1.length(); i++){
        if(s1[i] == s1[i-1]){
            condition++;
            if(condition==7){
                return "YES";
            }
        }else{
            condition=1;
        }
        
    }
    return "NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << sol();
    return 0;
}