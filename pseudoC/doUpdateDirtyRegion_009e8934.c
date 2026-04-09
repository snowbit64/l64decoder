// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009e8934
// Size: 404 bytes
// Signature: undefined __thiscall doUpdateDirtyRegion(ProceduralPlacementScaleMask * this, DirtyRegion * param_1)


/* ProceduralPlacementScaleMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion const&) */

void __thiscall
ProceduralPlacementScaleMask::doUpdateDirtyRegion
          (ProceduralPlacementScaleMask *this,DirtyRegion *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar8;
  ulong uVar7;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x50));
  uVar3 = (**(code **)(**(long **)(this + 200) + 0x40))();
  fVar13 = fVar13 / (float)(uVar3 & 0xffffffff);
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x54));
  uVar3 = (**(code **)(**(long **)(this + 200) + 0x48))();
  fVar14 = fVar14 / (float)(uVar3 & 0xffffffff);
  plVar5 = **(long ***)(this + 0x88);
  uVar10 = NEON_scvtf(*(undefined8 *)param_1,4);
  uVar12 = NEON_scvtf(*(undefined8 *)(param_1 + 8),4);
  uVar9 = (uint)((float)uVar10 * fVar13);
  uVar11 = (uint)((float)((ulong)uVar10 >> 0x20) * fVar13);
  uVar6 = (uint)((float)uVar12 * fVar14);
  uVar8 = (uint)((float)((ulong)uVar12 >> 0x20) * fVar14);
  uVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
  uVar15 = *(undefined4 *)(this + 0x50);
  uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
  uVar7 = NEON_cmhi(CONCAT44(uVar11,uVar8),CONCAT44(uVar9,uVar6),4);
  if ((uVar7 & 1) != 0) {
    fVar14 = (float)NEON_ucvtf(uVar15);
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x54));
    do {
      if ((uVar7 & 0x100000000) != 0) {
        uVar1 = uVar9;
        do {
          uVar15 = (**(code **)(*plVar5 + 0x68))
                             (plVar5,(int)(((float)(uVar3 & 0xffffffff) / fVar14) *
                                          (float)(ulong)uVar1),
                              (int)(((float)(uVar4 & 0xffffffff) / fVar13) * (float)(ulong)uVar6));
          uVar2 = uVar1 + uVar6 * *(int *)(this + 0x50);
          uVar1 = uVar1 + 1;
          *(undefined4 *)(*(long *)(this + 0xd0) + (ulong)uVar2 * 4) = uVar15;
        } while (uVar11 != uVar1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar8);
  }
  return;
}


