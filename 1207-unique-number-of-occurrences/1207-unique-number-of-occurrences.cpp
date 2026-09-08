class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int it:arr){
            mp[it]++;
        }

        unordered_set<int> st;
        for(auto it:mp){
            st.insert(it.second);
        }

        if(mp.size()==st.size()){
            return true;
        }
        return false;
    }
};