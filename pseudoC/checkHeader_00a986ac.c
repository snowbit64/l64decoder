// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkHeader
// Entry Point: 00a986ac
// Size: 224 bytes
// Signature: undefined __cdecl checkHeader(uchar * param_1, uint param_2)


/* JPEGUtil::checkHeader(unsigned char const*, unsigned int) */

bool JPEGUtil::checkHeader(uchar *param_1,uint param_2)

{
  long lVar1;
  uchar uVar2;
  
  if (0x19 < param_2) {
    lVar1 = 0;
    do {
      if (((param_1[lVar1] == 0xff) && (param_1[lVar1 + 1] == 0xd8)) && (param_1[lVar1 + 2] == 0xff)
         ) {
        if (param_1[lVar1 + 3] == 0xe1) {
          if (param_1[lVar1 + 6] != 'E') {
            return false;
          }
          if (param_1[lVar1 + 7] != 'x') {
            return false;
          }
          if (param_1[lVar1 + 8] != 'i') {
            return false;
          }
          uVar2 = 'f';
LAB_00a98778:
          return param_1[lVar1 + 9] == uVar2;
        }
        if (param_1[lVar1 + 3] == 0xe0) {
          if (param_1[lVar1 + 6] != 'J') {
            return false;
          }
          if (param_1[lVar1 + 7] != 'F') {
            return false;
          }
          if (param_1[lVar1 + 8] != 'I') {
            return false;
          }
          uVar2 = 'F';
          goto LAB_00a98778;
        }
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x10);
  }
  return false;
}


