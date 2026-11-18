class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int arr[225]={}; //initialize all elements to zero
        for(int i=0;i<s.length();++i){
            arr[(int)s[i]]++;
            arr[(int)t[i]]--;
        }
        for(int i=0;i<225;++i){
            if(arr[i]!=0) return false;
        }
        return true;
        }
    };
