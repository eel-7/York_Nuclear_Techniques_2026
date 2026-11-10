#!/usr/bin/env bash

# a shell script to do fizzbuzz
#   prints numbers 1 too 100
#   prints fizz if number is divisible by 3
#   prints buzz if number is divisible by 5
#   prints fizzbuzz if both

for i in $(seq 1 100); do
    if (( $i %3 == 0 && $i %5 != 0 )); then
        echo "fizz"
    elif (( $i %3 != 0 && $i %5 == 0 )); then
        echo "buzz"
    elif (( $i %3 == 0 && $i %5 == 0 )); then
        echo "fizzbuzz"
    else
        echo $i
    fi
done
