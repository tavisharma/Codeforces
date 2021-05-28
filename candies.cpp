#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sol(){
    int N,K;
    scanf("%d%d",&N,&K);
    int min;
    min = N/K;
    int counter;
    counter = N%K;
    vector<int> temp(K,min);
    for(int i=0;i<counter;i++){
        temp[i]+=1;
    }
    for(auto i:temp){
        printf("%d ",i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}