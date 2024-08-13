class Solution:
    def punishmentNumber(self, n: int) -> int:
        ans=0
        for i in range(1,n+1):
            if self.check(i):
                ans+=i*i
        return ans
    
    def check(self, i:int)->bool:
        x =i*i
        s=str(x)
        return self.Punishment(s,0,i)
    
    def Punishment(self, s: str, i: int, m: int)->bool:
        if m==0 and i==len(s):
            return True
        if m<0 or i==len(s):
            return False
        for j in range(i+1, len(s)+1):
            temp=int(s[i:j])
            if self.Punishment(s, j, m-temp):
                return True
        return False
    '''
    if target==0 and index==len(string):
            return True
        if target<0 or index==len(string):
            return False
        for i in range(index+1, len(string)+1):
            num=int(string[index:i])
            if self.Punishment(string, i, target-num):
                return True
        return False'''
        
        