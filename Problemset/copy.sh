clear
echo -n "Directory: "
read dir
mkdir $dir
cd $dir
cp ../../main.cpp .
touch input.txt
code input.txt
code main.cpp
