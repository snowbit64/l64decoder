// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: performConvexcast
// Entry Point: 00f59444
// Size: 128 bytes
// Signature: undefined __cdecl performConvexcast(btTriangleCallback * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5)


/* btBvhTriangleMeshShape::performConvexcast(btTriangleCallback*, btVector3 const&, btVector3
   const&, btVector3 const&, btVector3 const&) */

void btBvhTriangleMeshShape::performConvexcast
               (btTriangleCallback *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4
               ,btVector3 *param_5)

{
  long lVar1;
  btNodeOverlapCallback *this;
  int in_w5;
  undefined4 in_register_0000402c;
  int in_w6;
  undefined **local_40;
  undefined8 uStack_38;
  btVector3 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = *(btNodeOverlapCallback **)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  local_40 = &PTR__btNodeOverlapCallback_0101a010;
  local_30 = param_2;
  if (this[0x40] == (btNodeOverlapCallback)0x0) {
    btQuantizedBvh::walkStacklessTreeAgainstRay
              (this,(btVector3 *)&local_40,param_3,param_4,param_5,in_w5,in_w6);
  }
  else {
    btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay
              ((btQuantizedBvh *)this,(btNodeOverlapCallback *)&local_40,param_3,param_4,param_5,
               (btVector3 *)CONCAT44(in_register_0000402c,in_w5),0,*(int *)(this + 0x3c));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


