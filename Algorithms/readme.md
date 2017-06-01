Method1: DP

Method2: DEQUE
            We create a Dequeue, Qi of capacity k, that stores only useful elements of current window of k elements.
            An element is useful if it is in current window and is greater than all other elements on left side of it in current window. 
            We process all array elements one by one and maintain Qi to contain useful elements of current window and these useful elements are maintained in sorted order. 
            The element at front of the Qi is the largest and element at rear of Qi is the smallest of current window. 
    
 Ques-link
      https://www.codechef.com/MAY17/problems/CHEFSUBA
