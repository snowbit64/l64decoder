// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c28174
// Entry Point: 00c28174
// Size: 140 bytes
// Signature: undefined FUN_00c28174(void)


bool FUN_00c28174(byte *param_1,char *param_2)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  size_t __n;
  byte *__s1;
  
  __n = strlen(param_2);
  bVar2 = *param_1;
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (__n != sVar1) {
    return false;
  }
  if (__n != 0) {
    if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00c281f4 to 00c281fb has its CatchHandler @ 00c281fc */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00c281f4 with catch @ 00c281fc
                        */
      FUN_006cadc8();
    }
    __s1 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    iVar3 = memcmp(__s1,param_2,__n);
    if (iVar3 != 0) goto LAB_00c281d8;
  }
  iVar3 = 0;
LAB_00c281d8:
  return iVar3 == 0;
}


