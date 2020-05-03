class Solution{
	public:
		bool canConstruct(string ransomNote, string magazine){
			if(ransomNote.length()==0)
				return true;
			if(magazine.length()==0)
				return false;
			int i, ransom[26]={0}, mag[26]={0};
			for(i=0; i<ransomeNote.length(); i++){
				ransom[ransomeNote[i]='a']++;
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
