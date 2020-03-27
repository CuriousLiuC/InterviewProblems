

class Solution(object):
    def hasGroupsSizeX(self, deck):
        """
        :type deck: List[int]
        :rtype: bool
        """
        dic = {}
        for item in deck:
            if item in dic:
                dic[item] += 1
            else:
                dic[item] = 1
        print(dic)
        minx = None
        for item in dic:
            if minx == None:
                minx = dic[item]
            elif dic[item] < minx:
                minx = dic[item]
            
        from fractions import gcd
        tempgcd = minx
        for item in dic:
            print(gcd(dic[item],tempgcd))
            
            if gcd(dic[item],tempgcd) < 2:
                return False
            tempgcd = gcd(dic[item],tempgcd)
        return True

