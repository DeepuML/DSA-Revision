// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<"DEEPU"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// void printname(){
//     for(int i=0;i<5;i++){
//         cout<<"Deepu"<<endl;
//     }
// }
//  int main(){
//     printname();

//  }

// #include<iostream>
// using namespace std;
// int add(int a , int b){
//      int sum=a+b;

//     return sum;
// }

// int main(){
// int num1;
// cout<<"Enter num1: ";
// cin>>num1;


// int num2;
// cout<<"Enter num2: ";
// cin>>num2;


// int ans=add(num1 , num2 );
// cout<<"Answer is: "<<ans<<endl;


// }
// #include<iostream>
// using namespace std;
//  int main(){
//     int a=3;
//     int* ptr=&a;
//     cout<<"The address is : "<<ptr;

// }

// #include<iostream>
// using namespace std;
// int max(int a, int b, int c){
//     if(a>b && a>c){
//         return a;

//     } 
//     else if(b>c && b>a){
//         return b;
//     }
//      else{
//         return c;
//      }
// }
// int main(){
//     int num1;
//     cout<<"Enter num1: ";
//     cin>>num1;

//     int num2;
//     cout<<"Enter num2: ";
//     cin>>num2;

//     int num3;
//     cout<<"Enter num3: ";
//     cin>>num3;

//     int ans=max(num1 , num2 , num3);
//     cout<<"Maximum answer is: "<<ans <<endl;

// #include<iostream>
// using namespace std;
// char grade(int marks){
//     if(marks>=90){
//         cout<<"A"<<endl;
//     }
//     else if(marks>=80){
//         cout<<"B"<<endl;
//     }
//     else if(marks>=70){
//         cout<<"C"<<endl;
//     }
//     else if(marks>=60){
//         cout<<"D"<<endl;
//     }
//     else if(marks<50){
//         cout<<"Fail"<<endl;
//     }

// }
//  int main(){
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;

//     char result=grade(num);
//     cout<<"The result is: "<<endl;

//  }

// #include <iostream>
// using namespace std;

// // Function to determine grade based on marks
// char grade(int marks) {
//     if (marks >= 90) {
//         return 'A';
//     } else if (marks >= 80) {
//         return 'B';
//     } else if (marks >= 70) {
//         return 'C';
//     } else if (marks >= 60) {
//         return 'D';
//     } else {
//         return 'F'; // F for fail
//     }
// }

// int main() {
//     int num;

//     // Input marks
//     cout << "Enter marks: ";
//     cin >> num;

//     // Call grade function and store result
//     char result = grade(num);

//     // Output the grade
//     cout << "The grade is: " << result << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sum(int a){
   
//     int sum1=0;
//     for(int i=0;i<=a;i=i+2){
//         sum1=sum1+i;
//     }
//     return  sum1;
// }

// int main(){
// int n;
// cout<<"Enter the number: ";
// cin>>n;

// int ans=sum(n);
// cout<<"The sum is: "<<ans<<endl;


// }

// #include<iostream>
// using namespace std;
// float area(int radius){
//     float area=2*3.14*radius;

//     return area;
// }
// int main(){
//     int r;
//     cout<<"Enter radius: ";
//     cin>>r;

//     float ans=area( r);
//     cout<<"Answer is: "<<ans;
// }
  
// #include<iostream>
// using namespace std;
// bool checkEven(int num){
//     if(num%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     if(checkEven(n)){
//         cout<<"Number is even";
//     }
//     else{
//         cout<<"Number is odd";
//     }
// }

// #include<iostream>
// using namespace  std;
// int  fact(int  n){
   
//     int fact=1;
//     for(int i=n;i>=1;i--){
//         fact=fact*i;
//     }
//     return fact;

// }
// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;

//     int ans=fact(num);
//     cout<<"The factorial is: "<<ans<<endl;
// }
// #include <iostream>
// using namespace std;

// bool checkPrime(int num) {
//     if (num < 2) {
//         return false; // Numbers less than 2 are not prime
//     }
//     for (int i = 2; i * i <= num; i++) { // Check divisibility up to the square root of num
//         if (num % i == 0) {
//             return false; // Found a divisor, so num is not prime
//         }
//     }
//     return true; // No divisors found, num is prime
// }

// void listPrimes(int n) {
//     cout << "Prime numbers between 2 and " << n << " are: ";
//     for (int i = 2; i <= n; i++) {
//         if (checkPrime(i)) {
//             cout << i << " "; // Print the prime number
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int num;
//     cout << "Enter a number n: ";
//     cin >> num;

//     if (num < 2) {
//         cout << "There are no prime numbers less than 2." << endl;
//     } else {
//         listPrimes(num);
//     }

//     return 0;
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
//     if(num<0){
//         cout<<"Please enter a non-negative integer..";
//         return 1;
//     }

//     while(num>0){
//         int ans=num%10;
//         cout<<ans<<" ";
//         num=num/10;
//     }
//     cout<<endl;
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int digit[4]={8,2,5,7};
//     int ans=0;
//     for(int i=0;i<4;i++){
//         ans=ans*10+digit[i];
//     }
//     cout<<"The number is: "<<ans<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int count=0;

//     while(n!=0){
//         if(n & 1 ==1){
//             count++;
//         }
//         n=n>>1;
//     }
//     cout<<"The number of bits: "<<count<<endl;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int count = 0;  // Initialize count to 0

//     while(n != 0){
//         if((n & 1) == 1){  // Check if the least significant bit is 1
//             count++;
//         }
//         n = n >> 1;  // Right shift n by 1 bit
//     }

//     cout << "The number of bits: " << count << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     double km;
//     cout<<"Enter km: ";
//     cin>>km;
//     double mile=(1/1.6) * km;
//     cout<<"The output is: "<<mile;
    

// }

// #include<iostream>
// using  namespace std;
// int main(){
//     int num=987986;
//     int ans=0;
//     while(num>0){
//         int ld=num%10;
//         ans=ans*10+ld;
//         num=num/10;
//     }
//     cout<<"The reversed number is: "<<ans<<endl;
// }
// #include<iostream>
// using namespace std;
// int reversed(int num){
//     int ans=0;
//     while(num>0){
//         int ld=num%10;
//         ans=ans*10+ld;
//         num=num/10;
//     }
//     return ans;


