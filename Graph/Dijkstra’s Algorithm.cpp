class Solution{
  public:
    vector<int> dijkstra(int V, vector<vector<int,int>> adj[], int S){
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
      vector<int> distTo(V+1, INT_MAX);
      distTo[S] = 0;
      pq.push(make_pair(0, S));
      while(!pq.empty()){
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        for(auto it: adj[prev]){
          int next = it[0];
          int distNext = it[1];
          if(distTo[next] > distTo[prev] + distNext){
            distTo[next] = distTo[prev] + distNext;
            pq.push(make_pair(distTo[next], next));
          }
        }
      }
      return distTo;
    }
}
