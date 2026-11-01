namespace stdlib.string;


long strlen(const char* str)
{
    size_t len = 0;
    
    while (str[len] != '\0') { len = len + 1; }
    
    return len;
}


bool strcmp(const char* str1, const char* str2)
{
    size_t len = strlen(str1);
    size_t i = 0;
    
    if (len != strlen(str2)) { return false; }
    
    while (i < len)
    {
        if (str1[i] != str2[i]) { return false; }
        i = i + 1;
    }
    
    return true;
}


char* strcpy(const char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    char* str2 = new char[length + 1];
    
    while (i < length)
    {
        str2[i] = str[i];
    }
    
    str2[length] = '\0';
    return str2;
}


char* str_concatenate(const char* str1, const char* str2)
{
    size_t length1 = strlen(str1);
    size_t length2 = strlen(str2);
    size_t length = length1 + length2;
    
    char* str = new char[length + 1];
    
    size_t i = 0;
    size_t i2 = 0;
    
    while (i < length1)
    {
        str[i] = str1[i];
        i = i + 1;
    }
    
    while (i2 < length2)
    {
        str[i2 + i] = str2[i2];
        i2 = i2 + 1;
    }
    
    str[length] = '\0';
    return str;
}


bool str_contains(const char* str, const char* substr)
{
    return str_lfind(str, substr) != -1;
}


size_t str_lfind(const char* str, const char* substr)
{
    size_t length_str = strlen(str);
    size_t length_substr = strlen(substr);
    size_t i = 0;
    size_t iss = 0;
    
    if (length_substr == 0) { return -1; }
    
    while (length_str - i >= length_substr)
    {
        while (true)
        {
            if (str[i + iss] == substr[iss])
            {
                if (length_substr - iss == 1)
                {
                    return i;
                }
                else
                {
                    iss = iss + 1;
                    continue;
                }
            }
            else
            {
                if (iss == 0)
                {
                    i = i + 1;
                }
                else
                {
                    i = i + iss;
                    iss = 0;
                }
                break;
            }
        }
    }
    
    return -1;
}


size_t str_rfind(const char* str, const char* substr)
{
    
}


size_t str_find(const char* str, const char* substr, size_t start)
{
    
}


size_t str_find(const char* str, const char* substr, size_t start, size_t end)
{
    
}


char* str_replace(const char* str, const char* substr)
{
    
}


char* str_replace(const char* str, const char* substr, size_t count)
{
    
}


char to_upper(char c)
{
    if (c >= 'a' && c <= 'z') { return c + ('A' - 'a'); }
    else { return c; }
}


char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z') { return c - ('A' - 'a'); }
    else { return c; }
}


char* to_upper(char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        str[i] = to_upper(str[i]);
        i = i + 1;
    }
    
    return str;
}


char* to_lower(char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        str[i] = to_lower(str[i]);
        i = i + 1;
    }
    
    return str;
}


char* to_title(char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    bool start_word = true;
    
    str = to_lower(str);
    
    while (i < length)
    {
        if (start_word)
        {
            if (stdlib.ctype.is_alpha(str[i]))
            {
                str[i] = to_upper(str[i]);
                start_word = false;
            }
        }
        else
        {
            if (not stdlib.ctype.is_alpha(str[i]))
            {
                start_word = true;
            }
        }
        i = i + 1;
    }
    
    return str;
}


char* to_capitalize(char* str)
{
    str = to_lower(str);
    
    if (stdlib.ctype.is_alpha(str[0])) { str[0] = to_upper(str[0]); }
    
    return str;
}


char* str_lstrip(const char* str)
{
    
}


char* str_rstrip(const char* str)
{
    
}


char* str_strip(const char* str)
{
    
}


char* str_startswith(const char* str, const char* start)
{
    
}


char* str_endswitch(const char* str, const char* end)
{
    
}


char* str_substr(const char* str, size_t start, size_t end)
{
    
}


bool is_upper(const char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        if (not stdlib.ctype.is_upper(str[i]))
        {
            return false;
        }
        i = i + 1;
    }
    
    return true;
}


bool is_lower(const char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        if (not stdlib.ctype.is_lower(str[i]))
        {
            return false;
        }
        i = i + 1;
    }
    
    return true;
}


bool is_alpha(const char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        if (not stdlib.ctype.is_alpha(str[i]))
        {
            return false;
        }
        i = i + 1;
    }
    
    return true;
}


bool is_digit(const char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        if (not stdlib.ctype.is_digit(str[i]))
        {
            return false;
        }
        i = i + 1;
    }
    
    return true;
}


bool is_xdigit(const char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        if (not stdlib.ctype.is_xdigit(str[i]))
        {
            return false;
        }
        i = i + 1;
    }
    
    return true;
}


bool is_alphanum(const char* str)
{
    size_t length = strlen(str);
    size_t i = 0;
    
    while (i < length)
    {
        if (not stdlib.ctype.is_alphanum(str[i]))
        {
            return false;
        }
        i = i + 1;
    }
    
    return true;
}


bool is_empty(const char* str)
{
    return str[0] == '\0';
}


int stoi(const char* str)
{
    
}


long stol(const char* str)
{
    
}


unsigned long stoul(const char* str)
{
    
}


char* to_string(size_t number)
{
    
}


char* to_string(unsigned long number)
{
    
}


char* to_string(long number)
{
    
}


char* to_string(char c)
{
    char* chars = new char[2];
    chars[0] = c;
    chars[1] = '\0';
    return chars;
}


const char* to_string(bool b)
{
    if (b) { return "true"; }
    else { return "false"; }
}