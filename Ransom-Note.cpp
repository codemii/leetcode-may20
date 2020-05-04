/**  Given an arbitrary ransom note string and another string containing 
 * letters from all the magazines, write a function that will return true 
 * if the ransom note can be constructed from the magazines ; otherwise, it 
 * will return false.
 * Each letter in the magazine string can only be used once in your ransom 
 * note. 
 */

class Solution{
	public:
		bool canConstruct(string ransomNote, string magazine){
			if(ransomNote.length()==0)
				return true;
			if(magazine.length()==0)
				return false;
			int i, ransom[26]={0}, mag[26]={0};
			for(i=0; i<ransomeNote.length(); i++){
				ransom[ransomeNote[i]-'a']++;
			}
			for(i=0; i<magazine.length(); i++){
				mag[magazine[i]-'a']++;
			}
			for(i=0; i<26; i++){
				if(ransom[i]>mag[i]){
					return false;
				}
			}
			return true;
		}
};
