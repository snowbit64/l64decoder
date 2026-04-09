// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToBorderRemove
// Entry Point: 00863950
// Size: 332 bytes
// Signature: undefined __cdecl addToBorderRemove(deque * param_1, ushort param_2, short param_3, ushort * param_4, int param_5, int param_6, int param_7, int param_8, short * param_9, short * param_10, short * param_11, short * param_12)


/* DensityMapHeightUpdater::addToBorderRemove(std::__ndk1::deque<std::__ndk1::pair<short, short>,
   std::__ndk1::allocator<std::__ndk1::pair<short, short> > >&, unsigned short, short, unsigned
   short*, int, int, int, int, short&, short&, short&, short&) */

void DensityMapHeightUpdater::addToBorderRemove
               (deque *param_1,ushort param_2,short param_3,ushort *param_4,int param_5,int param_6,
               int param_7,int param_8,short *param_9,short *param_10,short *param_11,
               short *param_12)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((((0 < param_7) && (0 < param_8)) && (param_7 < param_5 + -1)) &&
     (((param_8 < param_6 + -1 && ((param_2 & 0x4800) == 0)) &&
      (((int)param_3 <= (int)(param_2 & 0x3ff) || ((param_2 >> 0xd & 1) != 0)))))) {
    lVar3 = *(long *)(param_1 + 8);
    uVar4 = 0;
    if (*(long *)(param_1 + 0x10) - lVar3 != 0) {
      uVar4 = (*(long *)(param_1 + 0x10) - lVar3) * 0x80 - 1;
    }
    uVar5 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    if (uVar4 == uVar5) {
      std::__ndk1::
      deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>::
      __add_back_capacity();
      lVar3 = *(long *)(param_1 + 8);
      uVar5 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    }
    *(uint *)(*(long *)(lVar3 + (uVar5 >> 7 & 0x1fffffffffffff8)) + (uVar5 & 0x3ff) * 4) =
         param_7 & 0xffffU | param_8 << 0x10;
    sVar1 = *param_9;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    if (param_7 < sVar1) {
      *param_9 = (short)param_7;
    }
    if (*param_10 < param_7) {
      *param_10 = (short)param_7;
    }
    if (param_8 < *param_11) {
      *param_11 = (short)param_8;
    }
    if (*param_12 < param_8) {
      *param_12 = (short)param_8;
    }
    uVar2 = param_7 + param_8 * param_5;
    uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    *(ushort *)((long)param_4 + uVar4) = *(ushort *)((long)param_4 + uVar4) | 0x800;
  }
  return;
}


