class Solution {
public:
    bool isPalindrome(int x) {
        // Étape 1 : cas négatif ou fin par 0
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        
        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x = x / 10;
        }
        
        // Étape 3 : comparer les moitiés
        return x == revertedNumber || x == revertedNumber / 10;
    }
};
