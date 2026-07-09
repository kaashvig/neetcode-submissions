class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        for(int i = 0; i<strs[0].size();i++){
            // strs [0] is the first string refering and i is the first char
            char ch = strs[0][i];
            // another loop j where j represents the next string

            for(int j = 1; j<strs.size(); j++){
                if(i>=strs[j].size()||strs[j][i]!=ch){
                    return strs[0].substr(0, i);
                }
            }

        }
        return strs[0];
    }
};