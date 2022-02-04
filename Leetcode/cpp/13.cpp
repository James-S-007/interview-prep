#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        int sum = 0;
        for (int i = 1; i < s.length(); i++) {
            sum = (numerals[s[i-1]] >= numerals[s[i]]) ? sum + numerals[s[i-1]] : sum - numerals[s[i-1]];
        }
        
        sum += numerals[s[s.length()-1]];
        
        return sum;
    }
    
private:
    std::unordered_map<char, int> numerals = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
};