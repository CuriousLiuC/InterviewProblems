class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        tempstr = ""
        flag = 0
        for i in range(len(str1),0,-1):
            tempstr = str1[:i]
            tttempstr = ""
            if len(str1)%len(tempstr) == 0:
                for j in range(len(str1)/len(tempstr)):
                    tttempstr += tempstr
                if tttempstr == str1 and len(str2)%len(tempstr) == 0:
                    c = ""  
                    for k in range(len(str2)/len(tempstr)):
                        c += tempstr
                        if c== str2:
                            return tempstr#return的不应该是c
                            flag = 1
                            break
                if flag:
                    break
            if flag:
                break     

        return ""  