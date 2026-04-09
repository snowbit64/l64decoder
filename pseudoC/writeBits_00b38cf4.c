// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeBits
// Entry Point: 00b38cf4
// Size: 420 bytes
// Signature: undefined __thiscall writeBits(GsBitStream * this, uchar * param_1, uint param_2, bool param_3)


/* GsBitStream::writeBits(unsigned char const*, unsigned int, bool) */

void __thiscall GsBitStream::writeBits(GsBitStream *this,uchar *param_1,uint param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  byte *pbVar8;
  
  uVar7 = *(uint *)(this + 0x18);
  if (((uVar7 | param_2) & 7) == 0) {
    writeAlignedBytes(this,param_1,param_2 >> 3);
    return;
  }
  if (param_2 != 0) {
    if (*(uint *)(this + 0x10) < uVar7 + param_2) {
      uVar1 = (uVar7 + param_2 + 7 >> 3) + 0x200;
      pvVar6 = realloc(*(void **)(this + 8),(ulong)uVar1);
      *(void **)(this + 8) = pvVar6;
      uVar7 = *(int *)(this + 0x10) + 7U >> 3;
      memset((void *)((long)pvVar6 + (ulong)uVar7),0,(ulong)(uVar1 - uVar7));
      uVar7 = *(uint *)(this + 0x18);
      *(uint *)(this + 0x10) = uVar1 * 8;
    }
    uVar1 = uVar7 & 7;
    uVar5 = 8 - uVar1;
    pbVar8 = param_1;
    if (7 < param_2) {
      do {
        param_1 = pbVar8 + 1;
        bVar4 = *pbVar8;
        *(byte *)(*(long *)(this + 8) + (ulong)(uVar7 >> 3)) =
             *(byte *)(*(long *)(this + 8) + (ulong)(uVar7 >> 3)) | bVar4 >> (ulong)uVar1;
        if (uVar1 != 0) {
          lVar2 = *(long *)(this + 8) + (ulong)(*(uint *)(this + 0x18) >> 3);
          *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | bVar4 << (ulong)(uVar5 & 0x1f);
        }
        param_2 = param_2 - 8;
        uVar7 = *(int *)(this + 0x18) + 8;
        *(uint *)(this + 0x18) = uVar7;
        pbVar8 = param_1;
      } while (7 < param_2);
      if (param_2 == 0) {
        return;
      }
    }
    uVar3 = (uint)*param_1 << (ulong)(8 - param_2 & 0x1f);
    if (!param_3) {
      uVar3 = (uint)*param_1;
    }
    *(byte *)(*(long *)(this + 8) + (ulong)(uVar7 >> 3)) =
         (byte)((uVar3 & 0xff) >> (ulong)uVar1) |
         *(byte *)(*(long *)(this + 8) + (ulong)(uVar7 >> 3));
    if ((uVar1 != 0) && (uVar5 < param_2)) {
      lVar2 = *(long *)(this + 8) + (ulong)(*(uint *)(this + 0x18) >> 3);
      *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | (byte)((uVar3 & 0xff) << (ulong)(uVar5 & 0x1f));
    }
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
  }
  return;
}


