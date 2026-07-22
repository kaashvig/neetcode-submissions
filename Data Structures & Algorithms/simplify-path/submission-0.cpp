class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        path += '/';               // Add extra '/' to process the last directory
        string curr = "";

        for (char c : path) {
            if (c != '/') {
                curr += c;
            } else {
                if (curr == "" || curr == ".") {
                    // Ignore empty strings and "."
                } 
                else if (curr == "..") {
                    // Go back one directory if possible
                    if (!st.empty()) {
                        st.pop();
                    }
                } 
                else {
                    // Valid directory name
                    st.push(curr);
                }

                // Reset current directory name
                curr = "";
            }
        }

        // Build the simplified path
        string res = "";
        while (!st.empty()) {
            res = "/" + st.top() + res;
            st.pop();
        }

        // If stack was empty
        if (res.empty()) {
            return "/";
        }

        return res;
    }
};