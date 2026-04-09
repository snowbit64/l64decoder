// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSplitShape
// Entry Point: 0097ecf0
// Size: 232 bytes
// Signature: undefined __thiscall findSplitShape(MeshSplitManager * this, Matrix4x4 * param_1, float param_2, float param_3, float * param_4, float * param_5, float * param_6, float * param_7)


/* MeshSplitManager::findSplitShape(Matrix4x4 const&, float, float, float&, float&, float&, float&)
    */

void __thiscall
MeshSplitManager::findSplitShape
          (MeshSplitManager *this,Matrix4x4 *param_1,float param_2,float param_3,float *param_4,
          float *param_5,float *param_6,float *param_7)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this_00;
  undefined4 local_c0;
  float local_bc;
  float fStack_b8;
  undefined **local_b0;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_88 = *(undefined8 *)(param_1 + 8);
  local_90 = *(undefined8 *)param_1;
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  local_b0 = &PTR__IPhysicsEntityReport_00fe0970;
  local_a8 = 0;
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  local_c0 = 0x3c23d70a;
  local_bc = param_2;
  fStack_b8 = param_3;
  local_50 = param_2;
  fStack_4c = param_3;
  ScenegraphPhysicsContextManager::getInstance();
  this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::overlapBoxShapes
            (this_00,param_1,(Vector3 *)&local_c0,(IPhysicsEntityReport *)&local_b0,0xffffffff,true,
             true,false,0,(TransformGroup **)0x0,0);
  *param_4 = local_a0;
  *param_5 = fStack_9c;
  *param_6 = local_98;
  *param_7 = fStack_94;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8);
}


