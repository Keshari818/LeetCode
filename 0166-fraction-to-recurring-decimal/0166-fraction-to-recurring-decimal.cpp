class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) { 
        if(numerator==0)
            return "0";
        string result;
        if(numerator<0 ^ denominator<0)
            result+='-';
        
        long long num=abs(static_cast<long long>(numerator));
        long long denom=abs(static_cast<long long>(denominator));
        
        result += to_string(num / denom);
        if(num%denom==0)
            return result;
        
        result+=".";
        unordered_map<long long, int> mp; // Map to store position of digits
        
        // Remainder for decimal part
        long long rem = num % denom;
        
        while (rem != 0) {
            // If this remainder has occurred before, then it is a repeating decimal
            if (mp.find(rem) != mp.end()) {
                result.insert(mp[rem], 1, '(');
                result += ')';
                break;
            }
            
            // Mark the current remainder as seen
            mp[rem] = result.size();
            
            // Calculate next digit
            rem *= 10;
            result += to_string(rem / denom);
            rem %= denom;
        }
        
        return result;
        
    }
};