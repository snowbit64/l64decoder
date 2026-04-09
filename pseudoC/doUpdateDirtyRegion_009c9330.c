// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009c9330
// Size: 200 bytes
// Signature: undefined __thiscall doUpdateDirtyRegion(ProceduralPlacementClampedMask * this, DirtyRegion * param_1)


/* ProceduralPlacementClampedMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion const&)
    */

void __thiscall
ProceduralPlacementClampedMask::doUpdateDirtyRegion
          (ProceduralPlacementClampedMask *this,DirtyRegion *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar7 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar7 < uVar3) {
    uVar2 = *(uint *)param_1;
    uVar4 = *(uint *)(param_1 + 4);
    plVar8 = **(long ***)(this + 0x88);
    do {
      uVar1 = uVar2;
      if (uVar2 < uVar4) {
        do {
          fVar10 = (float)(**(code **)(*plVar8 + 0x68))(plVar8,uVar1,uVar7);
          lVar9 = *(long *)(this + 0x58);
          fVar11 = *(float *)(this + 0xcc);
          if (fVar10 <= *(float *)(this + 0xcc)) {
            fVar11 = fVar10;
          }
          fVar12 = *(float *)(this + 200);
          if (*(float *)(this + 200) <= fVar10) {
            fVar12 = fVar11;
          }
          iVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
          uVar5 = uVar1 + uVar7 * iVar6;
          uVar1 = uVar1 + 1;
          *(float *)(lVar9 + (ulong)uVar5 * 4) = fVar12;
        } while (uVar4 != uVar1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  return;
}