// }
// int main(){
//     int n;
//     cout<<"Enter the number : "<<endl;
//     cin>>n;

//     int ans=reversed(n);
//     cout<<"The Reversed number is: "<<ans<<endl;
// }

// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int i;
//     cout<<"Enter the ith bit: ";
//     cin>>i;

//     int ans=1<<i;
//     ans=ans | n;

//     cout<<"The output is: "<<ans<<endl;
//  }

// #include<iostream>
// using namespace std;
// float faherenhite(int n){
//     float f=(9/5)*n+32;
//     return f;
// }
// float celsius(int n){
//     float c=(9/5)*(n-32);
//     return c;
// }
// int main(){
//     int input;
//     cout<<"Enter input: ";
//     cin>>input;

//     float ans1=faherenhite(input);
//     cout<<"Answer in faherenite: "<<ans1<<endl;

//     float ans2=celsius(input);
//     cout<<"Answer in celsius: "<<ans2<<endl;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter the numbers: ";

//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     // printing their doubles
//     cout<<"Printing the doubles: ";
//     for(int i=0;i<5;i++){
//         cout<<2*arr[i]<<" ";
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={12,3,4,5};
//     for(int i=0;i<5;i++){
//         arr[i]=1;
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Linenar search in array
// #include<iostream>
// using namespace std;
// bool findElement(int arr[],int size,int key){
    
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;
//         }
// }
// return false;

// }
// int main(){
//     int  arr[5]={1,2,3,4,5};
//     int size=5;
//     int key=3;


//     if(findElement(arr,size,key)){

//         cout<<"Key found."<<endl;
//     }
//     else{
//         cout<<"Key not found."<<endl;
//     }

// }
// #include<iostream>
// using namespace std;
// int keyfind(int arr[],int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return i;
//             break;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[5]={
//         1,2,3,4,5
//     };
//     int size=5;

//     int key=4;
//     int ans=keyfind(arr,size,key);

//     if(ans!=-1){
//         cout<<"Key found at index at "<< ans <<endl;

//     }
//     else{
//         cout<<"Key not found."<<endl;
//     }

// }
// #include<iostream>
// using namespace std;
// void count(int arr[],int &ones,int &zeros,int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zeros++;
//         }
//         else{
//             ones++;
//         }
//     }
    

// }
// int main(){
//     int arr[6]={0,0,0,1,1,1};
//     int size=6;

//     int zeros=0;
//     int ones=0;

//     count(arr,ones,zeros,size);
//     cout<<"Number of zeros : "<<zeros<<endl;
//     cout<<"Number of ones: "<<ones<<endl;

