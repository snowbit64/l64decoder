// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSplitShapeStats
// Entry Point: 0097f528
// Size: 216 bytes
// Signature: undefined __thiscall getSplitShapeStats(MeshSplitManager * this, MeshSplitShape * param_1, Vector3 * param_2, uint * param_3, uint * param_4)


/* MeshSplitManager::getSplitShapeStats(MeshSplitShape*, Vector3&, unsigned int&, unsigned int&) */

undefined8 __thiscall
MeshSplitManager::getSplitShapeStats
          (MeshSplitManager *this,MeshSplitShape *param_1,Vector3 *param_2,uint *param_3,
          uint *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  Matrix4x4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x170);
  BrepUtil::getOrientedBoundingBox(*(Brep **)(lVar2 + 0x170),aMStack_88,param_2);
  fVar3 = (float)*(undefined8 *)param_2;
  fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  *(ulong *)param_2 = CONCAT44(fVar4 + fVar4,fVar3 + fVar3);
  *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + *(float *)(param_2 + 8);
  *param_3 = (uint)((ulong)(*(long *)(lVar2 + 0x180) - *(long *)(lVar2 + 0x178)) >> 3);
  *param_4 = 0;
  if ((((int)((ulong)(*(long *)(param_1 + 0x30) - (long)*(long **)(param_1 + 0x28)) >> 3) != 0) &&
      (lVar2 = **(long **)(param_1 + 0x28), (*(byte *)(lVar2 + 0x11) >> 3 & 1) != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x170), (*(byte *)(lVar2 + 0x31) >> 1 & 1) != 0)) {
    *param_4 = (uint)((ulong)(*(long *)(lVar2 + 0x98) - *(long *)(lVar2 + 0x90)) >> 2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


