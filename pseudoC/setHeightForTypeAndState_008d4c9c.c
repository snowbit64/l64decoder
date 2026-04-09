// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setHeightForTypeAndState
// Entry Point: 008d4c9c
// Size: 248 bytes
// Signature: undefined __thiscall setHeightForTypeAndState(FoliageBendingSystem * this, DensityMap * param_1, uchar param_2, uint param_3, uint param_4, uchar param_5, float param_6)


/* FoliageBendingSystem::setHeightForTypeAndState(DensityMap*, unsigned char, unsigned int, unsigned
   int, unsigned char, float) */

void __thiscall
FoliageBendingSystem::setHeightForTypeAndState
          (FoliageBendingSystem *this,DensityMap *param_1,uchar param_2,uint param_3,uint param_4,
          uchar param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long **pplVar5;
  long lVar6;
  long **pplVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = 0;
  uVar4 = (*(long *)(this + 0x4d0) - *(long *)(this + 0x4c8) >> 3) * -0x3333333333333333;
  pplVar7 = (long **)0x0;
  do {
    pplVar5 = (long **)(*(long *)(this + 0x4c8) + uVar3 * 0x28);
    uVar3 = (ulong)((int)uVar3 + 1);
    if (*pplVar5 != (long *)param_1) {
      pplVar5 = pplVar7;
    }
    pplVar7 = pplVar5;
  } while (uVar3 <= uVar4 && uVar4 - uVar3 != 0);
  iVar2 = (**(code **)(**pplVar5 + 0x60))();
  uVar1 = *(uint *)((long)pplVar5 + 0x1c);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      if ((((uint)param_5 << (ulong)(param_3 - iVar2 & 0x1f) ^ (uint)uVar3) &
          param_4 << (ulong)(param_3 - iVar2 & 0x1f)) == 0) {
        lVar6 = (ulong)(uVar1 * param_2 + (uint)uVar3) * 4;
        fVar8 = *(float *)((long)pplVar5[4] + lVar6);
        fVar9 = param_6;
        if (param_6 < fVar8) {
          fVar9 = fVar8;
        }
        *(float *)((long)pplVar5[4] + lVar6) = fVar9;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


