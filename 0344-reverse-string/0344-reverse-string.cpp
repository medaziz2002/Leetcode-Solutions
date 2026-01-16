class Solution {
public:

    void reverseString(vector<char>& s) {
        
        
        int first=0;
        int last=s.size()-1;
        char aux;
       
       while(first<=last)
       { aux=s[first];
        s[first]=s[last];
        s[last]=aux;
        first++;
        last--;
       }




        
    }
};