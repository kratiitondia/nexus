class Solution:
    
    def checkIsAP(self, arr, n):
        arr.sort()
        d=arr[1]-arr[0]
        a=arr[0]
        for i in range(2,n):
            if arr[i]-arr[i-1]!=d:
                return False
        return True
