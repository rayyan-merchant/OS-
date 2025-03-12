i=0
while [ $i -le 10 ]
do
echo $i
((i++))
done

for j in {1..10}
do 
echo $j
done

for ((j=0;j<=10;j++))
do
echo $j
done

loop(){
for ((i=0;i<=10;i++))
do
for((j=0;j<=i;j++))
do
	echo -n $i
done
echo -e
done
}
loop

newloop(){
for ((i=0;i<=10;i++))
do
for((j=0;j<=i;j++))
do
	echo -n $i
done
echo -e
done
echo $var1 $2 $3
}
read -p"Enter var1 value" var1
newloop $var1 $1 $2
