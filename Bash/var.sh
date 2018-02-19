#!/bin/bash
rand=5
let rand+=4  #every variable is considered as string
echo "$rand"
echo $rand
num=1.5
num2=2.5
num3=$(python -c "print $num + $num2")
echo $num3
cat<<END
This text
prints on $num3
many lines
END
declare -r nUM=5 # constant or read only variable
echo $nUM
