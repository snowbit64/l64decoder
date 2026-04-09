// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processAllTriangles
// Entry Point: 00f5871c
// Size: 92 bytes
// Signature: undefined __thiscall processAllTriangles(btBvhTriangleMeshShape * this, btTriangleCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* btBvhTriangleMeshShape::processAllTriangles(btTriangleCallback*, btVector3 const&, btVector3
   const&) const */

void __thiscall
btBvhTriangleMeshShape::processAllTriangles
          (btBvhTriangleMeshShape *this,btTriangleCallback *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  long lVar1;
  undefined **local_70;
  undefined8 uStack_68;
  btTriangleCallback *local_60;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_68 = *(undefined8 *)(this + 0x40);
  local_70 = &PTR__btNodeOverlapCallback_0101a050;
  local_60 = param_1;
  btQuantizedBvh::reportAabbOverlappingNodex
            (*(btQuantizedBvh **)(this + 0x48),(btNodeOverlapCallback *)&local_70,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


