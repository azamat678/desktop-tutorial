init {
    bool b = 'A' in char[] {'X', 'Y', 'Z'};
    
    class Object {
        bool operator in(bool b) {
            return not b;
        }
    }
    
    Object obj;
    
    b = true in obj;
}