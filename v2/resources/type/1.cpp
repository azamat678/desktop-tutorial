init {
    {
        signed char x;
        unsigned char y;
        char z;
    }
    {
        signed short x;
        unsigned short y;
        short z;
    }
    {
        signed int x;
        unsigned int y;
        int z;
        uint w;
    }
    {
        signed long x;
        unsigned long y;
        long z;
    }
    {
        float x;
        double y;
    }
    {
        bool x;
        bool y;
    }
    {
        void* x;
        int* y;
    }
}

init {
    {
        signed char x = 65;
        unsigned char y = 65;
        char z = 65;
    }
    {
        signed short x = 0;
        unsigned short y = 0;
        short z = 0;
    }
    {
        signed int x = 0;
        unsigned int y = 0;
        int z = 0;
        uint w = 0;
    }
    {
        signed long x = 0;
        unsigned long y = 0;
        long z = 0;
    }
    {
        float x = 0;
        double y = 0;
    }
    {
        bool x = 0;
        bool y = 0;
    }
    {
        void* x = nullptr;
        int* y = nullptr;
    }
}

init {
    {
        signed char x = 'A';
        unsigned char y = 'A';
        char z = 'A';
    }
    {
        signed short x = 0;
        unsigned short y = 0u;
        short z = 0;
    }
    {
        signed int x = 0;
        unsigned int y = 0u;
        int z = 0;
        uint w = 0u;
    }
    {
        signed long x = 0l;
        unsigned long y = 0ul;
        long z = 0l;
    }
    {
        float x = 3.14f;
        double y = 3.14;
    }
    {
        bool x = true;
        bool y = false;
    }
}

init {
    size_t x = 0;
    ptrdiff_t y = 0;
}

init {
    var n = 0;
    var b = false;
    var c = 'A';
}
