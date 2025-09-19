class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;  // index to write
        for (int i = 0; i < n; i++) {
            int count = 1;

            // count duplicates
            while (i + 1 < n && chars[i] == chars[i + 1]) {
                count++;
                i++;
            }

            // write character
            chars[idx++] = chars[i];

            // write count if > 1
            if (count > 1) {
                string num = to_string(count);
                for (char c : num) {
                    chars[idx++] = c;
                }
            }
        }
        return idx;
    }
};
