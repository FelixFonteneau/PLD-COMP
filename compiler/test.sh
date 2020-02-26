#! /bin/bash
#fichier pour tester la bonne compilation du fichier

testDir="test"
testFile="test"

cd $testDir
../ifcc $1 > $testFile".s"
as -o $testFile".o" $testFile".s"
gcc $testFile".o"
"./a.out"
echo $?
