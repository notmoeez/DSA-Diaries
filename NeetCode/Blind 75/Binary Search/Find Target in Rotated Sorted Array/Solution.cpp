int search(vector<int>& nums, int target) {
        int size = nums.size(); 
        int l = 0;
        int r = size - 1;
        int mid;

        while(l <= r){
            mid = (l + r)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[l] <= nums[mid] && nums[l] > nums[r])
            {
                // rotated portion
                if(target > nums[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    if(target <= nums[r]){
                        l = mid + 1;
                    }
                    else{
                        r = mid - 1;
                    }
                }
            }
            else
            {
                // unrotated portion
                if(target < nums[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    if(target <= nums[r]){
                        l = mid + 1;
                    }
                    else{
                        r = mid - 1;
                    }
                }
            }
            

        }
        return -1;
    }
