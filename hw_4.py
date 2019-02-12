# Homework 4
# Euler's Project 1
# Alex Engle
# CS3560
# 2/12/19

sum = 0;
for i in range(1,1000):
    if i % 3 == 0 or i % 5 == 0:
        sum = sum + i;
print(sum);
