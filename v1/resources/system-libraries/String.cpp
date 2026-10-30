using system::clang;

namespace system
{
    class String
    {
    private:
        size_t _length = 0, _capacity;
        char* _text;
        
    public:
        size_t length() {
            return _length;
        }
        
        size_t capacity() {
            return _capacity;
        }
        
        char* data() {
            return _text;
        }
        
        const char* c_str() {
            return _text;
        }
        
    public:
        String() {
            _text = new char[22];
            _capacity = 22;
            _text[0] = 0;
        }
        
        String(char c) : String() {
            (*this) += c;
        }
        
        String(const char* str) : String() {
            (*this) += str;
        }
        
        String(String& s) : String() {
            (*this) += s;
        }
        
    public:
        ~String() {
            delete _text;
        }
        
    public:
        String& operator +=(char c) {
            if (_length + 1 < _capacity) {
                _text[_length++] = c;
                _text[_length] = 0;
            }
            else {
                _capacity *= 2;
                char* text = new char[_capacity];
                for (size_t i = 0; i < _length; i++) {
                    text[i] = _text[i];
                }
                text[_length++] = c;
                text[_length] = 0;
                delete _text;
                _text = text;
            }
            return *this;
        }
        
        String& operator +=(const char* str) {
            size_t len = strlen(str);
            for (size_t i = 0; i < len; i++) {
                (*this) += str[i];
            }
            return *this;
        }
        
        String& operator +=(String& s) {
            return (*this) += s.data();
        }
        
        String& operator +=(String s) {
            return (*this) += s.data();
        }
        
    public:
        String& operator =(const char* str) {
            delete _text;
            size_t len = strlen(str);
            _text = new char[len + 1];
            _capacity = len + 1;
            _length = 0;
            _text[len] = 0;
            return (*this) += str;
        }
        
        String& operator =(String& s) {
            return (*this) = s.data();
        }
    }
}