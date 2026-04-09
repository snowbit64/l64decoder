// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushString
// Entry Point: 00b9b33c
// Size: 52 bytes
// Signature: undefined __thiscall pushString(StringStream * this, char * param_1)


/* StringStream::pushString(char const*) */

void __thiscall StringStream::pushString(StringStream *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  pushString(this,param_1,(uint)sVar1);
  return;
}


