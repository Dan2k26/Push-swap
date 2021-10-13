#!/bin/bash

ARG=`seq $1 $2 | sort -R | tail -n $3 | tr '\n' ' '`
#de que numero a que numero        numero de numeros que tienen que salir
if [[ $4 == "check" ]] && [ -f "./checker_Mac" ]; then
	./push_swap $ARG | ./checker_Mac $ARG
else
	./push_swap $ARG
fi
