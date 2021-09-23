#include <bits/stdc++.h>
using namespace std;

void solve(int i,int j,vector<vector<bool> > &vis,int n,int m,vector<vector<char> > g,int &flag,int cnt){
    if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || g[i][j]=='#') return;
    if(i==n-1 && j==m-1){
        flag=min(flag,cnt);
        return;
    }
    vis[i][j]=true;
solve(i+1,j,vis,n,m,g,flag,cnt+1);
solve(i-1,j,vis,n,m,g,flag,cnt+1);
solve(i,j+1,vis,n,m,g,flag,cnt+1);
solve(i,j-1,vis,n,m,g,flag,cnt+1);
vis[i][j]=false;
}

int main(){

    /*
    ..##   maxTIme : 5 o/p Yes
    #.##
    #..

    */
    vector<string> v;
    int num,k;
    cin>>num;
    for(int i=0;i<num;i++){      
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
    cin>>k;
    int n=v.size();
    int m=v[0].size();
    vector<vector<char> > g(n,vector<char>(m,'0'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            g[i][j]=v[i][j];
        }
    }
    vector<vector<bool> > vis(n,vector<bool>(m,false));
    int flag=INT_MAX;
    solve(0,0,vis,n,m,g,flag,0);
    cout<<"Time taken :"<<flag<<"\n";
    if(flag<=k){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}