class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return False
        
        strx = str(x)
        lenx = len(strx)
        
        if lenx%2 == 0:
            end = lenx//2
        else:
            end = lenx-1//2

        for i in range(0,end):
            if strx[i] != strx[lenx-1-i]:
                return False
        
        return True