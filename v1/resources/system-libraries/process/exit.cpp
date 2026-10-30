namespace system {
    namespace process {
        void exit(int num = 0) {
            __system_process_exit(num);
        }
    }
}

using system::process::exit;

init {
    exit(0);
}