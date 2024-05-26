if (nums[low] == nums[mid]) {
low++;
continue;
}
​
if (nums[low] <= nums[mid]) {
if (nums[low] <= target && target <= nums[mid]) high = mid - 1;
else low = mid + 1;
} else {
if (nums[mid] <= target && target <= nums[high]) low = mid + 1;
else high = mid - 1;
}