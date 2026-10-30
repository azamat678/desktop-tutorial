enum T1 { ONE, TWO, THREE, }

enum T2 {
    ONE = 0,
    TWO = 1,
    THREE,
}

enum T3 : short {
    ONE,
    TWO,
    THREE,
}

enum T4 : short {
    ONE = 10i16,
    TWO = 20i16,
    THREE = 30i16,
}

enum T5 : char {
    ONE = 'A',
    TWO = 'B',
    THREE = 'C',
}

enum T6 : std.system.String {
    ONE = std.system.String("Hello-World"),
    TWO = "Hello-World";
}

enum T7 : char* {
    ONE = 'Hello-World';
}