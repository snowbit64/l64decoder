// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bc5cc
// Entry Point: 007bc5cc
// Size: 312 bytes
// Signature: undefined FUN_007bc5cc(void)


void FUN_007bc5cc(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  DensityMapModifier aDStack_58 [16];
  ChunkedBitSquare *local_48;
  long *local_40;
  int local_34;
  int local_30;
  int local_2c;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  DensityMapModifier::DensityMapModifier(aDStack_58,*(DensityMap **)(param_1 + 0x20));
  uVar1 = *param_2;
  if ((int)uVar1 < 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_2[4];
    uVar4 = 0;
    if (((-1 < (int)uVar2) && ((int)uVar1 < local_34)) && ((int)uVar2 < local_30)) {
      if (local_48 == (ChunkedBitSquare *)0x0) {
        uVar1 = param_2[8] + local_2c * (uVar1 + local_34 * uVar2);
        lVar7 = *local_40;
        uVar6 = (ulong)(uVar1 >> 3) & 0xffff;
        lVar5 = *(long *)(lVar7 + (ulong)(uVar1 >> 0x13) * 8);
        if ((uint)uVar6 < 0xfffd) {
          uVar4 = *(uint *)(lVar5 + uVar6);
        }
        else {
          uVar4 = (uVar1 >> 3) + 1;
          uVar2 = (uVar1 >> 3) + 2;
          uVar4 = (uint)CONCAT12(*(undefined *)
                                  (*(long *)(lVar7 + (ulong)(uVar2 >> 0x10) * 8) +
                                  ((ulong)uVar2 & 0xffff)),
                                 CONCAT11(*(undefined *)
                                           (*(long *)(lVar7 + (ulong)(uVar4 >> 0x10) * 8) +
                                           ((ulong)uVar4 & 0xffff)),*(undefined *)(lVar5 + uVar6)));
        }
        uVar4 = uVar4 >> (ulong)(uVar1 & 7) & (-1 << (ulong)(param_2[0xc] & 0x1f) ^ 0xffffffffU) &
                0xffff;
      }
      else {
                    /* try { // try from 007bc634 to 007bc637 has its CatchHandler @ 007bc704 */
        uVar4 = ChunkedBitSquare::readBits(local_48,uVar1,uVar2,param_2[8],param_2[0xc]);
      }
    }
  }
  param_2[0x40] = uVar4;
  param_2[0x42] = 1;
  DensityMapModifier::~DensityMapModifier(aDStack_58);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


