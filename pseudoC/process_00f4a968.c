// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 00f4a968
// Size: 176 bytes
// Signature: undefined __thiscall process(btSingleRayCallback * this, btBroadphaseProxy * param_1)


/* btSingleRayCallback::process(btBroadphaseProxy const*) */

void __thiscall btSingleRayCallback::process(btSingleRayCallback *this,btBroadphaseProxy *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0xe0);
  fVar5 = *(float *)(plVar2 + 1);
  if (fVar5 != 0.0) {
    lVar4 = *(long *)param_1;
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(lVar4 + 0xc0));
    if ((uVar3 & 1) != 0) {
      uStack_58 = *(undefined8 *)(lVar4 + 200);
      lStack_48 = lVar4 + 8;
      local_60 = 0;
      local_40 = 0xffffffffffffffff;
      local_50 = lVar4;
      btCollisionWorld::rayTestSingleInternal
                ((btTransform *)(this + 0x48),(btTransform *)(this + 0x88),
                 (btCollisionObjectWrapper *)&local_60,*(RayResultCallback **)(this + 0xe0));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5 != 0.0);
}


