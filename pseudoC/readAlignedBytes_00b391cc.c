// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readAlignedBytes
// Entry Point: 00b391cc
// Size: 144 bytes
// Signature: undefined __thiscall readAlignedBytes(GsBitStream * this, uchar * param_1, uint param_2)


/* GsBitStream::readAlignedBytes(unsigned char*, unsigned int) */

bool __thiscall GsBitStream::readAlignedBytes(GsBitStream *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x14);
  if (uVar4 != 0) {
    uVar4 = (-uVar4 & 7) + uVar4;
    *(uint *)(this + 0x14) = uVar4;
  }
  uVar1 = param_2 * 8;
  bVar2 = uVar1 <= *(int *)(this + 0x18) - uVar4;
  bVar3 = (uVar4 & 7) == 0;
  if (bVar2 && bVar3) {
    memcpy(param_1,(void *)(*(long *)(this + 8) + (ulong)(uVar4 >> 3)),(ulong)param_2);
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar1;
  }
  return bVar2 && bVar3;
}


