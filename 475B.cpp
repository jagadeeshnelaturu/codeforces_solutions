#include <iostream>
#include <list>
#include <stack>

struct node {
  std::list< std::pair<int, int> > _adjacency;
};

void addEdge(node*** network, int x1, int y1, int x2, int y2) {
  network[x1][y1]->_adjacency.push_back(std::make_pair(x2, y2));
}

bool dfs(node*** network, int x1, int y1, int height, int width) {
  std::stack< std::pair<int, int> > s;
  s.push(std::make_pair(x1, y1));
  bool **visited = new bool*[height];
  std::pair<int, int> temp;
  std::list< std::pair<int, int> >::iterator it;
  for(int i = 0; i < height; ++i) {
    visited[i] = new bool[width];
    for(int j = 0; j < width; ++j) {
      visited[i][j] = false;
    }
  }
  while(!s.empty()) {
    temp = s.top();
    if(visited[temp.first][temp.second]) {
      s.pop();
    }
    else {
      for(it = network[temp.first][temp.second]->_adjacency.begin();
          it != network[temp.first][temp.second]->_adjacency.end();
          ++it) {
        if(!visited[it->first][it->second]) s.push(*it);
      }
      visited[temp.first][temp.second] = true;
    }
  }
  for(int i = 0; i < height; ++i) {
    for(int j = 0; j < width; ++j) {
      if(!visited[i][j]) return false;
    }
  }
  return true;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  node ***network = new node**[n], ***revNetwork = new node**[n];
  for(int i = 0; i < n; ++i) {
    network[i] = new node*[m];
    revNetwork[i] = new node*[m];
    for(int j = 0; j < m; ++j) {
      network[i][j] = new node();
      revNetwork[i][j] = new node();
    }
  }
  char temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    if(temp == '>') {
      for(int j = 0; j < m - 1; ++j) {
        addEdge(network, i, j, i, j + 1);
        addEdge(revNetwork, i, j + 1, i, j);
      }
    }
    else if(temp == '<') {
      for(int j = 1; j < m; ++j) {
        addEdge(network, i, j, i, j - 1);
        addEdge(revNetwork, i, j - 1, i, j);
      }
    }
  }
  for(int i = 0; i < m; ++i) {
    std::cin >> temp;
    if(temp == 'v') {
      for(int j = 0; j < n - 1; ++j) {
        addEdge(network, j, i, j + 1, i);
        addEdge(revNetwork, j + 1, i, j, i);
      }
    }
    else if(temp == '^') {
      for(int j = 1; j < n; ++j) {
        addEdge(network, j, i, j - 1, i);
        addEdge(revNetwork, j - 1, i, j, i);
      }
    }
  }
  if(dfs(network, 0, 0, n, m) && dfs(revNetwork, 0, 0, n, m)) std::cout << "YES\n";
  else std::cout << "NO\n";
}
