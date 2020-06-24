#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> ugly;
  ugly.insert(1);
  for (int i=0; i<1499; i++) {
    auto tmp = ugly.lower_bound(0);
    ugly.insert(*tmp*2);
    ugly.insert(*tmp*3);
    ugly.insert(*tmp*5);
    ugly.erase(tmp);
  }
  cout << "The 1500'th ugly number is " << *ugly.lower_bound(0) << "." << endl;
}
