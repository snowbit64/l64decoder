// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSkipBits
// Entry Point: 00b38ffc
// Size: 144 bytes
// Signature: undefined __thiscall writeSkipBits(GsBitStream * this, uint param_1)


/* GsBitStream::writeSkipBits(unsigned int) */

void __thiscall GsBitStream::writeSkipBits(GsBitStream *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  if ((param_1 != 0) && (*(uint *)(this + 0x10) < *(int *)(this + 0x18) + param_1)) {
    uVar1 = (*(int *)(this + 0x18) + param_1 + 7 >> 3) + 0x200;
    pvVar3 = realloc(*(void **)(this + 8),(ulong)uVar1);
    *(void **)(this + 8) = pvVar3;
    uVar2 = *(int *)(this + 0x10) + 7U >> 3;
    memset((void *)((long)pvVar3 + (ulong)uVar2),0,(ulong)(uVar1 - uVar2));
    *(uint *)(this + 0x10) = uVar1 * 8;
  }
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + param_1;
  return;
}


