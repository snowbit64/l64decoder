// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBuffer
// Entry Point: 00b38c3c
// Size: 136 bytes
// Signature: undefined __thiscall setBuffer(GsBitStream * this, uchar * param_1, uint param_2, bool param_3)


/* GsBitStream::setBuffer(unsigned char*, unsigned int, bool) */

void __thiscall GsBitStream::setBuffer(GsBitStream *this,uchar *param_1,uint param_2,bool param_3)

{
  void *pvVar1;
  GsBitStream GVar2;
  void *__dest;
  
  GVar2 = *this;
  *this = (GsBitStream)param_3;
  pvVar1 = (void *)0x0;
  if (GVar2 != (GsBitStream)0x0) {
    pvVar1 = *(void **)(this + 8);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x18) = param_2 << 3;
  *(uint *)(this + 0x10) = param_2 << 3;
  if (param_3) {
    __dest = operator_new((ulong)(param_2 & 0x1fffffff));
    *(void **)(this + 8) = __dest;
    memcpy(__dest,param_1,(ulong)param_2);
  }
  else {
    *(uchar **)(this + 8) = param_1;
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


