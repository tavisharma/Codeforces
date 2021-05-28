#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sol(){
    int N;
    scanf("%d",&N);
    vector<int> temp;
    int sum =0;
    for(int i=0;i<N;i++){
        int a;
        scanf("%d",&a);
        temp.push_back(a);
        sum+=a;
    }
    sum = sum/2;
    sort(temp.begin(),temp.end());
    int sum1 = 0;
    int counter=0;
    for(int i=N-1;i>=0;i--){
        sum1 += temp[i];
        ++counter;
        if(sum1>sum){
            return counter;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << sol();
    return 0;
}