// static члены и умный поисковик внутри класса
class Information {
    static int counter = 0;
    
    Information() {
        Information::counter += 1;
        counter += 1;
    }
}

// инициализация класса и класс указателя
class Data {
    int x;
    
    Data() {}
    
    Data(int x) : x(x) {}
}

init {
    {
        Data x = Data();
        Data y = Data(0);
    }
    {
        Data x = {};
        Data y = {0};
        Data z = 0;
    }
    {
        Data *x = new Data();
        Data *y = new Data(0);
        
        delete x;
        delete y;
    }
}
