#include<iostream>
#include<stack>
#define N 6
using namespace std;

int graph[N][N] = {
   {0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0},
   {0, 0, 0, 1, 0, 0},
   {0, 1, 0, 0, 0, 0},
   {1, 1, 0, 0, 0, 0},
   {1, 0, 1, 0, 0, 0}
};

void Topological(int h, bool visit[], stack<int>&sk) {
   visit[h] = true;               

   for(int v = 0; v<N; v++) {
      if(graph[h][v]) { 
         if(!visit[v])
            Topological(v, visit, sk);
      }
   }
   sk.push(h); 
}

void TopologicalSort() {
   stack<int> sk;
   bool vis[N];

   for(int i = 0; i<N; i++)
      vis[i] = false;  

   for(int i = 0; i<N; i++)
      if(!vis[i]) 
         Topological(i, vis, sk);

   while(!sk.empty()) {
      cout << sk.top() << " ";
      sk.pop();
   }
}

int main() {
   cout << "After topological sorted order: ";
   TopologicalSort();
   return 0;
}
