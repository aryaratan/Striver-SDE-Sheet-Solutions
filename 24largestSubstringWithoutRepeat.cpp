//https://leetcode.com/problems/longest-substring-without-repeating-characters/


#include<bits/stdc++.h>
using namespace std;

int largestSubstringWithNoRepeating(string s){
    int l = s.length();
    if(l == 0 || l == 1){
        return l;
    }

    int start = 0, end = 0;
    unordered_map<char,int> map;
    int ml = 1;
    while(end < l){
        if(map.count(s[end]) > 0){
            if(start <= map[s[end]]){
                start = map[s[end]]+1;
                end = start;
            }
        }
        map[s[end]] = end;
        ml = max(ml,end - start +1);
        end++;
    }
    return ml;
}

int main()
{
    
    string s = "abcdfetshhiahddsudisababababa";
    cout << largestSubstringWithNoRepeating(s) << endl;
    string t = "aaaa";
    cout << largestSubstringWithNoRepeating(t) << endl;

    return 0;
}