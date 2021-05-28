#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void sol(){
    unsigned long long n,m,a;
    cin>>n>>m>>a;
    cout << ceil((double)m/a)*ceil((double)n/a);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}