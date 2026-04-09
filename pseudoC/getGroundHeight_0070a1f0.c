// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGroundHeight
// Entry Point: 0070a1f0
// Size: 300 bytes
// Signature: undefined __thiscall getGroundHeight(AnimalLocomotionSystem * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* AnimalLocomotionSystem::getGroundHeight(Vector3 const&, Vector3&, Vector3&) */

void __thiscall
AnimalLocomotionSystem::getGroundHeight
          (AnimalLocomotionSystem *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  Bt2ScenegraphPhysicsContext *this_00;
  undefined8 uVar4;
  float fVar5;
  undefined **local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_68 = 0xbf80000000000000;
  local_50 = *(undefined4 *)(param_1 + 8);
  fVar5 = *(float *)(*(long *)(this + 0x3b0) + 0x4d8);
  local_60 = 0;
  local_58._4_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_88 = &PTR__IRaycastReport_00fd9d48;
  uVar1 = *(uint *)(*(long *)(this + 0x3b0) + 0x4dc);
  local_58 = CONCAT44(fVar5 + local_58._4_4_,(int)*(undefined8 *)param_1);
  ScenegraphPhysicsContextManager::getInstance();
  this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  iVar3 = Bt2ScenegraphPhysicsContext::raycastShapes
                    (this_00,(Vector3 *)&local_58,(Vector3 *)&local_68,(IRaycastReport *)&local_88,
                     fVar5 + fVar5,true,uVar1,true,true,0);
  if (iVar3 == 0) {
    uVar4 = *(undefined8 *)param_1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)param_2 = uVar4;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined8 *)param_3 = 0x3f80000000000000;
  }
  else {
    *(undefined8 *)param_2 = local_80;
    *(undefined4 *)(param_2 + 8) = local_78;
    *(undefined8 *)param_3 = local_74;
    *(undefined4 *)(param_3 + 8) = local_6c;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 != 0);
}


