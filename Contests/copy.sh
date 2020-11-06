clear
echo -n "Directory: "
read dir
mkdir $dir
cd $dir

mkdir a
cd a
cp ../../../main.cpp .
touch input.txt
cd ..

mkdir b
cd b
cp ../../../main.cpp .
touch input.txt
cd ..

mkdir c
cd c
cp ../../../main.cpp .
touch input.txt
cd ..

mkdir d
cd d
cp ../../../main.cpp .
touch input.txt
cd ..