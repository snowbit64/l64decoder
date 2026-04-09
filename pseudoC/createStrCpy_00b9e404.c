// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStrCpy
// Entry Point: 00b9e404
// Size: 76 bytes
// Signature: undefined __cdecl createStrCpy(char * param_1, uint param_2)


/* StringUtil::createStrCpy(char const*, unsigned int) */

void * StringUtil::createStrCpy(char *param_1,uint param_2)

{
  void *__dest;
  
  __dest = operator_new__((ulong)(param_2 + 1));
  memcpy(__dest,param_1,(ulong)param_2);
  *(undefined *)((long)__dest + (ulong)param_2) = 0;
  return __dest;
}


