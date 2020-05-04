/** You are a product manager and currently leading a team to develop 
 * a new product. Unfortunately, the latest version of your product fails 
 * the quality check. Since each version is developed based on the previous 
 * version, all the versions after a bad version are also bad.
 * Suppose you have n versions [1, 2, ..., n] and you want to find out the 
 * first bad one, which causes all the following ones to be bad.
 *
 * You are given an API bool isBadVersion(version) which will return whether 
 * version is bad. Implement a function to find the first bad version. 
 * You should minimize the number of calls to the API.
 */

class Solution{
	public:
		int firstBadVersion(int n){
			//Binary search approach
			int m, left=1, right=n;
			while(left<right){
				m = left + (right-left)/2;
				if(isBadVersion(m)){
					right = m;
				}
				else{
					left = m+1;
				}
			}
			return left;
		}
};

//using this solution all 22 / 22 test cases passed.
//Happy coding
