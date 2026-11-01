namespace stdlib.ctype;


bool is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}


bool is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}


bool is_alpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}


bool is_digit(char c)
{
    return c >= '0' && c <= '9';
}


bool is_xdigit(char c)
{
    return is_digit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}


bool is_alphanum(char c)
{
    return is_alpha(c) || is_digit(c);
}