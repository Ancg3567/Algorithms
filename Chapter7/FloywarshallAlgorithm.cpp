#include<bits/stdc++.h>
using namespace std;
const int W=510;
const int IWF=1e9+10;
int dis[W][W];

int main(){
 for(int i=0;i<W;i++){
  for(int j=0;j<W;j++){
   if(i==j) dis[i][j]=0;
   dis[i][j]=IWF;
  }
 }
 int n,m;
 cout<<"Enter number of vertices and edges\n";
 cin>>n>>m;
 cout<<"Enter edges and their weight\n";
 for(int i=0;i<m;i++){
  int x,y,wt;
  cin>>x>>y>>wt;
  dis[x][y]=wt;
 }
 for(int k=1;k<=n;k++){
  for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){
    dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
   }
  }
 }
 for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){
    if(dis[i][j]==IWF){
     cout<<"I ";
    }
    else 
     cout<<dis[i][j]<<" ";
   }
   cout<<endl;
  } 
}
