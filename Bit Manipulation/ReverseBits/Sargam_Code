// Time Complexity : O(1)
// Space Complexity : O(1)

uint32_t reverseBits(uint32_t n) 
    {
        uint32_t res = 0;
        int i = 1;
        while (i <= 32) 
        {
            res <<= 1;
            res += (n & 1) ? 1 : 0;
            n >>= 1;
            i++; 
        }
        
        return res;
    }
