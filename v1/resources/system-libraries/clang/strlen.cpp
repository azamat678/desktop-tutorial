namespace system {
    namespace clang {
        size_t strlen(const char* str) {
            size_t i = 0, len = 0;
            while (str[i++] != 0) len++;
            return len;
        }
    }
}
