# include <iostream>
# include <vector>
using namespace std;

int get_num() {
  return 3;
}

int foo(char ch) {
  switch (ch) {
    case 'a':
      return 10;
    case 'A':
      return 10;
    default:
      return 30;
  }
}

int main(int argc, char *argv[]) {
  vector<int> v;
  v.push_back(1);
  v.empty();
  cout << v.size() << endl;

  // 禁止返回动态初始化的静态变量
  int i = foo('a');
  cout << i << endl;

  return 0;
}
