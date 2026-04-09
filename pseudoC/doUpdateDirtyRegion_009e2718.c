// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009e2718
// Size: 220 bytes
// Signature: undefined __thiscall doUpdateDirtyRegion(ProceduralPlacementRemapMask * this, DirtyRegion * param_1)


/* ProceduralPlacementRemapMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion const&) */

void __thiscall
ProceduralPlacementRemapMask::doUpdateDirtyRegion
          (ProceduralPlacementRemapMask *this,DirtyRegion *param_1)

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
          fVar10 = (float)remap(this,fVar10 / 255.0);
          lVar9 = *(long *)(this + 0x58);
          iVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
          uVar5 = uVar1 + uVar7 * iVar6;
          uVar1 = uVar1 + 1;
          *(float *)(lVar9 + (ulong)uVar5 * 4) = (float)(ulong)(uint)(int)(fVar10 * 255.0);
        } while (uVar4 != uVar1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  return;
}


