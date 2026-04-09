// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setScriptCallbackFunction
// Entry Point: 00a5d1d4
// Size: 112 bytes
// Signature: undefined __thiscall setScriptCallbackFunction(UserAttribute * this, char * param_1)


/* UserAttribute::setScriptCallbackFunction(char const*) */

void __thiscall UserAttribute::setScriptCallbackFunction(UserAttribute *this,char *param_1)

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
  *(undefined4 *)(this + 8) = 4;
  return;
}


