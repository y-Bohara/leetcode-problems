class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> numSet(nums.begin(), nums.end());

        int longest = 0;

        for (int num : numSet) {

            if (numSet.count(num - 1) == 0) {

                int currentNum = num;
                int currentLength = 1;

                while (numSet.count(currentNum + 1)) {
                    currentNum++;
                    currentLength++;
                }

                longest = max(longest, currentLength);
            }
        }

        return longest;
    }
};