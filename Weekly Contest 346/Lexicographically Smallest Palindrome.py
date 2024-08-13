class Solution(object):
    def makeSmallestPalindrome(self, s):
        
        s = list(s)  # Convert string to a list for easier manipulation
        left = 0
        right = len(s) - 1

        while left < right:
            if s[left] == s[right]:
                left += 1
                right -= 1
            elif s[left] < s[right]:
                s[right] = s[left]
                left += 1
                right -= 1
            else:
                s[left] = s[right]
                left += 1
                right -= 1

        return ''.join(s)
        """
        :type s: str
        :rtype: str
        """
        