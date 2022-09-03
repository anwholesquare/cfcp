from collections import defaultdict 
import sys

input = sys.stdin.readline

for _ in range (int (input())) :
    w = input().strip()
    p = int(input())
    d = defaultdict(lambda:0)
    cutPrice = 0
    for i in w:
        d[i] += 1
        cutPrice += ord(i) - 97 +1
    
    for i in range(25,-1,-1):
        present = d[chr(i+97)]
        if cutPrice <= p:
            break
        kotoMinusKorbo = min(d[chr(i+97)], (cutPrice - p + (i+1) - 1)//(i+1))
        d[chr(i+97)] -=kotoMinusKorbo
        cutPrice -= kotoMinusKorbo * (i+1)
    mojaString = []

    for i in w:
        if d[i] > 0:
            d[i] -=1
            mojaString.append(i)
    print(''.join(mojaString))
