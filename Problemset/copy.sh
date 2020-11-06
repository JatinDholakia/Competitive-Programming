clear
echo -n "Difficulty: "
read dif
echo -n "Problem: "
read prob
mkdir -p $dif
cd $dif
mkdir $prob
cd $prob
cp ../../../main.cpp .
touch input.txt
code input.txt
code main.cpp
