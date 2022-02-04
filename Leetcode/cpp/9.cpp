#include <string>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    
    std::string x_str = to_string(x);
    for (int i = 0; i < x_str.length() / 2; i++) {
        if (x_str[i] != x_str[x_str.length()-i-1]) {
            return false;
        }
    }

    return true;
}
