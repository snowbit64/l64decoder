// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSplitShapeOrientedBoundingBox
// Entry Point: 0097f600
// Size: 20 bytes
// Signature: undefined __thiscall getSplitShapeOrientedBoundingBox(MeshSplitManager * this, MeshSplitShape * param_1, Matrix4x4 * param_2, Vector3 * param_3)


/* MeshSplitManager::getSplitShapeOrientedBoundingBox(MeshSplitShape const*, Matrix4x4&, Vector3&)
    */

void __thiscall
MeshSplitManager::getSplitShapeOrientedBoundingBox
          (MeshSplitManager *this,MeshSplitShape *param_1,Matrix4x4 *param_2,Vector3 *param_3)

{
  BrepUtil::getOrientedBoundingBox(*(Brep **)(*(long *)(param_1 + 0x170) + 0x170),param_2,param_3);
  return;
}


