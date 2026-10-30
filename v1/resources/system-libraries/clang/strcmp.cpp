namespace system {
    namespace clang {
        bool strcmp(const char* s1, const char* s2) {
            size_t len = strlen(s1);
            if (len != strlen(s2)) return false;
            
            for (size_t i = 0; i < len; i++) {
                if (s1[i] != s2[i]) return false;
            }
            
            return true;
        }
    }
}
