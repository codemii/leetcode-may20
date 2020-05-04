//Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.
//Eg: Input:5, Output:2

class Solution{
	public:
		int findComplement(int num){
			int i=num, c=0;
			while(i!=0){
				i=i/2;
				c++;
			}
			c=pow(2,c)-1-num;
			return c;
		}
};
