// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeAlignedBytes
// Entry Point: 00b38e98
// Size: 208 bytes
// Signature: undefined __thiscall writeAlignedBytes(GsBitStream * this, uchar * param_1, uint param_2)


/* GsBitStream::writeAlignedBytes(unsigned char const*, unsigned int) */

void __thiscall GsBitStream::writeAlignedBytes(GsBitStream *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 != 0) {
    uVar4 = (-uVar4 & 7) + uVar4;
    *(uint *)(this + 0x18) = uVar4;
  }
  iVar2 = param_2 * 8;
  if ((iVar2 != 0) && (*(uint *)(this + 0x10) < uVar4 + iVar2)) {
    uVar1 = (uVar4 + iVar2 + 7 >> 3) + 0x200;
    pvVar3 = realloc(*(void **)(this + 8),(ulong)uVar1);
    *(void **)(this + 8) = pvVar3;
    uVar4 = *(int *)(this + 0x10) + 7U >> 3;
    memset((void *)((long)pvVar3 + (ulong)uVar4),0,(ulong)(uVar1 - uVar4));
    uVar4 = *(uint *)(this + 0x18);
    *(uint *)(this + 0x10) = uVar1 * 8;
  }
  memcpy((void *)(*(long *)(this + 8) + (ulong)(uVar4 >> 3)),param_1,(ulong)param_2);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + iVar2;
  return;
}


