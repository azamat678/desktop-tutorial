namespace std.v1;


void print(char c)
{
    print_(stdout, c);
}

void print(const char* str, long length)
{
    long i = 0;
    
    while (i < length)
    {
        print(str[i]);
        i = i + 1;
    }
}

void print(long num)
{
    
}












