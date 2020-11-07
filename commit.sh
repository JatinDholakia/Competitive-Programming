clear
git add .
echo "Commit Message: "
read msg
git commit -a -m "$msg"
git push -u origin master
