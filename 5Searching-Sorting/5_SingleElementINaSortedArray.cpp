//     int singleNonDuplicate(vector<int>& nums) {
//         int low =0;
//         int high= nums.size()-1;
//         int mid;
//         if(nums.size()==1){
//             return nums[0]
//         }
//         while(low<=high){
//             mid = low+(high-low)/2;
//             if(mid == 0 && nums[mid+1] != nums[mid]){
//                  break;     
//             }
//             else if(mid == nums.size()-1 && nums[mid]!= nums[mid-1]){
//                 break;
//             }
//             else if(nums[mid]!= nums[mid+1] && nums[mid]!=nums[mid-1]){
//                 break;
//             }
//             else{
// //                 Input: nums = [3,3,7,7,10,11,11]
// //                                0 1 2 3  4  5  6   
// //                                  Output: 10
//                 int fo,so;
//                 if(nums[mid] == nums[mid+1]){
//                     fo =mid;
//                     so = mid+1;
//                     if(fo%2 != 0){
//                         high=mid-1;
//                     }
//                     else{
//                         low=mid+1;
//                     }
//                 }
//                 else if(nums[mid]==nums[mid-1]){
//                     fo=mid-1;
//                     so=mid;
//                     if(fo%2==0){
//                         low =mid+1;
//                     }
//                     else{
//                         high=mid-1;
//                     }
//                 }
//             }
//         }
//         return nums[mid];
//     }