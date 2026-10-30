namespace system {
    namespace process {
        void sys(const char* str) {
            // может в os а не process?
            __system_process_sys(str);
        }

        void sys(String s) {
            // может в os а не process?
            sys(s.data());
        }
    }
}