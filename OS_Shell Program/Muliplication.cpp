# Program for print Multiplication Table
#!/bin/bash

# Input from user
echo "Enter the number -"
read n

# initializing i with 1
i=1
  
# Looping i, i should be less than
# or equal to 10 
while [ $i -le 10 ]
do
res=`expr $i \* $n`

# printing on console
echo "$n * $i = $res"
 
# incrementing i by one  
((++i))
  
# end of while loop  
done



//output==>Enter the number -
//10
//10 * 1 = 10
//10 * 2 = 20
//10 * 3 = 30
//10 * 4 = 40
//10 * 5 = 50
//10 * 6 = 60
//10 * 7 = 70
//10 * 8 = 80
//10 * 9 = 90
//10 * 10 = 100
