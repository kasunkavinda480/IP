suma = 0
for 101 in 200
do
   if [ `expr $arg % 9 ` -eq 0 ] 
    then
       suma= ` expr $suma + $arg `
   fi
done

echo "Sum is : $suma "

echo "Enter a number"
read num

sum=0
num;

while [ $num% 9 -gt 100 ]
do
    sum=$((sum + mod))   #Add each digit to sum
    num = $(($num+1))	
done

echo $sum