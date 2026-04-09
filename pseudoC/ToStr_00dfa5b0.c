// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStr
// Entry Point: 00dfa5b0
// Size: 52 bytes
// Signature: undefined __cdecl ToStr(bool param_1, char * param_2, int param_3)


/* tinyxml2::XMLUtil::ToStr(bool, char*, int) */

void tinyxml2::XMLUtil::ToStr(bool param_1,char *param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &writeBoolTrue;
  if (!param_1) {
    ppuVar1 = &writeBoolFalse;
  }
  FUN_00dfa4ec(param_2,0xffffffffffffffff,(long)param_3,&DAT_004d33bb,*ppuVar1);
  return;
}


