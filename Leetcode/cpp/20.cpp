#include <string>
#include <vector>

bool isValid(std::string s) {
    std::vector<char> l_parenthesis;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            l_parenthesis.push_back(s[i]);
        } else if (s[i] == ')') {
            if (l_parenthesis.empty() || l_parenthesis.back() != '(') {
                return false;
            }
            
            l_parenthesis.pop_back();
        } else if (s[i] == ']') {
            if (l_parenthesis.empty() || l_parenthesis.back() != '[') {
                return false;
            }
            
            l_parenthesis.pop_back();
        } else if (s[i] == '}') {
            if (l_parenthesis.empty() || l_parenthesis.back() != '{') {
                return false;
            }
            
            l_parenthesis.pop_back();
        }
    }
    
    if (!l_parenthesis.empty()) {
        return false;
    }
    
    return true;
}