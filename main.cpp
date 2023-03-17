#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
long long A[100000];
bool used[100000];
 
void dfs(int cur){
    used[cur] = true;
    int nex = A[cur];
    if(!used[nex]){
        dfs(nex);
    }
}
 
int main(){
    int N;
    int X;
    cin >> N >> X;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        A[i]--;
    }
    dfs(X - 1);
 
    int ans = 0;
    for(int i = 0; i < N; i++){
        if(used[i]){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}
