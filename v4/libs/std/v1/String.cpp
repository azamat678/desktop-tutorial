namespace std.v1;


class String
{
    private char *_chars;
    private long _length;
    private long _capacity;
    
    String()
    {
        this->_chars = new char[23];
        this->_length = 0;
        this->_capacity = 22;
    }
    
    long length()
    {
        return this->_length;
    }
    
    long capacity()
    {
        return this->_capacity;
    }
    
    const char *base()
    {
        this->_chars[this->_length] = '\0';
        return this->_chars;
    }
    
    void push(char c)
    {
        if (this->_length != this->_capacity)
        {
            this->_chars[this->_length] = c;
            this->_length = this->_length + 1;
        }
        else
        {
            this->_capacity = this->_capacity * 3;
            char *mem = new char[this->_capacity + 1];
            long i = 0;
            
            while (i < this->_length)
            {
                mem[i] = this->_chars[i];
                i = i + 1;
            }
            
            delete this->_chars;
            this->_chars = mem;
        }
    }
    
    void push(const char* str, long length)
    {
        long i = 0;
        
        while (i < length)
        {
            this->push(str[i]);
            i = i + 1;
        }
    }
    
    void push(String str)
    {
        long i = 0;
        long length = str.length();
        const char* base = str.base();
        
        while (i < length)
        {
            this->push(base[i]);
            i = i + 1;
        }
    }
    
    char get(long index, bool &error)
    {
        if (this->_length > index && index >= 0)
        {
            error = false;
            return '\0';
        }
        else
        {
            error = true;
            return this->_chars[index];
        }
    }
    
    char get(long index)
    {
        return this->_chars[index];
    }
    
    void clear()
    {
        delete this->_chars;
        this->String();
    }
}