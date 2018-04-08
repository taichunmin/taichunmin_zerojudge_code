#include <iostream>
#include <iomanip>
#define SELF_MAX 1000000
using namespace std;

bool self[1000001] = {};

int nextself (int a) {
  int b = a;
  while (a > 0) {
    b += a%10;
    a /= 10;
  }
  return b;
}

int main() {
  int temp;
  for (int i=1; i<=SELF_MAX; i++) {
    temp = nextself(i);
    if (temp <= SELF_MAX) {
      self[temp] = true;
    }
    if (self[i]) continue;
    printf("%d\n", i);
  }
}
