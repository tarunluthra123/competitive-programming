class Solution:
    def search(self, nums: List[int], key: int) -> bool:
        s, e = 0, len(nums) - 1
        while s <= e:
            mid = s + e >> 1
            if nums[mid] == key:
                return True
            while s < mid and nums[s] == nums[mid]: # tricky part
                s += 1
            if nums[s] <= nums[mid]:
                if key >= nums[s] and key <= nums[mid]:
                    e = mid - 1
                else:
                    s = mid + 1
            elif key >= nums[mid] and key <= nums[e]:
                s = mid + 1
            else:
                e = mid-1

        return False
