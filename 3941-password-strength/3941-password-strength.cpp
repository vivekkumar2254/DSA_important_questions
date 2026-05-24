class Solution {
public:
    int passwordStrength(string s) {       
            
            unordered_set<char>mp;
            for(auto i:s){
                mp.insert(i);
            }
              int ans=0;
            for(auto i:mp){
                     char ch = i;

                     if(ch>='a' && ch<='z'){
                          ans+=1;
                     }
                      else if(ch>='A' && ch<='Z'){
                          ans+=2;
                     }
                      else if(ch>='0' && ch<='9'){
                          ans+=3;
                     }
                      else if((ch=='!'||ch=='#'|| ch=='@'||ch=='$')){
                          ans+=5;
                     }
            }
            return ans;

    }
};