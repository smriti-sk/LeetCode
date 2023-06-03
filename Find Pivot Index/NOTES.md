# 724. Find Pivot Index
The idea is if pivot exists, then leftSum + pivot = rightSum + pivot

leftSum: int i=0: i<n: i++
leftSum += nums[i]

rightSum: int i=0: i<n: i++
Total -= nums[i]
