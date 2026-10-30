namespace utilities;

using std.collections;


void test_constant()
{
    using Math.constant.PI;
    
    assert PI == (22 / 7);
}


void test_fn()
{
    using Math.fn;
    
    assert sqrt(2) == 4;
    assert sqrt(3) == 9;
}