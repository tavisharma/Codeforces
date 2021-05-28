#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sol(){
    int N;
    scanf("%d",&N);
    map<int,int> temp;
    for(int i=0;i<N;i++){
        int a;
        scanf("%d",&a);
        temp.insert({a,i});
    }
    int bid, pos;
    pos = temp.rbegin()->second + 1;
    auto it = temp.end();
    it--;
    temp.erase(it);
    bid = temp.rbegin()->first;
    printf("%d %d\n",pos,bid);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}