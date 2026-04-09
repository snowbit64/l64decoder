// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testSplitMesh
// Entry Point: 0097eac0
// Size: 528 bytes
// Signature: undefined __thiscall testSplitMesh(MeshSplitManager * this, MeshSplitShape * param_1, Matrix4x4 * param_2, float param_3, float param_4, float * param_5, float * param_6, float * param_7, float * param_8)


/* MeshSplitManager::testSplitMesh(MeshSplitShape*, Matrix4x4 const&, float, float, float&, float&,
   float&, float&) */

bool __thiscall
MeshSplitManager::testSplitMesh
          (MeshSplitManager *this,MeshSplitShape *param_1,Matrix4x4 *param_2,float param_3,
          float param_4,float *param_5,float *param_6,float *param_7,float *param_8)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  Brep *this_00;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  BrepPlane aBStack_c0 [24];
  Matrix4x4 aMStack_a8 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x170);
  getSplitPlane((TransformGroup *)param_1,param_2,aBStack_c0,aMStack_a8);
  this_00 = *(Brep **)(lVar6 + 0x170);
  if (((((uint)(*(int *)(this_00 + 0x2ef8) - *(int *)(this_00 + 0x2ef0)) >> 4 & 0xffff) < 0x8001) &&
      ((((uint)(*(int *)(this_00 + 0x2fa0) - *(int *)(this_00 + 0x2f98)) >> 3) * -0x5555 & 0xffff) <
       0x8001)) &&
     ((uint)((ulong)(*(long *)(this_00 + 0x2f70) - *(long *)(this_00 + 0x2f68)) >> 5) < 0x8001)) {
    plVar4 = *(long **)(lVar6 + 0x178);
    uVar5 = *(long *)(lVar6 + 0x180) - (long)plVar4;
    if ((int)(uVar5 >> 3) != 0) {
      uVar5 = uVar5 >> 3 & 0xffffffff;
      do {
        lVar6 = *plVar4;
        if (((0x8000 < ((uint)(*(int *)(lVar6 + 0x2ef8) - *(int *)(lVar6 + 0x2ef0)) >> 4 & 0xffff))
            || (0x8000 < (((uint)(*(int *)(lVar6 + 0x2fa0) - *(int *)(lVar6 + 0x2f98)) >> 3) *
                          -0x5555 & 0xffff))) ||
           (0x8000 < (uint)((ulong)(*(long *)(lVar6 + 0x2f70) - *(long *)(lVar6 + 0x2f68)) >> 5)))
        goto LAB_0097ec94;
        uVar5 = uVar5 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar5 != 0);
    }
    iVar3 = Brep::classify(this_00,aBStack_c0);
    if (iVar3 == 3) {
      local_d8 = (void *)0x0;
      local_d0 = (void *)0x0;
      local_c8 = 0;
                    /* try { // try from 0097ec10 to 0097ec6f has its CatchHandler @ 0097ecd0 */
      plVar4 = (long *)Brep::clone();
      Brep::clip((Brep *)plVar4,(vector *)&local_d8,aMStack_a8,param_3,param_4,-1,1.0,false,true);
      bVar2 = local_d0 != local_d8;
      if (bVar2) {
        getClipArea(this,(vector *)&local_d8,(Brep *)plVar4,aMStack_a8,param_5,param_6,param_7,
                    param_8);
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      if (local_d8 != (void *)0x0) {
        local_d0 = local_d8;
        operator_delete(local_d8);
      }
      goto LAB_0097ec98;
    }
  }
LAB_0097ec94:
  bVar2 = false;
LAB_0097ec98:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


