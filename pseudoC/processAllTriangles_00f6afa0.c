// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processAllTriangles
// Entry Point: 00f6afa0
// Size: 112 bytes
// Signature: undefined __thiscall processAllTriangles(btTriangleMeshShape * this, btTriangleCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* btTriangleMeshShape::processAllTriangles(btTriangleCallback*, btVector3 const&, btVector3 const&)
   const */

void __thiscall
btTriangleMeshShape::processAllTriangles
          (btTriangleMeshShape *this,btTriangleCallback *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  long lVar1;
  undefined **local_58;
  btTriangleCallback *pbStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_40 = *(undefined8 *)(param_2 + 8);
  local_48 = *(undefined8 *)param_2;
  uStack_30 = *(undefined8 *)(param_3 + 8);
  local_38 = *(undefined8 *)param_3;
  local_58 = &PTR__btInternalTriangleIndexCallback_0101b338;
  pbStack_50 = param_1;
  (**(code **)(**(long **)(this + 0x40) + 0x10))(*(long **)(this + 0x40),&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


