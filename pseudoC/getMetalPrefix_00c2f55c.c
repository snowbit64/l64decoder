// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMetalPrefix
// Entry Point: 00c2f55c
// Size: 28 bytes
// Signature: undefined __cdecl getMetalPrefix(GLOBAL_TYPE param_1)


/* IR_HllConvertUtil::getMetalPrefix(IR_HllConvertUtil::GLOBAL_TYPE) */

char * IR_HllConvertUtil::getMetalPrefix(GLOBAL_TYPE param_1)

{
  char *pcVar1;
  
  pcVar1 = "SysVar_";
  if (param_1 != 5) {
    pcVar1 = "";
  }
  return pcVar1;
}