// }

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findmaximum(int arr[],int size){
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//            maxi=arr[i];
//         }
//     }
//     return maxi;


// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
    
//     int ans=findmaximum(arr,size);
//     cout<<"The maximum is: "<<ans<<endl;

// }

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findminimum(int arr[],int size){
//     int mini=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<mini){
//             mini=arr[i];
//         }
//     }
//     return mini;
// }
// int main(){
//     int arr[5]={-123,444,-3432,0,443224};
//     int size=5;
     
//      int ans=findminimum(arr, size);
//      cout<<"The minimum number is: "<<ans;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
    
//     int s=0;
//     int e=size-1;
//    while(s<=e){
   
//     cout<<arr[s]<<" ";
//     cout<<arr[e]<<" ";

//     s++;
//     e--;
//    }
// }

// #include<iostream>
// using namespace std;
// void reverse(int arr[] , int size){
//     for(int i=size-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;

//     reverse(arr,size);

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int finduniqueelement(vector<int> arr,int ans){
//     for(int i=0;i<arr.size();i++){
//     ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr{1,2,4,2,1,3,6,5,5,6,4};
//     int ans=0;

//     int ans1=finduniqueelement(arr,ans);
//     cout<<"Unique element is: "<<ans1<<endl;
    

// }

//#include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int findUniqueElement(vector<int>& arr) {
//     // Sort the array
//     sort(arr.begin(), arr.end());
    
//     // Traverse the sorted array to find the unique element
//     for(int i = 0; i < arr.size(); i += 2) {
//         // If the current element is different from the next one, it's the unique element
//         if(i == arr.size() - 1 || arr[i] != arr[i + 1]) {
//             return arr[i];
//         }
//     }
    
//     return -1; // This shouldn't happen for the problem description
// }

// int main() {
//     vector<int> arr{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};
//     int unique_element = findUniqueElement(arr);
//     cout << "Unique element is: " << unique_element << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[5]={1,2,3,4,5};
//     int size1=5;
//     int arr2[5]={6,7,8,9,0};
//     int size2=5;

//     int ans[size1+size2];

//     int index=0;

//     for(int i=0;i<size1;i++){
//         ans[index++]=arr1[i];
//     }

//     for(int i=0;i<size1;i++){
//         cout<<ans[i]<<" ";
// }
// cout<<endl;

// for(int i=0;i<size2;i++){
//     ans[index++]=arr2[i];
// }

// for(int i=0;i<size1+size2;i++){
//     cout<<ans[i]<<" ";
// }

// }

// #include<iostream>
// #include<vector>
// using namespace std;

// // Function to take input for a vector
// void inputVector(vector<int>& arr, int n) {
//     cout << "Enter " << n << " elements for the vector: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];  // Take input for each element in the vector
//     }
// }

// int main() {
//     int n1, n2, n3;
    
//     // Take input for the sizes of the three vectors
//     cout << "Enter the size of the first vector: ";
//     cin >> n1;
//     cout << "Enter the size of the second vector: ";
//     cin >> n2;
//     cout << "Enter the size of the third vector: ";
//     cin >> n3;
    
//     // Declare three vectors with respective sizes
//     vector<int> arr1(n1), arr2(n2), arr3(n3);
    
//     // Call the input function for each vector
//     inputVector(arr1, n1);
//     inputVector(arr2, n2);
//     inputVector(arr3, n3);
    
//     // For demonstration, let's print the vectors after input
//     cout << "First vector: ";
//     for (int num : arr1) {
//         cout << num << " ";
//     }
//     cout << endl;
    
//     cout << "Second vector: ";
//     for (int num : arr2) {
//         cout << num << " ";
//     }
//     cout << endl;
    
//     cout << "Third vector: ";
//     for (int num : a3) {
//         cout << num << " ";
//     }


//     cout << endl;
    
//     return 0;
// // }

// #include<iostream>
// #include<vector>
// using namespace std;

// // Function to take input for a vector
// void inputVector(vector<int>& arr, int n) {
//     cout << "Enter " << n << " elements for the vector: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];  // Take input for each element in the vector
//     }
// }

// // Function to find the union of two arrays (without using a set or nested loops)
// vector<int> findUnion(const vector<int>& arr1, const vector<int>& arr2) {
//     vector<int> unionResult;

//     // Insert all elements of the first array into the unionResult
//     for(int i = 0; i < arr1.size(); i++) {
//         unionResult.push_back(arr1[i]);
//     }

//     // Insert elements of the second array into the unionResult, avoiding duplicates
//     for(int i = 0; i < arr2.size(); i++) {
//         bool isDuplicate = false;

//         // Check if the element from arr2 is already in the unionResult
//         for(int j = 0; j < unionResult.size(); j++) {
//             if(arr2[i] == unionResult[j]) {
//                 isDuplicate = true;
//                 break;
//             }
//         }

//         // If not a duplicate, add it to the unionResult
//         if(!isDuplicate) {
//             unionResult.push_back(arr2[i]);
//         }
//     }

//     return unionResult;
// }

// int main() {
//     int n1, n2;

//     // Take input for the sizes of the two vectors
//     cout << "Enter the size of the first vector: ";
//     cin >> n1;
//     cout << "Enter the size of the second vector: ";
//     cin >> n2;

//     // Declare two vectors with the respective sizes
//     vector<int> arr1(n1), arr2(n2);

//     // Call the input function for each vector
//     inputVector(arr1, n1);
//     inputVector(arr2, n2);

//     // Find the union of the two arrays
//     vector<int> unionResult = findUnion(arr1, arr2);

//     // Print the union of the two arrays
//     cout << "Union of the two arrays: ";
//     for(int num : unionResult) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void input(vector<int>& arr, int n){
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }
// vector<int> findUnion(vector<int> &arr1, vector<int> &arr2){
//     vector<int> ans;
//     for(int i=0;i<arr1.size();i++){
//         ans.push_back(arr1[i]);
//     }
//     for(int i=0;i<arr2.size();i++){
//         bool isDuplicate=false;
//         for(int j=0;j<arr2.size();j++){
//             if(arr2[i]==ans[j]){
//             isDuplicate=true;
//             break;
//             }
//         }
//         if(!isDuplicate){
//             ans.push_back(arr2[i]);
//         }
//     }
//     return ans;
// }
// int main(){
//     int n1;
//     cout<<"Enter the size for  vector 1: ";
//     cin>>n1;

//     int n2;
//     cout<<"Enter the size for  vector 2: ";
//     cin>>n2;

//     vector<int> arr1(n1);
//     vector<int> arr2(n2);

//     cout<<"The first array is: ";
//     input(arr1,n1);

//     cout<<"The second array is: ";
//     input(arr2,n2);

//     cout << "The first array is: ";
//     for (int i = 0; i < n1; i++) {
//         cout << arr1[i] << " ";
//     }
//     cout << endl;

//     cout << "The second array is: ";
//     for (int i = 0; i < n2; i++) {
//         cout << arr2[i] << " ";
//     }
//     cout << endl;

//    cout<<"The answer array is: ";
//    vector<int> ans=findUnion(arr1,arr2);

//    for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//    }
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// void input(vector<int>& arr, int n){
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }

// vector<int> intersection(vector<int> &arr1,vector<int> &arr2){
//     vector<int> ans;
//     for(int i=0;i<arr1.size();i++){
//         for(int j=0;j<arr2.size();j++){
//             if(arr1[i]==arr2[j]){
//                 ans.push_back(arr1[i]);
//             }
//         }
//     }
//     return ans;
// }

// void print(vector<int>& arr ){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n1;
//     cout<<"Enter the size for array 1 is: ";
//     cin>>n1;

//     int n2;
//     cout<<"Enter the size for array 2 is: ";
//     cin>>n2;

//     vector<int> arr1(n1),arr2(n2);

//     cout<<"The elements for array 1 is: ";
//     input(arr1,n1);

//     cout<<"The elements for array 2 is: ";
//     input(arr2,n2);


//     vector<int> intersected=intersection(arr1,arr2);
//     cout<<"The intersected array is: ";6
//     print(intersected);

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int sum=9;
//     int size=5;

//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[i]+arr[j]==sum){
//                 cout<<"Pair found at: "<<i<<" and pair is: "<<"( "<<arr[i]<<" , "<<arr[j]<<" ) ";
//             }
//         }
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void input(vector<int> &arr, int n){
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }
// int twopairsum(vector<int> &arr, int n){
//     int sum;
//     cout<<"Enter the value  of sum: ";
//     cin>>sum;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==sum){
//                 cout<<"Pair found: ";
//                 cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )";
//             }
//         }
         
//     }
   
// } 
// int main(){
//     int n;
//     cout<<"Enter the size of vector: ";
//     cin>>n;

//     vector<int> arr(n);
//     cout<<"Enter the element of vector: ";
//     input(arr,n);

//     int ans=twopairsum(arr,n);
//     cout<<ans;


// // }

// #include <iostream>
// #include <vector>
// using namespace std;

// void input(vector<int> &arr, int n) {
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
// }

// int twopairsum(vector<int> &arr, int n) {
//     int sum;
//     cout << "Enter the value of sum: ";
//     cin >> sum;

//     int pairCount = 0;
//     cout<<"Pair cound :  "; 
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             for(int k=j+1;k<n;k++){
//             if (arr[i] + arr[j] + arr[k] == sum) {
//                 cout << "(" << arr[i] << " , " << arr[j] << " , "<<arr[k]<<") ";
//                 pairCount++;
//               }
//             }
//         }
//     }
//     return pairCount;
// }

// int main() {
//     int n;
//     cout << "Enter the size of vector: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the elements of vector: ";
//     input(arr, n);

//     int ans = twopairsum(arr, n);
//     cout << "Total pairs found: " << ans << endl;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void  sort(vector<int> &arr){
//     int start=0;
//     int end=arr.size()-1;

//     while(start<end){
//         if(arr[start]==0){
//             start++;
//         }
//         else if(arr[end]==1){
//             end--;
//         }
//         else{
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//         }
//     }

// }
// int main(){
//     vector<int> arr{1,1,0,0,1,0,0,1,1,0};
//       sort(arr);
//      cout<<"The sorted array is: ";
//    for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
//    }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,0,1,1,0};
//     int size=5;

//     int s=0;
//     int e=size-1;

//     int i=0;

//     while(s<e){
//         if(arr[i]==0){
//            swap(arr[s],arr[i]);
//            s++;
//            i++;
//         }

//         if(arr[i]==1){
//             swap(arr[e],arr[i]);
//             e--;
//         }

//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][4];
//     cout<<" 2d array is created successfully.";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][2]={{1,2},
//     {3,4}};

//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={{1,2,3},
//     {4,5,6},
//     {7,8,9}};

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum=arr[i][j]+sum;
//         }
//         cout<<"the row wise sum is: "<<sum<<endl;
// }
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum=sum+arr[j][i];
//         }
//         cout<<sum;
//         cout<<endl;
//     }
//     cout<<endl;
// }

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int max(int arr[][3],int r, int c){
//     int maxi=INT_MIN;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][j]>maxi){
//                 maxi=arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }

// int min(int arr[][3],int r, int c){
//     int min=INT_MAX;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][j]<min){
//                 min=arr[i][j];
//             }
//         }
    
// }
// return min;

// }
// int main(){
//     int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int rows=3;
//     int cols=3;

//     int ans1=max(arr,rows,cols);
//     cout<<"The maximum number is: "<<ans1<<endl;
//     int ans2=min(arr,rows,cols);
//     cout<<"The minimum number is: "<<ans2<<endl;


// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> arr;
//     cout<<"2D vector sucessfully.";
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> arr(3 , vector<int> (5,0));

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,0,1,0,1,0};
//      int s=0;
//      int size=6;
//      int e=size-1;

//      int i=0;

//      while(s<e){
//         if(arr[i]==0){
//             swap(arr[s],arr[i]);
//             s++;
//             i++;
//         }
//         if(arr[i]==1){
//             swap(arr[e],arr[i]);
//             e--;
//         }
//      }

//      for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//      }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void sortcolors(vector<int> &arr){
//     int low=0, mid=0 , high=arr.size()-1;

//     while(mid<=high){
//         if(arr[mid]==0){
//             swap(arr[mid],arr[low]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid]==1){
//             mid++;
//         }
//         else{
//             swap(arr[mid],arr[high]);
//             high--;
//         }
//     }
// }
// void print(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     vector<int> arr{0,2,1,1,2,0,0};
//     sortcolors(arr);
//     cout<<"The sorted array is: ";
//     print(arr);


// // }
// #include<iostream> 
// #include<vector>
// using namespace std;
// void negativeside(vector<int> &arr,vector<int> &ans){
//    int start=0;
//    int end=arr.size()-1;

//    for(int i=0;i<arr.size();i++){
//     if(arr[i]<0){
//         ans.push_back(arr[i]);
//     }
//    }
//    for(int i=0;i<arr.size();i++){
//     if(arr[i]>=0){
//         ans.push_back(arr[i]);
//     }
//    }
//    arr=ans;
// }

// void print(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     vector<int> arr{-1,0,-3,34,4,2,-32,-21,3};
//     vector<int> ans;
//     negativeside(arr,ans);
//     cout<<"The  sorted array is: ";
//     print(arr);

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={1,2,3,4,6,7,8,9};
//     int size=8;

//     for(int i=0;i<size;i++){
//         if(arr[i]!=i+1){
//             cout<<"Misisng element found: "<<i+1;
//             break;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int fre(int arr[],int s){
//     for(int i=0;i<s;i++){
//         for(int j=i+1;j<s;j++){
//             if(arr[i]==arr[j]){
//               return  arr[i];
//             }
//         }
//     }
//     return -1;
   
// }
// int main(){
//     int arr[7]={1,5,3,4,3,5,6};
//     int size=7;

//     int ans=fre(arr,size);

//     cout<<"The repeating element is: "<<ans<<endl;

// }

// #include<iostream>
// using namespace std;
// int commonelement(int A[],int B[],int C[]){
//     for(int i=0;i<6;i++){
//         for(int j=0;j<5;j++){
//             for(int k=0;k<8;k++){
//                 if(A[i]==B[j] && B[j]==C[k]){
//                     return A[i];
//                 }
//             }
//         }
//     }
// }

// int main(){
//     int arr1[6]={1,5,10,20,40,80};
//     int arr2[5]={6,7,20,80,100};
//     int arr3[8]={3,4,15,20,30,70,80,120};

//     int size1=6;
//     int size2=5;
//     int size3=8;

//     cout<<"The common element is : "<<commonelement(arr1,arr2,arr3)<<endl;

// }
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> commonElement(vector<int>& A, vector<int>& B, vector<int>& C) {
//     vector<int> result;
//     for (int i = 0; i < A.size(); i++) {
//         for (int j = 0; j < B.size(); j++) {
//             for (int k = 0; k < C.size(); k++) {
//                 if (A[i] == B[j] && B[j] == C[k]) {
//                    result.push_back(A[i]);
//                 }
//             }
//         }
//     }
//     return result; // Return -1 if no common element is found
// }

// int main() {
//     vector<int> arr1 = {1, 5, 10, 20, 40, 80};
//     vector<int> arr2 = {6, 7, 20, 80, 100};
//     vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

//     vector<int> ans=commonElement(arr1, arr2, arr3) ;

//     cout << "The common element is: ";
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int num(char c){
//     if(c=='I'){
//         return 1;
//     }
//     else if(c=='V'){
//         return 5;
//     }
//     else if(c=='X'){
//         return 10;
//     }
//     else if(c=='L'){
//         return 50;
//     }
//     else if(c=='C'){
//         return 100;
//     }
//     else if(c=='D'){
//         return 500;
//     }
//     else{
//         return 1000;
//     }
// }
// int RomanToInteger(string s){
//     int sum=0;
//     int index=0;

//     while(index<s.size()-1){
//         if(num(s[index])<num(s[index+1])){
//             sum=sum-num(s[index]);
            
//         }
//         else{
//            sum=sum+num(s[index]);
//            }
//            index++;
//         }
    
//      sum=sum+num(s[s.length()-1]);
//     return sum;

// }
// int main(){
//     string s;
//     cout<<"Enter the string: ";
//     cin>>s;

//     int ans=RomanToInteger(s);
//     cout<<"Roman to integer: "<<ans<<endl;

// }

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[8] = {1, 3, 7, 9, 11, 13, 15, 19};
//     int size = 8;

//     int start = 0;
//     int end = size - 1;

//     int key = 15;
//     bool found = false; // Track if the key is found

//     while (start <= end) { // Corrected loop condition
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key) {
//             cout << "Key found at index: " << mid << endl;
//             found = true; // Mark as found
//             break;
//         } else if (arr[mid] > key) {
//             end = mid - 1; // Fixed the redundant decrement
//         } else {
//             start = mid + 1;
//         }
//     }

//     if (!found) {
//         cout << "Key not found in the array." << endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int binarysearch(int arr[],int key,int size){
//     int start=0;
//     int end=size-1;

//     bool isfound=false;

//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     int key=4;

//     int result=binarysearch(arr,key,size);

//     if(result!=-1){
//          cout<<"Key found at index: "<<result<<endl;
//     }
//     else{
//         cout<<"Key not found."<<endl;
//     }

// // }
// #include<iostream>
// #include<vector>
// using namespace std;
// int BinarySearch(vector<int> &arr , int size , int key){
//     int start=0;
//     int end=size-1;

//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//             return mid;
//         }

//         else if(arr[mid]>key){
//             end=mid-1;
//         }

//         else{
//             start=mid+1;

//         }
//     }
//     return -1;
// }
// int main(){
//     int size;
//     cout<<"Enter the size: ";
//     cin>>size;

//     vector<int> arr(size);
//     cout<<"Enter the elements: ";
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter the key : ";
//     cin>>key;

//     int result=BinarySearch(arr,size,key);

//     if(result!=-1){
//         cout<<"The key is:  "<<key<<"found at index: " <<result<<endl;
//     }
//     else{
//         cout<<"Key not found."<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int size=6;
//     int of=5;

//     for(int i=0;i<6;i++){
//         if(arr[i]==of){
//             cout<<"The first occurence is: "<<i<<endl;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int firstOccurence(int arr[],int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return i;
//             break;
//         }
//     }
//     return -1;
// }
// void userinput(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
// }
// int main(){
//     int size;
//     cout<<"Enter the size of array:  ";
//     cin>>size;

//     int arr[size];

//     cout<<"Enter the elements of array: ";
//     userinput(arr,size);

//     int key;
//     cout<<"Enter the key: ";
//     cin>>key;

//     int ans=firstOccurence(arr,size,key);

//     cout<<"The first of occurence of key: "<<key<<" is: "<<ans<<endl;

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOccurence(vector<int> &arr, int key){
//     int start=0;
//     int end=arr.size()-1;
//     int ans=-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;

       
//             if(arr[mid]==key){
//                 ans=mid;
//                 end=mid-1;
//             }
//             else if(arr[mid]>key){
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
        
//     }
//     return ans;
// }
// void userinput(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//             }
// }
// int main(){
//     int size;
//     cout<<"Enter the size: ";
//     cin>>size;

//     int key;
//     cout<<"Enter key: ";
//     cin>>key;

//     vector<int> arr(size);
//     cout<<"Enter the elements of array: ";
//     userinput(arr);

//     int ans1=firstOccurence(arr,key);
//     cout<<"The first occurence of element is: "<<ans1<<endl;

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int lastoccurence(vector<int> &arr,int key){
//     int start=0;
//     int end=arr.size()-1;
//     int ans=-1;

//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//            ans = mid;
//             start=mid+1;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }
// void userinput(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
// }

// int main(){
//     int size;
//     cout<<"Enter the size: ";
//     cin>>size;

//     int key;
//     cout<<"Enter key: ";
//     cin>>key;

//     vector<int> arr(size);
//     cout<<"Enter the element of array: ";
//     userinput(arr);

//     int ans1=lastoccurence(arr,key);

//     if(ans1 !=-1){
//         cout<<"The key found at index: "<<ans1<<endl;}
//     else{
//         cout<<"The key not found."<<endl;
//     }
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int lastoccurence(vector<int> &arr,int key){
//     int start=0;
//     int end=arr.size()-1;
//     int ans=-1;

//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//            ans = mid;
//             start=mid+1;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }
// int firstOccurence(vector<int> &arr, int key){
//     int start=0;
//     int end=arr.size()-1;
//     int ans=-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;

       
//             if(arr[mid]==key){
//                 ans=mid;
//                 end=mid-1;
//             }
//             else if(arr[mid]>key){
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
        
//     }
//     return ans;
// }
   
//    void userinput(vector<int> &arr) {
//     for (int i = 0; i < arr.size(); i++) {
//         cin >> arr[i];
//     }
// }
// int main(){

//      int size;
//     cout<<"Enter the size: ";
//     cin>>size;

//     int key;
//     cout<<"Enter key: ";
//     cin>>key;

//     vector<int> arr(size);
//     cout<<"Enter the element of array: ";
//     userinput(arr);

//     int ans1=lastoccurence(arr,key);
//     int ans2=firstOccurence(arr,key);

//     int ans3=(ans1-ans2+1);
//     cout<<"The total occurnece of key is: "<<ans3<<endl;

// }

// // Sorting
// #include<iostream>
// #include<vector>
// using namespace std;
// int binarysearch(vector<int> &arr,int key){
//     int start=0;
//     int end=arr.size()-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             end=mid-2;
//         }
//         else{
//             start=mid+2;
//         }
//         return mid;
//     }
   

// }
// int main(){
//     vector<int> arr{10,3,40,20,50,80,70};
//     int key=3;
//     int ans=binarysearch(arr, key);
//     cout<<"Key found at index of: "<<ans<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int pivot(vector<int> &arr ){
//     int start=0;
//     int end=arr.size()-1;

//     while(start<end){
//         int mid=start+(end-start)/2;
//         // code for line 1;
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }
//         //code for line 2
//         else{
//             end=mid;
//         }
//     }
//      return start;
// }
// int main(){
//     vector<int> arr{7,9,1,2,3};
//     int ans=pivot(arr);
//     cout<<"Pivot is at : "<<ans<<" , value: "<<arr[ans]<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void selectionsort(vector<int> &arr){
//     for(int i=0;i<arr.size()-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[minIndex]>arr[j]){
//                 minIndex=j;
//             }
//         }
//         swap(arr[i],arr[minIndex]);
//     }

// }
// void print(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     vector<int> arr{2,4,1,3,65,234,643,44};
//     selectionsort(arr);
//     print(arr);
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void InsertionSort(vector<int> &arr){
    
//     for(int i=1;i<arr.size()-1;i++){
//         int j=i-1;
//         arr[i]=key;

//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }
// int main(){
//     vector<int> arr{2,4,43,1,3,54,34};
//     InsertionSort(arr);
//     print(arr);
// }
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char name[100];
//     cout<<"Enter the name : ";
//     cin.getline(name,100);
//     cout<<"Name is : "<<name<<endl;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char name[10]="deepu";
//     int l=0;
//     int i=0;
//     while(name[i]!='\0'){
//         i++;
//         l++;
//     }
//     cout<< l;
//     }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char ch[100]="this is deepu";
//     int start=0;
//     int end=strlen(ch)-1;

//     while(start<=end){
//         swap(ch[start],ch[end]);
//         start++;
//         end--;
//     }

//    cout<<ch;
// }

// #include<iostream>
// #include<cstring>
// using  namespace std;
// int main(){
//     char ch[100]="This is deepu.";
//     for(int i=strlen(ch)-1;i>=0;i--){
//         cout<<ch[i];
//     }
// }
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char ch[100]="My name is deepu.";
//     int n=strlen(ch);

//     for(int i=0;i<n;i++){
//         if(ch[i]==' '){
//             ch[i]='@';
//         }
//     }
//     cout<<ch;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// bool palindrome(char ch[], int n){
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         if(ch[s]!=ch[e]){
//             return false;
//         }
//         s++;
//         e--;
//     }
//     return true;

// }
// int main(){
//     char ch[]="aba";
//     int n=strlen(ch);
//     palindrome(ch,n);
//     if(!palindrome){
//         cout<<"this is not palindorme"<<endl;
//     }
//     else{
//         cout<<"This is palindrome."<<endl;
//     }
// }
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char ch[199]="this is deppi";
//     int n=strlen(ch);
//     for(int i=0;i<n;i++){
//         if(ch[i]>='a' && ch[i]<='z'){
//             ch[i]=ch[i]-'a'+'A';
//         }
//     }
//     cout<<"upper case: "<<ch;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char ch[199]="THIS IS DEEPU";
//     int n=strlen(ch);
//     for(int i=0;i<n;i++){
//         if(ch[i]>='a' && ch[i]<='z'){
//             ch[i]=ch[i]-'A'+'a';
//         }
//     }
//     cout<<"upper case: "<<ch;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string  str="This is deepu.";
//     int n=str.length();
//     cout<<"The size of string : "<<n<<endl;
    
// }

// #include<iostream>
// using namespace std;
// bool comparestring(string a, string b){
//     if(a.length()!=b.length()){
//         return false;
//     }
//     else{
//         for(int i=0;i<a.length();i++){
//             if(a[i]!=b[i]){
//                 return false;
//             }
//         }

//     return  true;}
// }
// int main(){
//     string a;
//     cout<<"Enter the string a: ";
//     getline(cin,a);

//     string b;
//     cout<<"Enter the string b: ";
//     getline(cin,b);

//     // int ans=comparestring(a,b);

//     if(!comparestring(a,b)){
//         cout<<"String are not same.";
//     }
//     else{
//         cout<<"String are same.";
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     string m="This is deepu.";
//     string find="This";

//    size_t pos= m.find("This");

//    if(pos==string::npos){
//     cout<<"String not found.";
//    }
//    else{
//     cout<<"String found.";
//    }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     string a="This is deepu.";
//     string b="hello";
//     a.replace(0,4,b);
//   //  cout<<b;
//     cout<<a;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string a="ABBCDEFGHIJKLMNOPQRSTUVWXZ";
//     a.erase(0,7);
//     cout<<a;
// }


// #include<iostream>
// using namespace std;
// void convertToLowerCase(string &str){
//     for(int i=0;i<str.length();i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i]=str[i]-'A'+'a';
//         }
//     }
// }
// int main(){
//     string a;
//     cout<<"Enter string a: ";
//     getline(cin,a);

//     convertToLowerCase(a);
//     cout<<"The new string: "<<a;

// }
// #include<iostream>
// using namespace std;
// string removeadjacent(string str){
//     string ans="";
//     for(int i=0;i<str.length();i++){
//         if(ans.length()>0){
//             if(ans[ans.length()-1]==str[i]){
//                 ans.pop_back();
//         }
//         else{
//             ans.push_back(str[i]);
//         }
//         }
//        else{
//         ans.push_back(str[i]);
//        }
//     }
// return  ans;
// }
// int main(){
//     string a;
//     cout<<"Enter string a: ";
//     getline(cin,a);

//     string ans1=removeadjacent(a);
//     cout<<"Answer is:  "<<ans1;
// }
// #include<iostream>
// using namespace std;
// string removeoccurence(string a,string b){
//     int pos=a.find(b);
//     while(pos!=string::npos){
//         a.erase(pos,b.length());
//         pos=a.find(b);
//     }
//     return  a;
// }
// int main(){
//     string a="daabcbaabcbc";
//     string part="abc";
//     string ans=removeoccurence(a,part);
//     cout<<"Answer is: "<<ans;
// // }
// #include <iostream>
// #include <string>
// using namespace std;

// // Function to check if a substring is a palindrome
// bool checkpalindrome(string a, int i, int j) {
//     while (i < j) {
//         if (a[i] != a[j]) {
//             return false; // Mismatch found, not a palindrome
//         }
//         i++;
//         j--; // Move inward
//     }
//     return true; // Substring is a palindrome
// }

// // Function to check if the string can be a valid palindrome by removing at most one character
// bool validpalindrome(string a) {
//     int i = 0;
//     int j = a.length() - 1;

//     while (i < j) {
//         if (a[i] != a[j]) {
//             // Check by skipping one character from either side
//             return checkpalindrome(a, i + 1, j) || checkpalindrome(a, i, j - 1);
//         } else {
//             i++;
//             j--; // Move inward if characters match
//         }
//     }
//     return true; // If loop completes, the string is already a palindrome
// }

// int main() {
//     string a;
//     cout << "Enter string a: ";
//     getline(cin, a);

//     if (validpalindrome(a)) {
//         cout << "The string can be a valid palindrome by removing at most one character." << endl;
//     } else {
//         cout << "The string cannot be a palindrome even by removing one character." << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=6;
//     int *ptr=&a;
//     cout<<a<<endl;
//     cout<<ptr;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char c='a';
//     char *ptr=&c;
//     cout<<c<<endl;
//     cout<<*ptr<<endl;
//     cout<<&c<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int z=24;
//     int *ptr=&z;
//     cout<<z<<endl;
//     cout<<ptr<<endl;
//     // cout<<&z<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={5,79,4,5,6,7,8,9};
//     int *p=arr;
//     cout<<p<<endl;
//     cout<<&p<<endl;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch[10]="Babbar";
//     char *c=ch;
//     cout<<ch<<endl;
//     cout<<c<<endl;
//     cout<<ch[0]<<endl;
//     cout<<&c<<endl;
//     cout<<*c<<endl;
//     cout<<c<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch='V';
//     char *ptr1=&ch;
//     cout<<ptr1;
//     cout<<ch;
// }

// OOPS
// #include<iostream>
// using namespace std;
// class ABC{

// };
// int main(){
// cout<<sizeof(ABC);
// }

// #include<iostream>
// using namespace std;
// class Animal{
//     int age;
//     int weight;
//     char name;

// };
// int main(){
//     cout<<sizeof(Animal);

// }

// #include<iostream>
// using namespace std;
// class Animal{
//     // State or properties
//     public:
//     int age;
//     int weight;


//     public:
//     // methods
//     void eat(){
//         cout<<"I am eating."<<endl;
//     }

//     void speak(){
//         cout<<"I am barking."<<endl;
//     }
// };
// int main(){
//     Animal cat;
//     Animal dog;
//     cat.eat();
//     cat.speak();
//     dog.eat();
//     dog.speak();

// }

// #include <iostream>
// using namespace std;

// class Human {
// private:
//     int age;

// public:
//     int weight;

//     void setage(int w) {
//         weight = w;
//     }

//     void getage() {  // Void function
//         cout << weight;  // Print weight directly
//     }
// };

// int main() {
//     Human ramesh;
//     ramesh.setage(56);
//     ramesh.getage();  // Prints directly without cout in main

//     return 0;
// }
//
// #include<iostream>
// using namespace std;
// int main(){
//     int *a=new int;
//     int *arr=new int[5];
// }

// #include<iostream>
// using namespace std;
// class ABC{
//     public:
//     Animal(){
//         cout<"Constructor called."<<endl;
//     }
// }
// int main(){

// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;

//     public:
//     Animal(){
//         cout<<"Constrcutor called."<<endl;
//     }
// };
// int main(){
//     Animal rame;

// }


// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;

//     public:
//     Animal(){
//         cout<<"Default constructor is called."<<endl;
//     }
//     Animal(int age){
//         this->age=age;

//         cout<<"Parameterised constructor called."<<age<<endl;
//     }
// };
// int main(){
//     Animal a;
//     Animal B(50);
// // }
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     int age;
//     int weight;

//     // Parameterized constructor
//     Animal(int a, int w) {
//         age = a;
//         weight = w;
//         cout << "Parameterized constructor called." << endl;
//     }

//     // Copy constructor
//     Animal(const Animal& other) {
//         age = other.age;
//         weight = other.weight;
//         cout << "Copy constructor called." << endl;
//     }

//     void display() {
//         cout << "Age: " << age << ", Weight: " << weight << endl;
//     }
// };

// int main() {
//     Animal a1(5, 60);  // Calls parameterized constructor
//     a1.display();

//     Animal a2 = a1;    // Calls copy constructor
//     a2.display();

//     return 0;

// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     Animal(int a, int w){
//         this->age=a;
//         this->weight=w;
//         cout<<"Parameterised constructor is called."<<endl;
//     }

//     Animal(Animal &obj){
//         age=obj.age;
//         weight=obj.weight;
//         cout<<"Copy constructor is called."<<endl;
//     }

//     void display(){
//         cout<<"Age is: "<<age<<", Weight is: "<<weight<<endl;
//     }

// };
// int main(){
//     Animal a(50,100);
//     a.display();
//     Animal b=a;
//     b.display();
   
// }

// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     int marks;
//     int roll_no;

//     public:
//     string name;

//     public:
//     Student(int roll_no, int marks, string name){
//         cout<<"Inside the parameterised consrtructor."<<endl;
//         this->marks=marks;
//         this->roll_no=roll_no;
//         this->name=name;
        
//     }

//     Student(Student &obj){
//         cout<<"Inside the copy constructor."<<endl;
//         this->marks=obj.marks;
//         this->roll_no=obj.roll_no;
//         this->name=obj.name;
//     }

//     void setmarks(int m){
//         marks=m;
//     }

//     void getmarks(){
//           return  marks; }

//     void setrollno(int rn){
//         roll_no=rn;
//     }
    

//     public:
//     void display(){
//         cout<<"Roll no is: "<<roll_no<<", Marks is: "<<marks<<" , Name is: "<<name<<endl;
//     }
// };
// int main(){
//     Student Ram(23,45,"RAM");
//     Ram.display();

//     Student Radhika=Ram;
//     Radhika.display();

// }


// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     int marks;
//     int roll_no;

//     public:
//     string name;

//     public:
//     Student(int roll_no, int marks, string name){
//         cout<<"Inside the parameterised consrtructor."<<endl;
//         this->marks=marks;
//         this->roll_no=roll_no;
//         this->name=name;
        
//     }

//     Student(Student &obj){
//         cout<<"Inside the copy constructor."<<endl;
//         this->marks=obj.marks;
//         this->roll_no=obj.roll_no;
//         this->name=obj.name;
//     }

//     ~Student(){
//         cout<<"Destructor is called."<<endl;

//     }

   

//     void setmarks(int m){
//         marks=m;
//     }

//     void getmarks(){
//          }

//     void setrollno(int rn){
//         roll_no=rn;
//     }
    

//     public:
//     void display(){
//         cout<<"Roll no is: "<<roll_no<<", Marks is: "<<marks<<" , Name is: "<<name<<endl;
//     }
// };
// int main(){
//     Student Ram(23,45,"RAM");
//     Ram.display();

//     Student Radhika=Ram;
//     Radhika.display();

// }

// #include<iostream>
// using namespace std;
// class Human{
//     public:
//     int height;
//     int weight;
//     int age;

//     public:
//     int getage(){
//         return this->age;
//     }

//     int setage(int a){
//         this->age=a;
//     }

//      int getheight(){
//         return this->height;
//     }

//     int setheight(int h){
//         this->height=h;
//     }

//      int getweight(){
//         return this->weight;
//     }

//     int setweight(int w){
//         this->weight=w;
//     }
// };
// class Male:public Human{

//     public:
//     string color;

//     void sleep(){
//         cout<<"Male is sleeping."<<endl;
//     }

// };


// int main(){
//     Male object1;
//     cout<<object1.age<<endl;
//     cout<<object1.weight<<endl;
//     cout<<object1.height<<endl;

//     cout<<object1.sleep()<<endl;

//     cout<<object1.age(12)<<endl;
//     cout<<object1.height(170)<<endl;
//     cout<<object1.weight(70)<<endl;

// // }
// #include<iostream>
// using namespace std;
// class Human{
//     protected:
//     int age;
//     int weight;
//     int height;

//     public:
//     int getage(){
//         return this->age;
//     }

//   void setage(int a){
//         this->age=a;
//     }

//       int getweight(){
//         return this->weight;
//     }

//     void setweight(int w){
//         this->weight=w;
//     }

//       int getheight(){
//         return this->height;
//     }

//     void setheight(int h){
//         this->height=h;
//     }

    
// };
// class  Male: public Human{
//     public:
//     string color;

//         public:
//     void sleep(){
//         cout<<"Male is sleeping"<<endl;
//     }

//     void display(){
//         cout<<"Accessing Protected data members inside the derived class."<<endl;
//         cout<<"Age is: "<<age<<endl;
//         cout<<"Weight is: "<<weight<<endl;
//         cout<<"Height  is: "<<height<<endl;
// }
// };
// int main(){
//     Male Ram;
//     Ram.setage(12);
//     Ram.setweight(60);
//     Ram.setheight(170);
//     cout<<"Accessing the attributes in Main class"<<endl;
//     cout<<"Age is: "<<Ram.getage()<<endl;
//      cout<<"Weight is: "<<Ram.getweight()<<endl;
//       cout<<"Height is: "<<Ram.getheight()<<endl;
//       Ram.sleep();
//       Ram.display();
// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;

//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog: public Animal{

// };
// int main(){
//     Dog d;
//     d.speak();
//     cout<<d.age<<endl;

// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;

//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog: public Animal{

// };
// class GermanSepherd:public Dog{
// };
// int main(){
//     GermanSepherd gs;
//     gs.speak();
//     cout<<gs.age<<endl;

// }

// #include<iostream>
// using  namespace  std;
// class  Animal{
//     public:
//     int age;
//     int weight;
//     int height;

//     public:

//     void bark(){
//         cout<<"Barking"<<endl;
//     }

// };
// class Human{
//     public:
//     string color;

//     void speak(){
//         cout<<"Speaking"<<endl;
//     }

// };


// class ABC:public Animal , public Human{

// };
// int main(){
//     ABC a1;
//     a1.speak();
//     a1.bark();

// }

// #include<iostream>
// using namespace std;
// class  A{
//     public:
//     void func1(){
//         cout<<"Inside function 1."<<endl;
//     }

// };
// class B:public A{
//     public:
//     void func2(){
//         cout<<"Inside function 2."<<endl;
//     }
// };
// class C:public A{
//     public:
//     void func3(){
//         cout<<"Inside function 3."<<endl;
//     }
// };
// int main(){
//     A obj1;
//     obj1.func1();

//     B obj2;
//     obj2.func1();
//     obj2.func2();

//     C obj3;
//     obj3.func1();
//     obj3.func3();

// }

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void func(){
//         cout<<"I am inside A"<<endl;
//     }
// };
// class B{
//     public:
//     void func(){
//         cout<<"I am inside B"<<endl;
//     }
// };

// class C:public A, public B{

// };

// int main(){
//     C obj1;
//     obj1.A::func();
//     obj1.B::func();

// }

// #include<iostream>
// using namespace std;
// class ABC{
//     public:
//     int age;

//     public:
//     void A(string A){
//         cout<<"Theuibdf"<<endl;
//     }

//     int  A(){
//         cout<<"hiwhie"<<endl;
//     }
// };

// int main(){
//  ABC obj;
//     obj.A();
// }

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog:public Animal{
//    public:
//     void speak(){
//         cout<<"Barking"<<endl;
//     }
// };
// int main(){
//     Dog d;
//     d.speak();

// }
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     // Fiel ko open krnma
//     ofstream  fout;
//     fout.open("zoom.txt");
//     // Write krna
//     fout<<"Hello India"<<endl;
//     fout<<"BYE BYE";

//     fout.close();
// }

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    // file ko open kro 
    fin.open("zoom.txt");
    // file ko read kro
    char c;
    // fin>>c;
    c=fin.get();
    while(!fin.eof()){
        cout<<c;
        // fin>>c;
        c=fin.get();
    };
    fin.close();
}