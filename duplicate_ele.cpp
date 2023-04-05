
// -------METHOD 1 TO FIND DUPLICATE

// sort(nums.begin(),nums.end());
//             for(int i=0;i<nums.size()-1;i++){
//                 if(nums[i] == nums[i+1]){
//                     return nums[i];
//                 }
//             }
//             return -1;

// // -------METHOD 2 TO FIND DUPLICATE
//         using visited index method

//         int ans = -1;
//         for(int i=0;i<nums.size();i++){
//         int index = abs(nums[i]);
        

//         check already visit

//         if(nums[index] < 0){
//             ans = index;

//             break;
//         }


//         not visit

//         nums[index] *= -1;

    
//     }
//     return ans;


// -------METHOD 3 TO FIND DUPLICATE USING SWAPING
//   while(nums[0] != nums[nums[0]]){
//         swap(nums[0],nums[nums[0]]);
//     }
//     return nums[0];
//     } 

