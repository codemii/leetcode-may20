//API isBadVersion is defined already
//bool isBadVersion(int version);

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
