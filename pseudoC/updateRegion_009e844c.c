// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRegion
// Entry Point: 009e844c
// Size: 264 bytes
// Signature: undefined __thiscall updateRegion(ProceduralPlacementScaleMask * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* ProceduralPlacementScaleMask::updateRegion(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
ProceduralPlacementScaleMask::updateRegion
          (ProceduralPlacementScaleMask *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar4 = (ulong)param_3;
  plVar5 = **(long ***)(this + 0x88);
  uVar2 = (**(code **)(*plVar5 + 0x40))(plVar5);
  uVar9 = *(undefined4 *)(this + 0x50);
  uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  if (param_3 < param_4) {
    fVar8 = (float)NEON_ucvtf(uVar9);
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x54));
    do {
      if (param_1 < param_2) {
        uVar6 = param_1;
        do {
          uVar9 = (**(code **)(*plVar5 + 0x68))
                            (plVar5,(int)(((float)(uVar2 & 0xffffffff) / fVar8) *
                                         (float)(ulong)uVar6),
                             (int)(((float)(uVar3 & 0xffffffff) / fVar7) * (float)uVar4));
          uVar1 = uVar6 + (int)uVar4 * *(int *)(this + 0x50);
          uVar6 = uVar6 + 1;
          *(undefined4 *)(*(long *)(this + 0xd0) + (ulong)uVar1 * 4) = uVar9;
        } while (param_2 != uVar6);
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar6;
    } while (uVar6 != param_4);
  }
  return;
}


