char* toHex(int num) {

    static char hex[9];
    sprintf(hex,"%x",num&(0xFFFFFFFF));
    
  //  printf("%s",hex);
    return hex;
}
