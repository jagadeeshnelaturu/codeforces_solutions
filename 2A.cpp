#include <iostream>
#include <map>
#include <list>
#include <algorithm>

struct turn {
  std::string _name;
  int _score;

  turn() {
  }

  turn(std::string name, int score) {
    _name = name;
    _score = score;
  }
};

int main() {
  int n;
  std::cin >> n;
  std::map<std::string,int> scores;
  turn* modifications = new turn[n];
  for(int i=0; i<n; ++i) {
    std::string name;
    int score;
    std::cin >> name >> score;
    if(scores.count(name) == 0) {
      scores[name] = 0;
    }
    scores[name] += score;
    turn t(name,score);
    modifications[i] = t;
  }
  /*for(std::map<std::string,int>::iterator it=scores.begin(); it != scores.end(); ++it) {
    std::cout << it->first << " " << it->second << " ";
    for(std::list<int>::iterator it2 = modifications[it->first].begin(); it2 != modifications[it->first].end(); ++it2) {
      std::cout << *it2 << ",";
    }
    std::cout << '\n';
  }*/
  std::map<std::string,int>::iterator it=scores.begin();
  int maxscore = it->second;
  ++it;
  while(it != scores.end()) {
    if(it->second > maxscore) maxscore = it->second;
    ++it;
  }

  std::list<std::string> maxscoreplayers;
  for(it=scores.begin(); it!=scores.end(); ++it) {
    if(it->second == maxscore) maxscoreplayers.push_back(it->first);
  }

  std::map<std::string,int> maxscores;
  for(int i=0; i<n; ++i) {
    std::string s = modifications[i]._name;
    std::list<std::string>::iterator it = find(maxscoreplayers.begin(),maxscoreplayers.end(),s);
    if(it == maxscoreplayers.end()) ; // do nothing
    else {
      if(maxscores.count(s) == 0) maxscores[s] = 0;
      maxscores[s] += modifications[i]._score;
      if(maxscores[s] >= maxscore) {
        std::cout << s << '\n';
        return 0;
      }
    }
  }
}
