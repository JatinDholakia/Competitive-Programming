clear
echo -n "Problem: "
read prob
mkdir $prob
cd $prob
cp ../../template.cpp .
mv template.cpp $prob.cpp
touch input.txt
code input.txt
code $prob.cpp
