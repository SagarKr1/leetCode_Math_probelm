// You are given two non-empty linked lists representing two non-negative integers.
// The digits are stored in reverse order, and each of their nodes contains a single digit.
// Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
//  Exampel 1: Input: l1 = [2,4,3], l2 = [5,6,4]
//             Output: [7,0,8]
//             Explanation: 342 + 465 = 807.

// Example 2 :
//              Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
//              Output: [8,9,9,9,0,0,0,1]

var addTwoNumbers = function (l1, l2) {
  let sumlist = [];
  let rem = 0;
  let len1 = l1.length;
  let len2 = l2.length;
  if (len1 >= len2) {
    for (let i = 0; i < len1; i++) {
      var sum = 0;
      if (l2[i] == undefined) {
        console.log("l2 out of index ");
        sum = l1[i] + rem;
      } else {
        sum = l1[i] + l2[i] + rem;
      }
      console.log("Value of sum ", sum);
      if (sum >= 10) {
        rem = 1;
        sum = sum % 10;
        sumlist[i] = sum;
      } else {
        rem = 0;
        sumlist[i] = sum;
      }
    }
  } else {
    for (let i = 0; i < len2; i++) {
      var sum = 0;
      if (l1[i] == undefined) {
        console.log("l2 out of index ");
        sum = l2[i] + rem;
      } else {
        sum = l1[i] + l2[i] + rem;
      }
      console.log("Value of sum ", sum);
      if (sum >= 10) {
        rem = 1;
        sum = sum % 10;
        sumlist[i] = sum;
      } else {
        rem = 0;
        sumlist[i] = sum;
      }
    }
  }
  if(rem!=0){
    sumlist[sumlist.length]=rem;
  }
  return sumlist;
};

const testCases1 = [
  [2, 4, 3],
  [9, 9, 9, 9, 9, 9, 9],
];

const testCases2 = [
  [5, 6, 4],
  [9, 9, 9, 9],
];

// console.log(testCases1.length);

for (let i = 0; i < testCases1.length; i++) {
  var l1 = testCases1[i];
  var l2 = testCases2[i];
  var value = addTwoNumbers(l1, l2);
  console.log(value);
}
