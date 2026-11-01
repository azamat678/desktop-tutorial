namespace std.v1.stdstr;


long strlen(const char* str)
{
    long len = 0;
    
    while (str[len] != '\0') { len = len + 1; }
    
    return len;
}


bool strcmp(const char* str1, const char* str2)
{
    long len = strlen(str1);
    long i = 0;
    
    if (len != strlen(str2)) { return false; }
    
    while (i < len)
    {
        if (str1[i] != str2[i]) { return false; }
        i = i + 1;
    }
    
    return true;
}
