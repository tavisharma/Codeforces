#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long sol(){
    long long N,K;
    cin >> N >> K;
    long long mid;
    mid = (N+1)/2;
    if(K>mid){
        return (K-mid)*2;
    }
    else{
        return -1 + K*2;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << sol();
    return 0;
}