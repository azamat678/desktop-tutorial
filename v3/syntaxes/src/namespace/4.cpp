namespace modifiers
{
    inline namespace nsx
    {
        int x;
    }
    
    sealed namespace nsy
    {
        int y;
        
        namespace yoo
        {
            int oo;
            sealed int oo2;
        }
    }
}

namespace usings
{
    namespace nsx
    {
        using modifiers.x;
        using modifiers.nsy.y;
        using modifiers.nsy.yoo;
    }
    
    namespace nsy
    {
        using modifiers;    // все, кроме тех кто sealed
        sealed using modifiers.nsy;    // работает только на sealed, у кого его нет, вызывает ошибку
        sealed using modifiers.nsy.yoo.oo2;    // переменная под sealed, поэтому using должен иметь модификатор sealed
    }
}