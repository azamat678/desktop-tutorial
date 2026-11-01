namespace stdio.io;


enum Mode : const char*
{
    R = "r",
    W = "w",
    A = "a",
    RP = "r+",
    WP = "w+",
    AP = "a+",
    
    RB = "rb",
    WB = "wb",
    AB = "ab",
    RPB = "r+b",
    WPB = "w+b",
    APB = "a+b",
}


class File
{
    static File* open(const char* file_path, Mode mode)
    {
        
    }
    
    static void close(File* file)
    {
        
    }
    
    static char read_char(File* file) {}
    static char* read_line(File* file) {}
    static char* read_text(File* file) {}
    static char* read_buffer(File* file) {}
    
    static size_t write(File* file, char c) {}
    static size_t write(File* file, const char* str) {}
    
    static void* read_bin(File* file, size_t size_of) {}
    static size_t write_bin(File* file, void* mem_ptr, size_t size_of, size_t count) {}
    
    static bool is_eof(File* file) {}
    static bool is_error(File* file) {}
    static const Mode get_mode(File* file) {}
}