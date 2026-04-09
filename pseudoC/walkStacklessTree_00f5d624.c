// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: walkStacklessTree
// Entry Point: 00f5d624
// Size: 352 bytes
// Signature: undefined __thiscall walkStacklessTree(btQuantizedBvh * this, btNodeOverlapCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* btQuantizedBvh::walkStacklessTree(btNodeOverlapCallback*, btVector3 const&, btVector3 const&)
   const */

void __thiscall
btQuantizedBvh::walkStacklessTree
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3
          )

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  
  iVar5 = *(int *)(this + 0x3c);
  if (iVar5 < 1) {
    iVar9 = 0;
  }
  else {
    iVar7 = 0;
    pfVar8 = *(float **)(this + 0x78);
    iVar2 = 1;
    do {
      iVar9 = iVar2;
      if ((pfVar8[4] < *(float *)param_2) || (*(float *)param_3 < *pfVar8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((pfVar8[6] < *(float *)(param_2 + 8)) || (*(float *)(param_3 + 8) < pfVar8[2])) {
        bVar1 = false;
      }
      if (pfVar8[5] < *(float *)(param_2 + 4)) {
LAB_00f5d70c:
        fVar6 = pfVar8[8];
        bVar1 = false;
        bVar3 = fVar6 == -NAN;
LAB_00f5d71c:
        if ((bVar1) || (bVar3)) goto LAB_00f5d684;
        iVar7 = (int)fVar6 + iVar7;
        pfVar8 = pfVar8 + (long)(int)fVar6 * 0x10;
      }
      else {
        if (*(float *)(param_3 + 4) < pfVar8[1]) goto LAB_00f5d70c;
        fVar6 = pfVar8[8];
        bVar3 = fVar6 == -NAN;
        if (!(bool)(bVar1 & bVar3)) goto LAB_00f5d71c;
        uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,pfVar8[9],pfVar8[10]);
        if ((uVar4 & 1) == 0) break;
        iVar5 = *(int *)(this + 0x3c);
LAB_00f5d684:
        pfVar8 = pfVar8 + 0x10;
        iVar7 = iVar7 + 1;
      }
      iVar2 = iVar9 + 1;
    } while (iVar7 < iVar5);
  }
  if (maxIterations < iVar9) {
    maxIterations = iVar9;
  }
  return;
}


