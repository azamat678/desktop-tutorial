using system;

namespace system {
    sealed namespace auto_operator {
        String operator +(char c, char c2) {
            String s;
            s += c;
            s += c2;
            return s;
        }
        
        String operator *(char c, int n) {
            String s;
            while (n-- > 0) s += c;
            return s;
        }
    }
}

init {
    var t1 = 'A' + 'B';
    var t2 = 'X' * 10;
}
