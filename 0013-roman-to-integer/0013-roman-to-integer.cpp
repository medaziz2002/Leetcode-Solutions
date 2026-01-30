class Solution {
public:
    int romanToInt(string s) {

        map<char, int> m = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                            {'C', 100}, {'D', 500}, {'M', 1000}};

        int somme = 0;
        int i = s.size()-1;
        int previousValue = 0;
        while (i >= 0) {
            
            int currentValue = m[s[i]];
            if (currentValue < previousValue) 
            {
                somme -= currentValue;
            } else 
            {
                somme += currentValue;
            }
            i--;
            previousValue = currentValue;
              
        }
        return somme;
    }

};