namespace stdlib.math;


long abs(long n)
{
    if (n < 0) { n = -n; }
    return n;
}


long negative_abs(long n)
{
    if (n > 0) { n = -n; }
    return n;
}