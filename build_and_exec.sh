# g++ -std=c++17 -Wall -I./include -c ./src/Article.cpp
# g++ -std=c++17 -Wall -I./include -c ./src/Customer.cpp
# g++ -std=c++17 -Wall -I./include -c ./src/Order.cpp
# g++ -std=c++17 -Wall -I./include -c main.cpp

# g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Article.o Customer.o Order.o main.o -o app.exe

# --------------------------------------------------------
# especificando cada uno de los archivos:
# g++ -I./include main.cpp ./src/Article.cpp ./src/Customer.cpp ./src/Order.cpp -o parcial.bin  

# incluyendo todos los .cpp que haya en ./src
g++ -I./include main.cpp ./src/*.cpp -o parcial.bin  

# Permiso de ejecucion a parcial.bin
chmod +x parcial.bin

# Ejecutando parcial.bin
./parcial.bin
