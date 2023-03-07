#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(std::string s) {
  std::string rev{s};
  std::reverse(rev.begin(), rev.end());
  return s == rev;
}

// use a stack to check if something is a palindrome (string)

bool isPalindrome2(std::string s) {
  std::stack<char> stk;

  for (char c : s)
    stk.push(c);

  // s = "racecar"
  // stk = top -> [r, a, c...]

  for (char c : s) {
    if (c != stk.top())
      return false;
    stk.pop();
  }

  return true;
}

int main() {
  // std::string word = "racecar";
  // std::string word = "hello";
  bool run = true;
  std::string word;
  do {
    std::cout << "Enter a word: ";
    std::cin >> word;
    if (word == "-1") {
      run = false;
      break;
    }

    std::cout << std::boolalpha << isPalindrome2(word) << "\n";
  } while (run);

  // go left to right and check if its the same as right to left
  // approaches
  // 1) two pointer (one pointer starts at index 0, other at n-1)
  // 2) reverse the string and check equality (easiest)
  // 3) use a stack
  return 0;
}
