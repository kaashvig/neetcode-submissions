class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       // refer first string strs[0]
       // refer first char of that string i 
       for(int i = 0;i<strs[0].size();i++){
           char ch = strs[0][i];  //<-- stores value of that character
           // for next string j
           for(int j = 1;j<strs.size();j++){
            if(i>=strs[j].size()||strs[j][i]!=ch){
                return strs[0].substr(0,i);
            }
           }
       }
       return strs[0];
    }
};