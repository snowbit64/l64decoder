// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDirtyRegionFromParents
// Entry Point: 009e9308
// Size: 416 bytes
// Signature: undefined __thiscall getDirtyRegionFromParents(ProceduralPlacementSignedDistanceMask * this, DirtyRegion * param_1)


/* ProceduralPlacementSignedDistanceMask::getDirtyRegionFromParents(ProceduralPlacementMask::DirtyRegion*)
    */

void __thiscall
ProceduralPlacementSignedDistanceMask::getDirtyRegionFromParents
          (ProceduralPlacementSignedDistanceMask *this,DirtyRegion *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  lVar7 = *(long *)(this + 0x88);
  if (*(long *)(this + 0x90) != lVar7) {
    uVar8 = 0;
    do {
      plVar6 = *(long **)(lVar7 + uVar8 * 8);
      (**(code **)(*plVar6 + 0x88))(plVar6,param_1);
      lVar7 = *(long *)(this + 0x88);
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(this + 0x90) - lVar7 >> 3));
  }
  iVar2 = *(int *)param_1;
  if (*(int *)(this + 200) < 1) {
    iVar3 = *(int *)(this + 0xa0);
    if (iVar2 <= *(int *)(this + 0xa0)) {
      iVar3 = iVar2;
    }
    iVar2 = *(int *)(this + 0xa8);
    if (*(int *)(param_1 + 8) <= *(int *)(this + 0xa8)) {
      iVar2 = *(int *)(param_1 + 8);
    }
    iVar4 = *(int *)(this + 0xa4);
    if (*(int *)(this + 0xa4) <= *(int *)(param_1 + 4)) {
      iVar4 = *(int *)(param_1 + 4);
    }
    iVar5 = *(int *)(this + 0xac);
    if (*(int *)(this + 0xac) <= *(int *)(param_1 + 0xc)) {
      iVar5 = *(int *)(param_1 + 0xc);
    }
    *(int *)param_1 = iVar3;
    *(int *)(param_1 + 4) = iVar4;
    *(int *)(param_1 + 8) = iVar2;
    *(int *)(param_1 + 0xc) = iVar5;
  }
  else {
    iVar2 = iVar2 - *(int *)(this + 200);
    fVar10 = (float)iVar2;
    uVar8 = (**(code **)(*(long *)this + 0x40))(this);
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(this + 200);
    fVar9 = (float)(uVar8 & 0xffffffff);
    if (fVar10 <= (float)(uVar8 & 0xffffffff)) {
      fVar9 = fVar10;
    }
    lVar7 = *(long *)this;
    fVar10 = (float)(iVar4 + iVar3);
    iVar5 = 0;
    if (-1 < iVar2) {
      iVar5 = (int)fVar9;
    }
    *(int *)param_1 = iVar5;
    uVar8 = (**(code **)(lVar7 + 0x40))(this);
    iVar2 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(this + 200);
    fVar9 = (float)(uVar8 & 0xffffffff);
    if (fVar10 <= (float)(uVar8 & 0xffffffff)) {
      fVar9 = fVar10;
    }
    lVar7 = *(long *)this;
    fVar10 = (float)(iVar2 - iVar5);
    iVar1 = 0;
    if (-1 < iVar4 + iVar3) {
      iVar1 = (int)fVar9;
    }
    *(int *)(param_1 + 4) = iVar1;
    uVar8 = (**(code **)(lVar7 + 0x48))(this);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(this + 200);
    fVar9 = (float)(uVar8 & 0xffffffff);
    if (fVar10 <= (float)(uVar8 & 0xffffffff)) {
      fVar9 = fVar10;
    }
    lVar7 = *(long *)this;
    fVar10 = (float)(iVar4 + iVar3);
    iVar1 = 0;
    if (-1 < iVar2 - iVar5) {
      iVar1 = (int)fVar9;
    }
    *(int *)(param_1 + 8) = iVar1;
    uVar8 = (**(code **)(lVar7 + 0x48))(this);
    fVar9 = (float)(uVar8 & 0xffffffff);
    if (fVar10 <= (float)(uVar8 & 0xffffffff)) {
      fVar9 = fVar10;
    }
    iVar2 = 0;
    if (-1 < iVar4 + iVar3) {
      iVar2 = (int)fVar9;
    }
    *(int *)(param_1 + 0xc) = iVar2;
  }
  return;
}


