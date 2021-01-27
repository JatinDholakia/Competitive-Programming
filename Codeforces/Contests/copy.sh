clear
echo -n "Contest: "
read dir
mkdir $dir
cd $dir

mkdir a
cd a
cp ../../../../template.cpp .
mv template.cpp main.cpp
touch input.txt
code input.txt
code main.cpp
cd ..

mkdir b
cd b
cp ../../../../template.cpp .
mv template.cpp main.cpp
touch input.txt
cd ..

mkdir c
cd c
cp ../../../../template.cpp .
mv template.cpp main.cpp
touch input.txt
cd ..

mkdir d
cd d
cp ../../../../template.cpp .
mv template.cpp main.cpp
touch input.txt
cd ..