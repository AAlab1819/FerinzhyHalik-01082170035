# 433B-Kuriyama Mirai's Stones

  Input :
    First line is the integer n.
    Second line, input the array.
    Third line is the amount of questions.
    The next line is the type, l (left), r(right).

  Output :
    The sum from array b[] if type is equal to 1
    And sum from array c[] if the type other than 1
  
  The Example :

    1 2 3 4 5 will turn into
    1 (1+2) (1+2+3) (1+2+3+4) (1+2+3+4+5)
    which is 1 3 6 10 15
  
  
 Complexity:
 O(n log n) for the sorting cumulative.
 
 
 # 913C-Party Lemonade
 
  Input :
    The first line contains the number of types of bottles in the store and the required amount of lemonade in liters
    The second line contains n integers - the costs of bottles of different types.
    
  Output : 
    Output a single integer — the smallest number of roubles you have to pay in order to buy at least L liters of lemonade.
    
  Complexity: O(n)
