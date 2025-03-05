/*https://leetcode.com/problems/longest-subsequence-with-limited-sum/description/
2389. Longest Subsequence With Limited Sum

You are given an integer array nums of length n, and an integer array queries of length m.

Return an array answer of length m where answer[i] is the maximum size of a subsequence 
that you can take from nums such that the sum of its elements is less than or equal to queries[i].

A subsequence is an array that can be derived from another array by 
deleting some or no elements without changing the order of the remaining elements.
*/

/*
Approach
Sort the nums array: The key observation is that selecting the smallest elements first 
will allow us to maximize the subsequence size while staying under a given query sum.
Use a prefix sum: Construct a prefix sum array, where prefix[i] represents the sum of the first i elements in the sorted array.
Binary search: For each query, use binary search (std::upper_bound) to find the largest subsequence whose sum is ≤ queries[i].
*/

class SolutionNestedLoop {
    public:
    
        vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
            std::sort(nums.begin(), nums.end());
            vector<int> answer;
    
            for(auto query:queries){
                int sum = 0;
                int count = 0;
                for(int i = 0; i < nums.size(); i++){
                    if(sum + nums[i] <= query){
                        sum += nums[i];
                        count++;
                    }else{
                        break;
                    }
                }
                answer.push_back(count);
            }
    
            return answer;
        }
};

class SolutionBinarySearch {
    public:
        // RL
        int binarySearch(vector<int>& arr, int l, int r, int x)
        {
            while (l <= r) {
                int m = l + (r - l) / 2;
                if (arr[m] <= x) // Check for valid subsequence sum
                    l = m + 1;  // Search in the right half
                else
                    r = m - 1;  // Search in the left half
            }
            return l; // l is the correct size of the subsequence
        }

        vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
            std::sort(nums.begin(), nums.end());
            vector<int> answer, prefixSum;
            
            //Create a prefix where prefix[i] represents the sum of the first i elements in the sorted array.
            int preSum = 0;
            for (auto num:nums)
            {
                preSum += num;
                prefixSum.push_back(preSum);
            }

            //Search binay search for prefix sum
            for(auto query: queries){
                answer.push_back(binarySearch(prefixSum, 0, prefixSum.size() - 1, query)); 
            }
            
            return answer;
        }
};