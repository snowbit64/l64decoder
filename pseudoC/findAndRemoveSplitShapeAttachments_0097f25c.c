// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findAndRemoveSplitShapeAttachments
// Entry Point: 0097f25c
// Size: 208 bytes
// Signature: undefined __thiscall findAndRemoveSplitShapeAttachments(MeshSplitManager * this, Matrix4x4 * param_1, float param_2, float param_3, float param_4)


/* MeshSplitManager::findAndRemoveSplitShapeAttachments(Matrix4x4 const&, float, float, float) */

void __thiscall
MeshSplitManager::findAndRemoveSplitShapeAttachments
          (MeshSplitManager *this,Matrix4x4 *param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this_00;
  undefined4 local_90;
  float local_8c;
  float fStack_88;
  undefined **local_80;
  char local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_6c = *(undefined8 *)(param_1 + 8);
  local_74 = *(undefined8 *)param_1;
  uStack_5c = *(undefined8 *)(param_1 + 0x18);
  local_64 = *(undefined8 *)(param_1 + 0x10);
  local_78 = '\0';
  local_80 = &PTR__IPhysicsEntityReport_00fe09c0;
  uStack_4c = *(undefined8 *)(param_1 + 0x28);
  local_54 = *(undefined8 *)(param_1 + 0x20);
  uStack_3c = *(undefined8 *)(param_1 + 0x38);
  local_44 = *(undefined8 *)(param_1 + 0x30);
  local_90 = 0x40000000;
  fStack_88 = param_4 + 2.0;
  local_8c = param_3 + 2.0;
  local_34 = param_2;
  fStack_30 = param_3;
  local_2c = param_4;
  ScenegraphPhysicsContextManager::getInstance();
  this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::overlapBoxShapes
            (this_00,param_1,(Vector3 *)&local_90,(IPhysicsEntityReport *)&local_80,0xffffffff,true,
             true,false,0,(TransformGroup **)0x0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78 != '\0');
}


