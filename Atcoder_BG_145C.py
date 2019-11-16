'''
@author Terumi Yokose
https://atcoder.jp/contests/abc145/tasks/abc145_c
'''


import math
N=int(input())
P = [list(map(int, input().split())) for i in range(N)]

xs=P[0][0]
ys=P[0][1]
for j in range(0,N):
	for i in range(1,N):
  		d =+ math.sqrt(pow((P[i][0]-P[j][0]),(P[i][0]-P[j][0]))+pow((P[i][1]-P[j][1]),(P[i][1]-P[j][1])))
 
print(d/N)

