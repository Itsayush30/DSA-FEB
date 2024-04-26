bool isPalindrome(const char arr[]) {
    int len = charArrayLength(arr);
    for (int i = 0; i < len / 2; i++) {
        if (arr[i] != arr[len - 1 - i]) {
            return false;
        }
    }
    return true;
}