class Solution {
public:                //      USING SLIDING WINDOW APPROACH
    int maxVowels(string s, int k) {
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count++;
            }
        }
        maxCount = count;

        for (int i = k; i < s.size(); i++) {
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
                count--;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count++;
            }
            maxCount = max(count, maxCount);
        }

        return maxCount;
    }
};

/*
                                TIME LIMIT EXCEEDED

class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int size = s.size();
        int x = INT_MIN;

        for(int i=0; i<size-k; i++){
            count=0;
            for(int j=i; j<i+k; j++){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                    count++;
                }
            }
            x = max(count, x);
        }
        return x;
    }
};
*/