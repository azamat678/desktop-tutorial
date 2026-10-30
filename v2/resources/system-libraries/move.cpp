using system::String;
using system::move;

init {
    String s1 = "Hello, World";
    String s2 = s1;
    
    assert s1 == s2;
}

init {
    String s1 = "Hello, World";
    String s2 = move(s1);
    
    assert s1 == "";
}

init {
    String s1 = "Hello, World";
    String s2 = "Hello, World";
    
    String&& x = move(s2)
    String y = move(s3)
}

init {
    int function(int n) { return 1; }
    int function(int&& n) { return 2; }
    
    int x = function(42);
    int y = function(x);
}
