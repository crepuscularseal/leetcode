// The longest palindrome = all even numbers + a set of odd numbers with the largest number

int longestPalindrome(char *s) {
    int freq[128] = {0}; // Hash table to count occurrences of each character
    int i = 0, j = 0, len = strlen(s), odd = 0, ans = 0;
    
    // Count occurrences of each character in the string
    for (i = 0; i < len; i++) {
        freq[s[i]]++;
    }
    
    // Find the longest palindrome substring
    for (i = 0; i < 128; i++) {
        if (freq[i] % 2 == 0) {
            ans += freq[i]; // Add even count characters to the answer
        } else {
            ans += freq[i] - 1; // Add even count characters to the answer
            odd = 1; // Mark that there is an odd count character
        }
    }
    
    return ans + odd; // Add 1 for the odd count character if it exists
}