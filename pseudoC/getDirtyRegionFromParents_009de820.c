// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDirtyRegionFromParents
// Entry Point: 009de820
// Size: 180 bytes
// Signature: undefined __thiscall getDirtyRegionFromParents(ProceduralPlacementRaycastObjectsMask * this, DirtyRegion * param_1)


/* ProceduralPlacementRaycastObjectsMask::getDirtyRegionFromParents(ProceduralPlacementMask::DirtyRegion*)
    */

void __thiscall
ProceduralPlacementRaycastObjectsMask::getDirtyRegionFromParents
          (ProceduralPlacementRaycastObjectsMask *this,DirtyRegion *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)(this + 0x88);
  if (*(long *)(this + 0x90) != lVar8) {
    uVar9 = 0;
    do {
      plVar7 = *(long **)(lVar8 + uVar9 * 8);
      (**(code **)(*plVar7 + 0x88))(plVar7,param_1);
      lVar8 = *(long *)(this + 0x88);
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(*(long *)(this + 0x90) - lVar8 >> 3));
  }
  if (this[0x11c] == (ProceduralPlacementRaycastObjectsMask)0x0) {
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
  }
  else {
    uVar5 = *(undefined4 *)(this + 0x50);
    uVar6 = *(undefined4 *)(this + 0x54);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
  }
  return;
}


