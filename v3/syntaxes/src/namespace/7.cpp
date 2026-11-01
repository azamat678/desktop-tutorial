void func() {
    namespace data
    {
        int x;
        const int y = 0;
        static int z;
    }
    
    data.x += 1;
}