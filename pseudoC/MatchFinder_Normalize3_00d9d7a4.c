// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_Normalize3
// Entry Point: 00d9d7a4
// Size: 112 bytes
// Signature: undefined MatchFinder_Normalize3(void)


void MatchFinder_Normalize3(uint param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined (*pauVar5) [16];
  uint *puVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  if (param_3 != 0) {
    uVar2 = (ulong)param_3;
    if (param_3 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar2 & 0xfffffff8;
      pauVar5 = (undefined (*) [16])(param_2 + 0x10);
      uVar7 = uVar4;
      do {
        uVar7 = uVar7 - 8;
        auVar8._4_4_ = param_1;
        auVar8._0_4_ = param_1;
        auVar8._8_4_ = param_1;
        auVar8._12_4_ = param_1;
        auVar8 = NEON_uqsub(pauVar5[-1],auVar8,4);
        auVar9._4_4_ = param_1;
        auVar9._0_4_ = param_1;
        auVar9._8_4_ = param_1;
        auVar9._12_4_ = param_1;
        auVar9 = NEON_uqsub(*pauVar5,auVar9,4);
        *(long *)(pauVar5[-1] + 8) = auVar8._8_8_;
        *(long *)pauVar5[-1] = auVar8._0_8_;
        *(long *)(*pauVar5 + 8) = auVar9._8_8_;
        *(long *)*pauVar5 = auVar9._0_8_;
        pauVar5 = pauVar5 + 2;
      } while (uVar7 != 0);
      if (uVar4 == uVar2) {
        return;
      }
    }
    lVar3 = uVar2 - uVar4;
    puVar6 = (uint *)(param_2 + uVar4 * 4);
    do {
      uVar1 = 0;
      if (param_1 <= *puVar6) {
        uVar1 = *puVar6 - param_1;
      }
      lVar3 = lVar3 + -1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (lVar3 != 0);
  }
  return;
}


