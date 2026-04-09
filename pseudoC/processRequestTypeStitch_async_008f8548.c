// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processRequestTypeStitch_async
// Entry Point: 008f8548
// Size: 256 bytes
// Signature: undefined __thiscall processRequestTypeStitch_async(TerrainPatchOccluderManager * this, RequestDesc * param_1, Result * param_2)


/* TerrainPatchOccluderManager::processRequestTypeStitch_async(TerrainPatchOccluderManager::RequestDesc
   const&, TerrainPatchOccluderManager::Result&) */

void __thiscall
TerrainPatchOccluderManager::processRequestTypeStitch_async
          (TerrainPatchOccluderManager *this,RequestDesc *param_1,Result *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Decimator *this_00;
  IndexedTriangleSet *pIVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  
  lVar4 = Watch::getCurrentTicks();
  if (5 < *(int *)(param_1 + 8) - 1U) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  switch(*(int *)(param_1 + 8)) {
  case 1:
    pIVar5 = (IndexedTriangleSet *)
             Decimator::stitchTop(*(Decimator **)(this + 0xe8),iVar1,iVar2,iVar3,iVar3);
    goto LAB_008f85f4;
  case 2:
    pIVar5 = (IndexedTriangleSet *)
             Decimator::stitchTop(*(Decimator **)(this + 0xe8),iVar1,iVar2,iVar3,iVar3 + 1);
    goto LAB_008f85f4;
  case 3:
    pIVar5 = (IndexedTriangleSet *)
             Decimator::stitchTop(*(Decimator **)(this + 0xe8),iVar1,iVar2,iVar3,iVar3 + -1);
    goto LAB_008f85f4;
  case 4:
    this_00 = *(Decimator **)(this + 0xe8);
    iVar7 = iVar3;
    break;
  case 5:
    this_00 = *(Decimator **)(this + 0xe8);
    iVar7 = iVar3 + 1;
    break;
  case 6:
    this_00 = *(Decimator **)(this + 0xe8);
    iVar7 = iVar3 + -1;
  }
  pIVar5 = (IndexedTriangleSet *)Decimator::stitchRight(this_00,iVar1,iVar2,iVar3,iVar7);
LAB_008f85f4:
  if (pIVar5 != (IndexedTriangleSet *)0x0) {
    convertMesh_async(*(uint *)(this + 0xf0),*(float *)(this + 0xf4),pIVar5);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar9 = *(undefined8 *)param_1;
    *(IndexedTriangleSet **)(param_2 + 0x20) = pIVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar8;
    *(undefined8 *)(param_2 + 8) = uVar11;
    *(undefined8 *)param_2 = uVar9;
    lVar6 = Watch::getCurrentTicks();
    dVar10 = (double)Watch::convertTicksToMs(lVar6 - lVar4);
    *(float *)(param_2 + 0x38) = (float)dVar10;
  }
  return;
}


