BufferSize = 3;
  count = 0;

  Producer()
  {
    int widget;
    WHILE (true) {                   // loop forever
      make_new(widget);              // create a new widget to put in the buffer
      IF(count==BufferSize)
           Sleep();                  // if the buffer is full, sleep
      put_item(widget);              // put the item in the buffer
      count = count + 1;             // increment count of items
      IF (count==1)
         Wakeup(Consumer);           // if the buffer was previously empty, wake
   }                                 //  the consumer
  }

  Consumer()
  {
    int widget;
    WHILE(true) {                    // loop forever
      IF(count==0)
           Sleep();                  // if the buffer is empty, sleep
      remove_item(widget);           // take an item from the buffer
      count = count + 1;             // decrement count of items
      IF(count==N-1)
            Wakeup(Producer);        // if buffer was previously full, wake
                                     //  the producer
      Consume_item(widget);          // consume the item
     }
   }
