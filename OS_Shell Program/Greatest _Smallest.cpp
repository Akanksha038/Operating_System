# print greatest and smallest of n number

read -a integers

biggest=${integers[0]}
smallest=${integers[0]}

for i in ${integers[@]}
do
     if [[ $i -gt $biggest ]]
     then
        biggest="$i"
     fi

     if [[ $i -lt $smallest ]]
     then
        smallest="$i"
     fi
done

echo "The largest number is $biggest"
echo "The smallest number is $smallest"



//OUTPUT===>
//55 88 99 66 5 4 7 8 9 333 2 1 5 4 2 1 
//The largest number is 333
//The smallest number is 1
