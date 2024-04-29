#include <iostream>

using namespace std;

void charFrequency(char str[]) {
    int n = strlen(str);
    int freq[256] = {0};

    for (int i = 0; i < n; i++) {
        freq[str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << ": " << freq[i] << endl;
        }
    }
}

int main() {
    char str[] = "Mississippi";
    charFrequency(str);
    // Output:
    // i: 4
    // p: 2
    // s: 4
    // M: 1
    return 0;
}
