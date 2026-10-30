init {
    int value = 0;
    
    int& link = value;
}

init {
    int value = 0;
    
    int* ptr = &value;
    *ptr = *ptr + 1;
}

init {
    const char* str = "Hello, World";
}

init {
    {
        int* x = new int;
        *x = 0;
        delete x;
    }
    {
        int* x = new int(0);
        delete x;
    }
}

init {
    {
        int* x = new int[2];
        x[0] = 0;
        x[1] = 0;
        delete x[];
    }
    {
        int* x = new int[2];
        *x = 0;
        *(x + 1) = 0;
        delete x[];
    }
    {
        int* x = new int[2] {0, 0};
        delete x[];
    }
}
