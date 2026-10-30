init {
    {
        bool a = !true;
    }
    {
        bool a = true && false;
        bool b = true || false;
    }
    {
        bool a = 100 == 50;
        bool b = 100 != 50;
        bool c = 100 > 50;
        bool d = 100 < 50;
        bool e = 100 >= 50;
        bool f = 100 <= 50;
    }
    {
        bool a = (100 > 50) == (100 < 50);    // >, <, >=, <= имеют большой приоритет, чем ==, !=
    }
}

init {
    {
        int n = -10;
        
        n += n + n;
        n -= n - n;
        n *= n * n;
        n /= n / n;
        n %= n % n;
    }
    
    {
        int n = ~10;
        
        n &= n & n;
        n |= n | n;
        n ^= n ^ n;
        n >>= n >> n;
        n <<= n << n;
    }
    
    {
        int n = 0;
        
        n++;
        n--;
        
        ++n;
        --n;
    }
}
