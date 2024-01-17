#User function Template for pyth
from itertools import *
class Solution:
    def uniquePerms(self, arr, n):
        # code here 
        l=list(set(permutations(arr)))
        l.sort()
        return l


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        res = ob.uniquePerms(arr,n)
        for i in range(len(res)):
            for j in range(n):
                print(res[i][j],end=" ")
            print()
# } Driver Code Ends