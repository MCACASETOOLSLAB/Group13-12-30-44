/*PRODUCER CONSUMER PROBLEM:
One process produces information and puts it in the buffer, while the other process consumes information from the buffer. 

PROBLEM STATEMENT:
What happens if the producer tries to put an item into a full buffer? 
What happens if the consumer tries to take an item from an empty buffer? 

PROPOSED SOLUTION:
block the producer when the buffer is full, and block the consumer when the buffer is empty. 

STEPS:
PRODUCER:
1. Make item
2. If buffer is full, go to sleep
3. Put item in buffer
4. If buffer was empty, wake consumer

CONSUMER:
1. If buffer is empty, go to sleep
2. Take widget from buffer
3. If buffer was full, wake producer
4. Consume widget */

