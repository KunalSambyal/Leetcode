class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numsMap = {} 
        for idx, num in enumerate(nums):
            complement = target - num
            if(complement in numsMap):
                return [numsMap[complement], idx]
                
            numsMap[num] = idx
           
            
        
            
            