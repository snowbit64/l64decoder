// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readMesh
// Entry Point: 008f9b34
// Size: 380 bytes
// Signature: undefined __cdecl readMesh(File * param_1, IndexedTriangleSet * * param_2)


/* TerrainPatchOccluderManager::readMesh(File&, IndexedTriangleSet*&) */

undefined4 TerrainPatchOccluderManager::readMesh(File *param_1,IndexedTriangleSet **param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *this;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint local_50;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_4c,4);
  if (iVar2 == 4) {
    this = (long *)operator_new(0x90);
                    /* try { // try from 008f9b88 to 008f9b8b has its CatchHandler @ 008f9cb0 */
    IndexedTriangleSet::IndexedTriangleSet((IndexedTriangleSet *)this);
    TriangleSet::setNumVertices((TriangleSet *)this,local_4c,0);
    iVar2 = local_4c * 0xc;
    uVar4 = TriangleSet::getPositions();
    iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar4,iVar2);
    if ((iVar3 == iVar2) &&
       (iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_50,4), iVar2 == 4)) {
      IndexedTriangleSet::setNumIndices((IndexedTriangleSet *)this,local_50);
      iVar2 = local_50 * 2;
      uVar4 = IndexedTriangleSet::getIndices16();
      iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar4,iVar2);
      if (iVar3 == iVar2) {
        uVar6 = 1;
        IndexedTriangleSet::setNumSubsets((IndexedTriangleSet *)this,1);
        puVar5 = (undefined4 *)operator_new(0x20);
        *(undefined8 *)(puVar5 + 4) = 0;
        *(undefined8 *)(puVar5 + 6) = 0;
        *puVar5 = 0;
        puVar5[1] = local_4c;
        puVar5[2] = 0;
        puVar5[3] = local_50;
        IndexedTriangleSet::setSubset((IndexedTriangleSet *)this,(IndexedTriangleSubset *)puVar5,0);
        *param_2 = (IndexedTriangleSet *)this;
        goto LAB_008f9c80;
      }
    }
    (**(code **)(*this + 8))(this);
  }
  uVar6 = 0;
LAB_008f9c80:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


