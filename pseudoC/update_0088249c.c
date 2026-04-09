// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0088249c
// Size: 364 bytes
// Signature: undefined __cdecl update(float param_1)


/* StateMachine::update(float) */

float StateMachine::update(float param_1)

{
  int iVar1;
  long **in_x0;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  ulong uVar8;
  float extraout_s0;
  float fVar9;
  float extraout_s0_00;
  float extraout_s0_01;
  
  plVar2 = in_x0[1];
  if (plVar2 == (long *)0x0) {
    if ((*in_x0 != (long *)0x0) &&
       (iVar1 = (**(code **)(**in_x0 + 0x20))(), param_1 = extraout_s0_00, iVar1 == 1)) {
      pplVar5 = in_x0 + 4;
      pplVar6 = (long **)*pplVar5;
      if (pplVar6 != (long **)0x0) {
        plVar2 = *in_x0;
        pplVar7 = pplVar5;
        do {
          if (pplVar6[4] >= plVar2) {
            pplVar7 = pplVar6;
          }
          pplVar6 = (long **)pplVar6[pplVar6[4] < plVar2];
        } while (pplVar6 != (long **)0x0);
        if (((pplVar7 != pplVar5) && (pplVar7[4] <= plVar2)) &&
           (plVar2 = pplVar7[5], pplVar7[6] != plVar2)) {
          uVar8 = 0;
          do {
            if ((long *)plVar2[uVar8 * 2] == (long *)0x0) {
              (**(code **)(**in_x0 + 0x18))();
              plVar2 = (long *)pplVar7[5][uVar8 * 2 + 1];
              goto LAB_008824d8;
            }
            uVar3 = (**(code **)(*(long *)plVar2[uVar8 * 2] + 0x18))();
            if ((uVar3 & 1) != 0) {
              (**(code **)(**in_x0 + 0x18))();
              lVar4 = *(long *)pplVar7[5][uVar8 * 2];
              in_x0[1] = (long *)pplVar7[5][uVar8 * 2];
              fVar9 = (float)(**(code **)(lVar4 + 0x10))();
              in_x0[2] = (long *)pplVar7[5][uVar8 * 2 + 1];
              return fVar9;
            }
            plVar2 = pplVar7[5];
            uVar8 = (ulong)((int)uVar8 + 1);
            param_1 = extraout_s0_01;
          } while (uVar8 < (ulong)((long)pplVar7[6] - (long)plVar2 >> 4));
        }
      }
    }
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x20))();
    param_1 = extraout_s0;
    if (iVar1 == 1) {
      plVar2 = in_x0[2];
LAB_008824d8:
      in_x0[1] = (long *)0x0;
      in_x0[2] = (long *)0x0;
      lVar4 = *plVar2;
      *in_x0 = plVar2;
                    /* WARNING: Could not recover jumptable at 0x008824f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar9 = (float)(**(code **)(lVar4 + 0x10))();
      return fVar9;
    }
  }
  return param_1;
}


