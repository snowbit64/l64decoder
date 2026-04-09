// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsBitStream
// Entry Point: 00b38b78
// Size: 88 bytes
// Signature: undefined __thiscall GsBitStream(GsBitStream * this, uint param_1)


/* GsBitStream::GsBitStream(unsigned int) */

void __thiscall GsBitStream::GsBitStream(GsBitStream *this,uint param_1)

{
  void *__s;
  
  *this = (GsBitStream)0x1;
  __s = operator_new((ulong)param_1);
  *(void **)(this + 8) = __s;
  memset(__s,0,(ulong)param_1);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(uint *)(this + 0x10) = param_1 << 3;
  return;
}


