int hammingWeight(uint32_t n) 
    {
        int cnt = 0;
        int i = 0;
        while (i < 32)
        {
            if ((1 << i) & n)
                cnt++;
            i++;
        }
        
        return cnt;
    }
