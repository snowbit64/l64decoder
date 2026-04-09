// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00885e00
// Entry Point: 00885e00
// Size: 108 bytes
// Signature: undefined FUN_00885e00(void)


bool FUN_00885e00(byte *param_1,char *param_2)

{
  size_t sVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  
  sVar4 = strlen(param_2);
  sVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (sVar4 == sVar1) {
                    /* try { // try from 00885e3c to 00885e4f has its CatchHandler @ 00885e6c */
    iVar3 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)param_1,0,(char *)0xffffffffffffffff,(ulong)param_2);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


