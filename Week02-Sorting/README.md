1. **291A-Spyke Talks**
   
   Polycarpus wants to find out the number of pairs of secretaries that are talking via spyke. The conferences in spyke aren't permitted,    which means, the secretaries can call only to one person.
   so: if the secertaries only work with one user print 0.
       if he make a mistake print -1
   
   
   This is sorted using Comb Sort
   
   **Input:**
   The first line that contain *n* amount of secretaries
   The second line contain the list of people (user ID) that having a call at that given time
   
   **Output:** 
   the number of pairs of chatting secretaries 

2. **768A-Oath of the Night's Watch**
   
   Jon Snow is given a task to support the stewards.
   He will not support the weakest and the strongest (Only the middle, where there's someone stronger and there's someone weaker than the    stewards)
   
   Sorted using Radix Sort

   **Input:** 
   The first line contain the amount of stewards that he asigned to support (*n*)
   The second line contain the strengths of each stewards.
   **Output:** 
   The stewards that Snow will be able to support.(*n-unsupport*)
  
3. **230A-Dragons**
   
   Kirito is trying to win a MMORPG game, he need to beat *n* amount of dragon in order to win
   everytime he kills a dragon, he will get a bonus damage so he can progress forward
   
   in this equation, kirito will start from a weaker dragon(s) and progress toward harder and harder dragons
   Sorted using Shell Sort
   
   **Input:**
   The first line contain *s* which is Kirito's strength, and *n* which is the amount of dragon(s) that kirito need to beat
   and the next line exists depends on how much dragon(s) (*n*) that contains the dragon(s) strength, and the bonus strength that he        gets after killing the dragon
   
   **Output:** 
   If he beat a dragon and can move forward, print YES
   If he can't beat the dragon, print NO
