void goto_label() {
    goto label;
label:
    return;
}

void multiple_function() {
    void func(){}
    void func(int x){}
    void func(bool x){}
    
    func();
    func(0);
    func(false);
}

void auto_parameter(int x = 0, int y = 0) {}
