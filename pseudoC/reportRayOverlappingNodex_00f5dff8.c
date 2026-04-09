// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportRayOverlappingNodex
// Entry Point: 00f5dff8
// Size: 116 bytes
// Signature: undefined __cdecl reportRayOverlappingNodex(btNodeOverlapCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* btQuantizedBvh::reportRayOverlappingNodex(btNodeOverlapCallback*, btVector3 const&, btVector3
   const&) const */

void btQuantizedBvh::reportRayOverlappingNodex
               (btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  btVector3 *in_x3;
  int in_w6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (param_1[0x40] == (btNodeOverlapCallback)0x0) {
    walkStacklessTreeAgainstRay
              (param_1,param_2,param_3,in_x3,(btVector3 *)&local_38,(int)&local_48,in_w6);
  }
  else {
    walkStacklessQuantizedTreeAgainstRay
              ((btQuantizedBvh *)param_1,(btNodeOverlapCallback *)param_2,param_3,in_x3,
               (btVector3 *)&local_38,(btVector3 *)&local_48,0,*(int *)(param_1 + 0x3c));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


