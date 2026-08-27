class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //1.COUNTING THE FREQUENCY OF NUMBERS;

        unordered_map<int, int> count;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            count[nums[i]]++;
        }
        
        // 2.STORING  NUMBER + FREQUENCY 

        vector< pair<int, int>> freq;

        for(auto x : count){
            freq.push_back({x.first, x.second});
        }

        // 3 . SORT BY FREQUENCY

        sort(freq.begin() , freq.end() , [] (auto &a , auto & b)
        {
            return a.second > b. second;
        });

        // Take the first K Element 

        vector<int> result;
        for ( int i = 0 ; i < k ; i++)
        {
            result.push_back(freq[i].first);
        }
        return result;
    }
};