#include <algorithm>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    // find min word length
    size_t min_length = -1;  // rollover
    for (auto& str: strs) {
        min_length = std::min(str.length(), min_length);
    }
    
    
    std::string prefix = "";
    for (int i = 0; i < min_length; i++) {
        char curr = strs[0][i];
        for (int j = 1; j < strs.size(); j++) {
            if (strs[j][i] != curr) {
                return prefix;
            }
            
        }
        
        prefix.push_back(curr);
    }
    
    return prefix;