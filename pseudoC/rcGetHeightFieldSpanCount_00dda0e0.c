// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcGetHeightFieldSpanCount
// Entry Point: 00dda0e0
// Size: 120 bytes
// Signature: undefined __cdecl rcGetHeightFieldSpanCount(rcContext * param_1, rcHeightfield * param_2)


/* rcGetHeightFieldSpanCount(rcContext*, rcHeightfield&) */

int rcGetHeightFieldSpanCount(rcContext *param_1,rcHeightfield *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  
  uVar1 = *(uint *)param_2;
  uVar2 = *(uint *)(param_2 + 4);
  bVar4 = true;
  if (0 < (int)uVar2) {
    bVar4 = (int)(uVar1 - 1) < 0;
  }
  if (bVar4 == (0 < (int)uVar2 && SBORROW4(uVar1,1))) {
    uVar6 = 0;
    iVar5 = 0;
    do {
      uVar7 = 0;
      do {
        puVar8 = *(uint **)(*(long *)(param_2 + 0x28) + (uVar7 + uVar6 * uVar1) * 8);
        while (puVar8 != (uint *)0x0) {
          uVar3 = *puVar8;
          puVar8 = *(uint **)(puVar8 + 2);
          if (uVar3 >> 0x1a != 0) {
            iVar5 = iVar5 + 1;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
    return iVar5;
  }
  return 0;
}


