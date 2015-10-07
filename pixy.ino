/*
 * No longer working. 
 * 
 */
// 
//void getLargestBlock(Pixy pixy, uint16_t blocks, int[] largestBlock, int jj, char[] buf) {
//  if (printSerial) {
//    Serial.println();
//    sprintf(buf, "Detected %d:\n", blocks);
//    Serial.print(buf);
//  }
//  int x = -1, y = -1, w = -1, h = -1;
//  for (jj = 0; jj < blocks; jj++)
//  {
//    x = int(pixy.blocks[jj].x);
//    y = int(pixy.blocks[jj].y);
//    w = int(pixy.blocks[jj].width);
//    h = int(pixy.blocks[jj].height);
//
//    if (w * h >= largestBlock[2]*largestBlock[3]) {
//      largestBlock[0] = x;
//      largestBlock[1] = y;
//      largestBlock[2] = w;
//      largestBlock[3] = h;
//    }
//    if (printSerial) {
//      sprintf(buf, "  block %d: ", jj); // From pixy example
//      Serial.print(buf);
//      pixy.blocks[jj].print(); // Only print if connected to computer
//    }
//  }
//  // We now have a filtered largest block.
//}

