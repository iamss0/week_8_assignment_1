// question:- 1 Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 0; i /= 2) {
// c++;
// }
// as in classwork the multiplication problem K was being multiplied until n is acheived
// similarly here the number keep getting halved until it becomes zero or recaheces to zero
// n/1,n/2, n/4, n/8.....n/2^x where x is number of times the n gets halved
// n/2^x is almost equal to zero-->> n/2^x = 0;
// 2^x = n: --->> log2(n)
// TC will be O(log2(n));




// question:- 2 Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 1; i /= i) {
// c++;
// }
// as i which is initialized with n, will divide by it self
// and become 1:-->> n/n =1;-->> so by condition i>1 and loop will terminated just after 1 iteration
// or we can say that after constant iteration every time, irrespective of n
// so TC will be>>>--->>> O(1)




// question:- 3 Calculate the time complexity for the following code snippet where k is some constant (k<<n).
// int c = 0;
// for(int i = 0; i < n; i += k) {
// c++;
// }
// the code will run for n/k
// so the TC will be O(n)




// question:- 4 Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 1; i < n; i *= 2) {
// c++;
// }
// there will be x iterations until we reach n or cross n and loop stops
// so first number will be 1 then 2,4,8... until we reach n or cross it;
// 2^x >or= n
// if take assumptions then 2^x = n or x = log2(n)
// this TC will be O(log2(n))




// question:- 5 Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
// c +=i;
// }
// loop will go on for n times from 0 to n-1
// this TC will be O(n)





// question:- 6 Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
//  for(int j = 0; j < i; j++){
//  c++;
//  }
// }
// the inner loop will go on like
// i--> 0 then j--> ;
// i--> 1 then j--> 0;
// i--> 2 then j--> 0,1;
// i--> 3 then j--> 0,1,2; ... and so on till
// i--> n-1 then j--> 0,1,2,,,,,n-2;
// so, total number of operation will be around:---->> (n(n-1))/2;
// or we can say that TC will be O(n^2)