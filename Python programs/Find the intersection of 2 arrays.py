# -*- coding: utf-8 -*-
"""
Created on Thu Aug 26 10:43:51 2021

@author: Debanjan Rudra
"""

if __name__=='__main__':
    
    for _ in range(int(input())):
        
        n , m = map(int, input().split())
        
        A = list(map(int,input().rstrip().split()))
        
        B = list(map(int,input().rstrip().split()))
        
        new = list(set(A) and set(B))
        
        print(new)