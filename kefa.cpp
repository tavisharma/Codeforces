#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long sol(){
    int N;
    scanf("%d",&N);
    vector<long long> temp;
    for(int i=0;i<N;i++){
        long long num;
        cin >> num;
        temp.push_back(num);
    }
    long long counter=0;
    long long  inc=1;
    for(int i=1;i<N;i++){
        if(temp[i-1]<=temp[i]){
            ++inc;
            counter = max(counter,inc);
        }
        else{
            inc = 1;
        }
    }
    return counter;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << sol() << endl;
    return 0;
}