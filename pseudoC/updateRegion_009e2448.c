// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRegion
// Entry Point: 009e2448
// Size: 228 bytes
// Signature: undefined __thiscall updateRegion(ProceduralPlacementRemapMask * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* ProceduralPlacementRemapMask::updateRegion(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
ProceduralPlacementRemapMask::updateRegion
          (ProceduralPlacementRemapMask *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  if (param_3 < param_4) {
    plVar3 = **(long ***)(this + 0x88);
    do {
      uVar4 = param_1;
      if (param_1 < param_2) {
        do {
          fVar6 = (float)(**(code **)(*plVar3 + 0x68))(plVar3,uVar4,param_3);
          fVar6 = (float)remap(this,fVar6 / 255.0);
          lVar5 = *(long *)(this + 0x58);
          iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
          uVar1 = uVar4 + param_3 * iVar2;
          uVar4 = uVar4 + 1;
          *(float *)(lVar5 + (ulong)uVar1 * 4) = (float)(ulong)(uint)(int)(fVar6 * 255.0);
        } while (param_2 != uVar4);
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  return;
}


