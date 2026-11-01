namespace stdlib.hashlib;


size_t hash_function(const char* str, const size_t table_size, const size_t key)
{
    size_t result = 0;
    size_t length = stdlib.string.strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        char c = str[i];
        result = (result * key + c) % table_size;
        i = i + 1;
    }
    
    result = (result * 2 + 1) % table_size;
    return result;
}