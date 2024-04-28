#include <iostream>

bool findSubstring(const char *str, const char *sub) {
  int strLen = strlen(str);
  int subLen = strlen(sub);

  for (int i = 0; i <= strLen - subLen; i++) {
    bool match = true;
    for (int j = 0; j < subLen; j++) {
      if (str[i + j] != sub[j]) {
        match = false;
        break;
      }
    }
    if (match) {
      return true;
    }
  }

  return false;
}

int main() {
  const char *text = "This is a sample text for substring search.";
  const char *substring = "sample";

  if (findSubstring(text, substring)) {
    cout << "Substring found!" << endl;
  } else {
    cout << "Substring not found." << endl;
  }

  return 0;
}
