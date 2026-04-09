// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readBits
// Entry Point: 00b3908c
// Size: 320 bytes
// Signature: undefined __thiscall readBits(GsBitStream * this, uchar * param_1, uint param_2, bool param_3)


/* GsBitStream::readBits(unsigned char*, unsigned int, bool) */

undefined8 __thiscall
GsBitStream::readBits(GsBitStream *this,uchar *param_1,uint param_2,bool param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar6;
  uint uVar5;
  
  uVar3 = *(uint *)(this + 0x14);
  if (((param_2 | uVar3) & 7) == 0) {
    if (uVar3 != 0) {
      uVar3 = (-uVar3 & 7) + uVar3;
      *(uint *)(this + 0x14) = uVar3;
    }
    uVar2 = 0;
    if (((uVar3 & 7) == 0) && ((param_2 & 0xfffffff8) <= *(int *)(this + 0x18) - uVar3)) {
      memcpy(param_1,(void *)(*(long *)(this + 8) + (ulong)(uVar3 >> 3)),(ulong)(param_2 >> 3));
      uVar2 = 1;
      *(uint *)(this + 0x14) = *(int *)(this + 0x14) + (param_2 & 0xfffffff8);
    }
  }
  else if (*(int *)(this + 0x18) - uVar3 < param_2) {
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      uVar1 = uVar3 & 7;
      while( true ) {
        uVar5 = (uint)*(byte *)(*(long *)(this + 8) + (ulong)(uVar3 >> 3)) << (ulong)uVar1;
        if ((uVar1 != 0) && (8 - uVar1 < param_2)) {
          uVar5 = *(byte *)(*(long *)(this + 8) + (ulong)(uVar3 >> 3) + 1) >>
                  (ulong)(8 - uVar1 & 0x1f) | uVar5;
        }
        bVar4 = (byte)uVar5;
        if (param_2 < 8) {
          uVar6 = param_2;
          if (param_3) {
            bVar4 = (byte)((uVar5 & 0xff) >> (ulong)(8 - param_2 & 0x1f));
          }
          else {
            bVar4 = bVar4 & (byte)(-0x100 >> (param_2 & 0x1f));
          }
        }
        else {
          uVar6 = 8;
        }
        param_2 = param_2 - uVar6;
        *(uint *)(this + 0x14) = uVar6 + uVar3;
        *param_1 = bVar4;
        if (param_2 == 0) break;
        uVar3 = *(uint *)(this + 0x14);
        param_1 = param_1 + 1;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


