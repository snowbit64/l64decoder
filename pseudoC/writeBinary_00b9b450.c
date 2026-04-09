// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeBinary
// Entry Point: 00b9b450
// Size: 4 bytes
// Signature: undefined __thiscall writeBinary(StringStream * this, void * param_1, uint param_2)


/* StringStream::writeBinary(void const*, unsigned int) */

void __thiscall StringStream::writeBinary(StringStream *this,void *param_1,uint param_2)

{
  pushString(this,(char *)param_1,param_2);
  return;
}


