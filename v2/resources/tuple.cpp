// tuple ключевое слово, в то же время тип
// tuple типы это псевдонимы, сравнимый с конструктором класса
// tuple<> тип имеет отличие от шаблонов, компилятор при встрече с ним, не воспринимает это тип с шаблоном, там он его разбирает на целый класс, и подразделяет его
init {
    tuple Data (int x, int y, int z);
    tuple Vector (int x = 0, int y = 0, int z = 0);
    
    Data data = Data(0, 0, 0);
    Vector vector = Vector();
    
    data = Vector();
    vector = Data(0, 0, 0);
    
    tuple<int x, int y, int z> value1 = data;
    tuple<int x, int y, int z> value2 = vector;
}
