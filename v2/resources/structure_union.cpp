union Union {
    int x;
    bool y;
}

init {
    Union u;
    
    u.x = 0;
    u.y = false;
}

// union действует как class, но хранит данные по другому
