
in this SuperSale problem, we need to find the maximum price that a certain group could buy

we can find the max object values a person can acquired
double looping to check the corresponding maximum amount that a person can carry
and if weight is more than the maximum that a person could carry and the maximum that a person can carry is less than another item’s weight, change the value of it
(weight<= max carry && max carry < value of other item)

Then after the loops we get the max value for each weight that we can carry. Add all max value. Print the max value
Worst Case Complexity : O(n^2)

