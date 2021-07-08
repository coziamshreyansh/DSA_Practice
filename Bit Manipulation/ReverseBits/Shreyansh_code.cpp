class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t temp = 0, latest_result, current_reverse;
        uint32_t result = 0;
        for(int i = 0; i < 32; i++)
        {
            latest_result = n & 1;
            current_reverse = latest_result << (31-i);
            result = result | current_reverse;
            n = n>>1;
        }
        return result;
    }
};
