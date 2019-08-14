import sys
num={};
val ={};
sx=0
sy=0
gx=0
gy=0

line = sys.stdin.readline()
num = line.split()
for i in range(int(num[1])):
line = sys.stdin.readline()
val = list(line)
for m in range(int(num[0])):
if(val[m] == "S"):
sx = i
sy = m
if (val[m] == "G"):
gx = i
gy = m

print (gx-sx)+(gy-sy)
