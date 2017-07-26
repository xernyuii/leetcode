class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        L=nums1+nums2
        L.sort()
        
        lon=len(L)
        if lon%2 == 1:
            return L[lon//2]*1.0
        else:
            return (L[lon//2]+L[lon//2-1])/2
        
        
        
