#include <string>

int strStr(std::string haystack, std::string needle) {
    if (needle.length() == 0) {
        return 0;
    } else if (needle.length() > haystack.length()) {
        return -1;
    }
    
    for (int i = 0; i < haystack.length() - needle.length() + 1; i++) {
        if (haystack[i] == needle[0]) {
            bool needle_found = true;
            for (int j = 1; j < needle.length(); j++) {
                if (haystack[i+j] != needle[j]) {
                    needle_found = false;
                    break;
                }
            }
            
            if (needle_found) {
                return i;
            }
        }
    }
    
    return -1;
}
