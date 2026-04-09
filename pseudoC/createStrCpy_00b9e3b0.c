// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStrCpy
// Entry Point: 00b9e3b0
// Size: 84 bytes
// Signature: undefined __cdecl createStrCpy(char * param_1)


/* StringUtil::createStrCpy(char const*) */

void * StringUtil::createStrCpy(char *param_1)

{
  size_t sVar1;
  void *__dest;
  ulong __n;
  
  if (param_1 == (char *)0x0) {
    __dest = (void *)0x0;
  }
  else {
    sVar1 = strlen(param_1);
    __n = (ulong)((int)sVar1 + 1);
    __dest = operator_new__(__n);
    memcpy(__dest,param_1,__n);
  }
  return __dest;
}


