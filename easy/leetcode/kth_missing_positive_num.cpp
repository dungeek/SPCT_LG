//You can solve this problem by counting how many numbers are missing up to each number in the array
/*
We'll simulate counting from 1 upwards, and: For each number, check if it exists in the array.
If it doesn't, it's a missing number. Stop once we've counted k missing numbers.
*/
class Solution {
    public:
        int findKthPositive(vector<int>& arr, int k) {
            int current = 1;       // Start from 1, the first natural number
            int missing_count = 0; // Count how many are missing
            int i = 0;             // Index into arr[]

            while (missing_count < k)
            {
                if (i < arr.size() && arr[i] == current)
                {
                    i++
                }else
                {
                    missing_count++;
                    if(missing_count == k){
                        return current;
                    }
                }
                
                
            }
            
        }
    };