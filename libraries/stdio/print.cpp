namespace stdio;


const char stdout = 'o';
const char stderr = 'e';


void print(const char stream, char c)
{
    f__print__(stream, c);
}


void print(const char stream, const char* str)
{
    size_t length = stdlib.string.strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        print(stream, str[i]);
        i = i + 1;
    }
}


void print(char c)
{
    print(stdout, c);
}


void print(const char* str)
{
    print(stdout, str);
}


void println(char c)
{
    print(c);
    print('\n');
}


void println(const char* str)
{
    print(str);
    print('\n');
}