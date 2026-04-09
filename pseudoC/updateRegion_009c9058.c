// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRegion
// Entry Point: 009c9058
// Size: 208 bytes
// Signature: undefined __thiscall updateRegion(ProceduralPlacementClampedMask * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* ProceduralPlacementClampedMask::updateRegion(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
ProceduralPlacementClampedMask::updateRegion
          (ProceduralPlacementClampedMask *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 < param_4) {
    plVar3 = **(long ***)(this + 0x88);
    do {
      uVar4 = param_1;
      if (param_1 < param_2) {
        do {
          fVar6 = (float)(**(code **)(*plVar3 + 0x68))(plVar3,uVar4,param_3);
          lVar5 = *(long *)(this + 0x58);
          fVar7 = *(float *)(this + 0xcc);
          if (fVar6 <= *(float *)(this + 0xcc)) {
            fVar7 = fVar6;
          }
          fVar8 = *(float *)(this + 200);
          if (*(float *)(this + 200) <= fVar6) {
            fVar8 = fVar7;
          }
          iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
          uVar1 = uVar4 + param_3 * iVar2;
          uVar4 = uVar4 + 1;
          *(float *)(lVar5 + (ulong)uVar1 * 4) = fVar8;
        } while (param_2 != uVar4);
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  return;
}


