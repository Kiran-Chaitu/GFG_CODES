#User function Template for python3
class Solution:
    def sort(self, s): 
        #code here
        l=[]
        for i in s:
            l.append(i)
        ans=""
        l.sort()
        for i in l:
            ans+=i
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input().strip())
    for _ in range(t):
        s = input().strip()
        obj = Solution()
        ans = obj.sort(s)
        print(ans)
# } Driver Code Ends