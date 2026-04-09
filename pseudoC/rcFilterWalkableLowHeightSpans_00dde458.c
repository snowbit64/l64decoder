// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFilterWalkableLowHeightSpans
// Entry Point: 00dde458
// Size: 284 bytes
// Signature: undefined __cdecl rcFilterWalkableLowHeightSpans(rcContext * param_1, int param_2, rcHeightfield * param_3)


/* rcFilterWalkableLowHeightSpans(rcContext*, int, rcHeightfield&) */

void rcFilterWalkableLowHeightSpans(rcContext *param_1,int param_2,rcHeightfield *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,8);
  }
  uVar1 = *(uint *)(param_3 + 4);
  if ((0 < (int)uVar1) && (uVar2 = *(uint *)param_3, 0 < (int)uVar2)) {
    uVar6 = 0;
    do {
      uVar7 = 0;
      do {
        puVar8 = *(uint **)(*(long *)(param_3 + 0x28) + (uVar7 + uVar6 * uVar2) * 8);
        while (puVar5 = puVar8, puVar5 != (uint *)0x0) {
          puVar8 = *(uint **)(puVar5 + 2);
          if (puVar8 == (uint *)0x0) {
            uVar3 = *puVar5;
            iVar4 = 0xffff - (uVar3 >> 0xd & 0x1fff);
          }
          else {
            uVar3 = *puVar5;
            iVar4 = (*puVar8 & 0x1fff) - (uVar3 >> 0xd & 0x1fff);
          }
          if (iVar4 <= param_2) {
            *puVar5 = uVar3 & 0x3ffffff;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar2);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  if (param_1[9] == (rcContext)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dde560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x30))(param_1,8);
  return;
}


