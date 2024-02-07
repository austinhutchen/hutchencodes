class Solution {
public:
    std::unordered_map < char, unsigned > hashmap;
   unsigned count_str(string s, char a){
       short unsigned count=0;
       for(int i=0;i<s.size();i++){
           (a==s[i])?++count:true;
       }
       return count;
   }
     
    string frequencySort(string s) {
         for(int i=0;i<s.size();i++){
hashmap.insert({s[i],count_str(s,s[i])});
         }
 string ans;
 char t;
 unsigned c = hashmap.size();

 while(c>0){
       std::pair<char,unsigned> cur= *std::min_element(std::begin(hashmap),std::end(hashmap));
t= cur.first;
ans+=string(cur.second,t);

hashmap.erase(t);
     --c;
 }

return ans;
         }
    };
