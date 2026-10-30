void function() {
    void function() {}
    class Class {}
    enum Enumeration {}
    var lambda = []() -> int { return 0; };
}

void goto_label() {
    goto label;
label:
    return;
}

// если оптимизация невозможно, ошибка
inline int sum(int x, int y) { return x + y; }

void multiple_function() {
    void func(){}
    void func(int x){}
    void func(bool x){}
    
    func();
    func(0);
    func(false);
    
    int func() { return 0; }
    bool func() { return false; }
    
    int x = func();
    bool y = func();
}

void callback() {
    int sum(int x, int y) { return x + y; }
    
    typedef system::Function<int(int, int)> Func;
    
    Func func = sum;
    int n = func(0, 0);
}

void auto_parameter(int x = 0, int y = 0) {}

init {
    void function(int begin, int end = 0) {}
    
    function(0);
    function(0, 0);
    
    function(begin=0, end=0);
    function(end=0, begin=0);
    
    function(0, end=0);
    function(end=0, 0);
}
