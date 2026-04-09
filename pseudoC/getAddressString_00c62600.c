// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAddressString
// Entry Point: 00c62600
// Size: 72 bytes
// Signature: undefined __cdecl getAddressString(uint param_1, char * param_2, uint param_3)


/* Network::getAddressString(unsigned int, char*, unsigned int) */

char * Network::getAddressString(uint param_1,char *param_2,uint param_3)

{
  char *__src;
  
  if (param_3 < 0x10) {
    __src = (char *)0x0;
  }
  else {
    __src = inet_ntoa((in_addr)param_1);
    if (__src != (char *)0x0) {
      strcpy(param_2,__src);
      __src = (char *)0x1;
    }
  }
  return __src;
}


