// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDirtyRegionFromParents
// Entry Point: 009da0d0
// Size: 156 bytes
// Signature: undefined __thiscall getDirtyRegionFromParents(ProceduralPlacementMask * this, DirtyRegion * param_1)


/* ProceduralPlacementMask::getDirtyRegionFromParents(ProceduralPlacementMask::DirtyRegion*) */

void __thiscall
ProceduralPlacementMask::getDirtyRegionFromParents
          (ProceduralPlacementMask *this,DirtyRegion *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(this + 0x88);
  if (*(long *)(this + 0x90) != lVar6) {
    uVar7 = 0;
    do {
      plVar5 = *(long **)(lVar6 + uVar7 * 8);
      (**(code **)(*plVar5 + 0x88))(plVar5,param_1);
      lVar6 = *(long *)(this + 0x88);
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(*(long *)(this + 0x90) - lVar6 >> 3));
  }
  iVar1 = *(int *)(this + 0xa0);
  if (*(int *)param_1 <= *(int *)(this + 0xa0)) {
    iVar1 = *(int *)param_1;
  }
  iVar2 = *(int *)(this + 0xa8);
  if (*(int *)(param_1 + 8) <= *(int *)(this + 0xa8)) {
    iVar2 = *(int *)(param_1 + 8);
  }
  iVar3 = *(int *)(this + 0xa4);
  if (*(int *)(this + 0xa4) <= *(int *)(param_1 + 4)) {
    iVar3 = *(int *)(param_1 + 4);
  }
  iVar4 = *(int *)(this + 0xac);
  if (*(int *)(this + 0xac) <= *(int *)(param_1 + 0xc)) {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  *(int *)param_1 = iVar1;
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = iVar4;
  return;
}


