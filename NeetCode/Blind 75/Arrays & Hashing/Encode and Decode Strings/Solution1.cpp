class Solution {
public:

    string encode(vector<string>& strs) {
        string combined = "";
        int len = strs.size();
        for(int i = 0;i < len;i++){
            combined += to_string(strs[i].length()) + "@" + strs[i];
        }
        return combined;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;
        int j;
        while(i<s.length()){
            j = i;
            while(s[j]!='@'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,len);
            strs.push_back(word);
            i = j+len+1;
        }
        
        return strs;
    }
};

