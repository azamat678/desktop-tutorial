#! bin/bash




tryte build libs/openGL/*.tryte --o bin/openGL.exe --ignore-fm test:docs
tryte build libs/llvm/*.tryte --o bin/llvm.exe --ignore-fm test:docs
tryte build src/compiler/*.tryte --o bin/main.exe --d bin/*.exe
tryte run bin/main.exe --fm test --ignore-fm docs




# tryte --Option:
#   --o - путь файла обязательно. создает папки которого нет автоматически. в build, это вывод бинарки файла.
#   --d - от слова зависимости <dependencies>. принимает список бинарных файлов. в build, он линкует зависимости как часть кода.
#   --ignore-fm - удалить список главных функций из бинарника. используется в build и в run. в build он активируется последним, ведь работает только на бинарных файлов.
#   --fm - принимает список имен. эта главные функции. используется в run. init указывать не надо, оно есть автоматически, если указать, выведет ошибку. главные функции, в исходниках, могут находиться так в глобальном поле, так в поле namespace, но в namespace внутри класса, там не ищет, ведь там все static, и принадлежит классу.




# обычный запуск
tryte build main.tryte --o main.exe
tryte run main.exe "this argument in argv"


# простой запуск
tryte run main.tryte "this argument in argv"


# бинарный запуск
tryte build main.tryte --o main.exe
tryte binary main.exe --o main.o
./main.o "this argument in argv"





