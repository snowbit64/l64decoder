// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: performRaycast
// Entry Point: 00f590a4
// Size: 144 bytes
// Signature: undefined __cdecl performRaycast(btTriangleCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* btBvhTriangleMeshShape::performRaycast(btTriangleCallback*, btVector3 const&, btVector3 const&)
    */

void btBvhTriangleMeshShape::performRaycast
               (btTriangleCallback *param_1,btVector3 *param_2,btVector3 *param_3)

{
  btQuantizedBvh *this;
  long lVar1;
  btVector3 *in_x3;
  int in_w6;
  undefined **local_60;
  undefined8 local_58;
  btVector3 *pbStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x40);
  this = *(btQuantizedBvh **)(param_1 + 0x48);
  local_60 = &PTR__btNodeOverlapCallback_01019fc0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  pbStack_50 = param_2;
  if (this[0x40] == (btQuantizedBvh)0x0) {
    btQuantizedBvh::walkStacklessTreeAgainstRay
              ((btNodeOverlapCallback *)this,(btVector3 *)&local_60,param_3,in_x3,
               (btVector3 *)&local_38,(int)&local_48,in_w6);
  }
  else {
    btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay
              (this,(btNodeOverlapCallback *)&local_60,param_3,in_x3,(btVector3 *)&local_38,
               (btVector3 *)&local_48,0,*(int *)(this + 0x3c));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


