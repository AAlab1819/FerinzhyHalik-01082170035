# 731B-Coupons and Discounts

  The first line of input contains a single integer n — the number of training sessions.
  The second line contains n integers — the number of teams that will be present on each of the days.
  
  If it is possible to use the coupons and discount for all n consecutive days for each team that is present, print "YES". Otherwise,       print "NO".
  
  worst case scenario: O(n)

# 978B-File Name

  The first line contains integer — the length of the file name.
  The second line contains a string of length n consisting of lowercase Latin letters only — the file name.
  
  solution is to search if there's consecutive 'xxx' letters
  ```if filename[i]+filename[i+1]+filename[i+2] == 'xxx':```
  then to print the numbers needed to be deleted to ended up with only 2 consecutive 'xx' letters
  
  worst case scenario : O(n)

# 946A-Partition

  The first line contains one integer n  — the number of elements in a.
  The second line contains n integers — the elements of sequence a
  
  First just loop for the number of elements.
  If the elements is negative put it to c, but if its positive put it to b.
  Make each element absolute. 
  and output b-c.
  
  Worst Case: O(n)
