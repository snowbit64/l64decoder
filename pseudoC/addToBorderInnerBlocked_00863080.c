// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToBorderInnerBlocked
// Entry Point: 00863080
// Size: 320 bytes
// Signature: undefined __cdecl addToBorderInnerBlocked(deque * param_1, ushort * param_2, int param_3, int param_4, int param_5, int param_6, short * param_7, short * param_8, short * param_9, short * param_10)


/* DensityMapHeightUpdater::addToBorderInnerBlocked(std::__ndk1::deque<std::__ndk1::pair<short,
   short>, std::__ndk1::allocator<std::__ndk1::pair<short, short> > >&, unsigned short*, int, int,
   int, int, short&, short&, short&, short&) */

void DensityMapHeightUpdater::addToBorderInnerBlocked
               (deque *param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6,
               short *param_7,short *param_8,short *param_9,short *param_10)

{
  ulong uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if ((((0 < param_5) && (0 < param_6)) && (param_5 < param_3 + -1)) && (param_6 < param_4 + -1)) {
    iVar4 = param_5 + param_6 * param_3;
    uVar2 = param_2[iVar4];
    if ((uVar2 & 0x4800) == 0) {
      lVar5 = *(long *)(param_1 + 8);
      uVar6 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
      uVar1 = 0;
      if (*(long *)(param_1 + 0x10) - lVar5 != 0) {
        uVar1 = (*(long *)(param_1 + 0x10) - lVar5) * 0x80 - 1;
      }
      if (uVar1 == uVar6) {
        std::__ndk1::
        deque<std::__ndk1::pair<short,short>,std::__ndk1::allocator<std::__ndk1::pair<short,short>>>
        ::__add_back_capacity();
        lVar5 = *(long *)(param_1 + 8);
        uVar6 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
      }
      *(uint *)(*(long *)(lVar5 + (uVar6 >> 7 & 0x1fffffffffffff8)) + (uVar6 & 0x3ff) * 4) =
           param_5 & 0xffffU | param_6 << 0x10;
      lVar5 = *(long *)(param_1 + 0x28);
      param_2[iVar4] = uVar2 | 0x800;
      sVar3 = *param_7;
      *(long *)(param_1 + 0x28) = lVar5 + 1;
      if (param_5 < sVar3) {
        *param_7 = (short)param_5;
      }
      if (*param_8 < param_5) {
        *param_8 = (short)param_5;
      }
      if (param_6 < *param_9) {
        *param_9 = (short)param_6;
      }
      if (*param_10 < param_6) {
        *param_10 = (short)param_6;
      }
    }
  }
  return;
}


