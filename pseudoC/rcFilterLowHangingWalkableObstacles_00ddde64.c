// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFilterLowHangingWalkableObstacles
// Entry Point: 00ddde64
// Size: 300 bytes
// Signature: undefined __cdecl rcFilterLowHangingWalkableObstacles(rcContext * param_1, int param_2, rcHeightfield * param_3)


/* rcFilterLowHangingWalkableObstacles(rcContext*, int, rcHeightfield&) */

void rcFilterLowHangingWalkableObstacles(rcContext *param_1,int param_2,rcHeightfield *param_3)

{
  uint **ppuVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,10);
  }
  uVar3 = *(uint *)(param_3 + 4);
  if ((0 < (int)uVar3) && (uVar4 = *(uint *)param_3, 0 < (int)uVar4)) {
    uVar8 = 0;
    do {
      uVar9 = 0;
      do {
        puVar13 = *(uint **)(*(long *)(param_3 + 0x28) + (uVar9 + uVar8 * uVar4) * 8);
        if (puVar13 != (uint *)0x0) {
          uVar12 = 0;
          puVar10 = (uint *)0x0;
          bVar7 = false;
          do {
            uVar11 = *puVar13;
            uVar5 = uVar11 >> 0x1a;
            if ((uVar5 == 0) && (bVar7)) {
              iVar6 = (uVar11 >> 0xd) - (*puVar10 >> 0xd & 0x1fff);
              iVar2 = -iVar6;
              if (-1 < iVar6) {
                iVar2 = iVar6;
              }
              if (iVar2 <= param_2) {
                uVar11 = uVar11 | uVar12;
                *puVar13 = uVar11;
              }
            }
            ppuVar1 = (uint **)(puVar13 + 2);
            uVar12 = uVar11 & 0xfc000000;
            puVar10 = puVar13;
            puVar13 = *ppuVar1;
            bVar7 = uVar5 != 0;
          } while (*ppuVar1 != (uint *)0x0);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar4);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3);
  }
  if (param_1[9] != (rcContext)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dddf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(param_1,10);
    return;
  }
  return;
}


