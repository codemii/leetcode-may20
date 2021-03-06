/** Given an array of size n, find the majority element. 
 * The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 *
 * You may assume that the array is non-empty and the majority element 
 * always exist in the array.
 *
 * Example 1:
 * Input: [3,2,3]
 * Output: 3
 *
 * Example 2:
 * Input: [2,2,1,1,1,2,2]
 * Output: 2
 */

class Solution {
public:
    //Time Complexity : O(n)
    //space complexity : O(n)
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                m[nums[i]]++;
                if(m[nums[i]] > nums.size()/2){
                    return nums[i];
                }
            }
            else{
                m[nums[i]]=1;
            }
        }
        return nums[0];
    }

    /** Time Complexity : O(nlogn)
     *  Space Complexity : O(1) 
     * class Solution {
     * 	   public:
     *         int majorityElement(vector<int>& nums) {
     *             sort(nums.begin(), nums.end());
     *             return nums[nums.size()/2];
     *         }
     * };
     */
};
