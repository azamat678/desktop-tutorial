namespace utilities;

using std.collections;


static class Math
{
    namespace constant
    {
        const double PI = 22 / 7;
    }
    
    namespace fn
    {
        inline int sqrt(int n) return n * 2;
    }
    
    namespace vector3
    {
        ArrayInt<3> add(ArrayInt<3> array, ArrayInt<3> array2) {
            ArrayInt<3> array3 = ArrayInt<3>();
            for (int i = 0; i < 3; i++) {
                array3.get(i) = array.get(i) + array2.get(i);
            }
            return array3;
        }
    }
    
    namespace vector2
    {
        ArrayInt<2> add(ArrayInt<2> array, ArrayInt<3> array2) {
            ArrayInt<2> array3 = ArrayInt<2>();
            for (int i = 0; i < 2; i++) {
                array3.get(i) = array.get(i) + array2.get(i);
            }
            return array3;
        }
    }
}