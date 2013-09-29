BufferSize = 4;
  
  Producer()
  {
    int widget;
    message m;                        // message buffer
   
    while (TRUE) {
      make_item(widget);              // create a new item
      receive(consumer, &m);          // wait for an empty message to arrive
      build_message(&m, widget);      // make a message to send to the consumer
      send(consumer, &m);             // send widget to consumer
     }
  }

  Consumer()
  {
    int widget;
    message m;
    
    for(0 to N) send(producer, &m);    // send N empty messages
   
    while (TRUE) {
      receive(producer, &m);           // get message containing a widget
      extract_item(&m, widget);        // take item out of message
      send(producer, &m);              // reply with an empty message
      consume_item(widget);            // consumer the item
      }
  }
