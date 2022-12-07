vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> myMap;
        vector<vector<string>> ret;
        for(string s:strs) {
            string sorted = strSort(s);
            if (myMap.find(sorted) == myMap.end()) {
                ret.push_back({});
                myMap[sorted] = ret.size()-1;
            }
            ret[myMap[sorted]].push_back(s);
        }
        return ret;
    }

    string strSort(string& s) {
        int count[26] = {0}, n = s.length();
        for (int i = 0; i < n; i++)
            count[s[i] - 'a']++;
        int p = 0;
        string t(n, 'a');
        for (int j = 0; j < 26; j++)
            for (int i = 0; i < count[j]; i++)
                t[p++] += j;
        return t;
    }
};
