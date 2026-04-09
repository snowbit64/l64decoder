// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsBitStream
// Entry Point: 00b38bd0
// Size: 108 bytes
// Signature: undefined __thiscall GsBitStream(GsBitStream * this, uchar * param_1, uint param_2, bool param_3)


/* GsBitStream::GsBitStream(unsigned char*, unsigned int, bool) */

void __thiscall GsBitStream::GsBitStream(GsBitStream *this,uchar *param_1,uint param_2,bool param_3)

{
  void *__dest;
  
  *(undefined8 *)(this + 8) = 0;
  *this = (GsBitStream)param_3;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x18) = param_2 << 3;
  *(uint *)(this + 0x10) = param_2 << 3;
  if (param_3) {
    __dest = operator_new((ulong)(param_2 & 0x1fffffff));
    *(void **)(this + 8) = __dest;
    memcpy(__dest,param_1,(ulong)param_2);
    return;
  }
  *(uchar **)(this + 8) = param_1;
  return;
}


