var1=10
var2=20

if [ $var1 = $var2 ];
then
	echo "Equal"
elif [ $var1 -lt $var2 ];
then
	echo "Less than"
else
	echo "Not Equal"
fi


