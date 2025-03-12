var1=10
var2=20
var3=$((var1+var2))
var4=$((var1-var2))
echo $var3
((var3++))
echo $var3
echo $var1-$var2=$var4
