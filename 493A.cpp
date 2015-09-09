#include <iostream>
#include <vector>
#include <algorithm>

#define LIMIT 99

struct redcard {
  int _player, _time;
  bool _team; //true for home

  redcard() {
  }

  redcard(int player, int time, bool team) {
    _player = player;
    _time = time;
    _team = team;
  }
};

bool operator<(redcard r1, redcard r2) {
  return r1._time < r2._time;
}

int main() {
  std::string home, away;
  std::cin >> home >> away;
  bool home_yellow[LIMIT] = {0}, away_yellow[LIMIT] = {0};
  int home_red[LIMIT] = {0}, away_red[LIMIT] = {0};
  int n;
  std::cin >> n;
  int time, number;
  char team, card;
  while(n--) {
    std::cin >> time >> team >> number >> card;
    if(card == 'y') {
      if(team == 'h') {
        if(home_yellow[number - 1]) {
          if(!home_red[number - 1]) home_red[number - 1] = time;
        }
        else {
          home_yellow[number - 1] = time;
        }
      }
      else if(team == 'a') {
        if(away_yellow[number - 1]) {
          if(!away_red[number - 1]) away_red[number - 1] = time;
        }
        else {
          away_yellow[number - 1] = time;
        }
      }
    }
    else if(card == 'r') {
      if(team == 'h') {
        if(!home_red[number - 1]) home_red[number - 1] = time;
      }
      else if(team == 'a') {
        if(!away_red[number - 1]) away_red[number - 1] = time;
      }
    }
  }

  std::vector<redcard> red_vec;
  for(int i = 0; i < LIMIT; ++i) {
    if(home_red[i]) red_vec.push_back(redcard(i + 1, home_red[i], true));
  }
  for(int i = 0; i < LIMIT; ++i) {
    if(away_red[i]) red_vec.push_back(redcard(i + 1, away_red[i], false));
  }
  std::sort(red_vec.begin(), red_vec.end());
  std::vector<redcard>::iterator it;
  for(it = red_vec.begin(); it != red_vec.end(); ++it) {
    std::cout << ((it -> _team) ? home : away) << " " << it->_player << " " << it->_time << '\n';
  }
}
