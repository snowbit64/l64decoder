// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStringInternal
// Entry Point: 00a5d27c
// Size: 100 bytes
// Signature: undefined __thiscall setStringInternal(UserAttribute * this, char * param_1)


/* UserAttribute::setStringInternal(char const*) */

void __thiscall UserAttribute::setStringInternal(UserAttribute *this,char *param_1)

{
  size_t sVar1;
  void *__dest;
  ulong __n;
  
  if ((*(int *)(this + 8) - 3U < 2) && (*(void **)this != (void *)0x0)) {
    operator_delete__(*(void **)this);
  }
  sVar1 = strlen(param_1);
  __n = (ulong)((int)sVar1 + 1);
  __dest = operator_new__(__n);
  *(void **)this = __dest;
  memcpy(__dest,param_1,__n);
  return;
}


