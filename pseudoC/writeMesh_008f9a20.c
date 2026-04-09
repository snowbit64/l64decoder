// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeMesh
// Entry Point: 008f9a20
// Size: 276 bytes
// Signature: undefined __cdecl writeMesh(File * param_1, IndexedTriangleSet * param_2)


/* TerrainPatchOccluderManager::writeMesh(File&, IndexedTriangleSet const&) */

void TerrainPatchOccluderManager::writeMesh(File *param_1,IndexedTriangleSet *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_40;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = TriangleSet::getNumVertices();
  local_3c = iVar3;
  iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_3c,4);
  if (iVar4 == 4) {
    uVar5 = TriangleSet::getPositions();
    iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,uVar5,iVar3 * 0xc);
    if (iVar4 == iVar3 * 0xc) {
      iVar3 = IndexedTriangleSet::getNumIndices();
      local_40 = iVar3;
      iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_40,4);
      if (iVar4 == 4) {
        uVar5 = IndexedTriangleSet::getIndices16();
        iVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1,uVar5,iVar3 * 2);
        bVar2 = iVar4 == iVar3 * 2;
        goto LAB_008f9b0c;
      }
    }
  }
  bVar2 = false;
LAB_008f9b0c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


