// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 00f4cf04
// Size: 188 bytes
// Signature: undefined __thiscall process(btSingleSweepCallback * this, btBroadphaseProxy * param_1)


/* btSingleSweepCallback::process(btBroadphaseProxy const*) */

void __thiscall
btSingleSweepCallback::process(btSingleSweepCallback *this,btBroadphaseProxy *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined in_w6;
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
  plVar2 = *(long **)(this + 0xc0);
  fVar5 = *(float *)(plVar2 + 1);
  if (fVar5 != 0.0) {
    lVar4 = *(long *)param_1;
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(lVar4 + 0xc0));
    if ((uVar3 & 1) != 0) {
      uStack_58 = *(undefined8 *)(lVar4 + 200);
      lStack_48 = lVar4 + 8;
      local_40 = 0xffffffffffffffff;
      local_60 = 0;
      local_50 = lVar4;
      btCollisionWorld::objectQuerySingleInternal
                (*(btCollisionWorld **)(this + 0xd0),(btConvexShape *)(this + 0x28),
                 (btTransform *)(this + 0x68),(btTransform *)&local_60,
                 *(btCollisionObjectWrapper **)(this + 0xc0),
                 (ConvexResultCallback *)(ulong)(byte)this[0xd8],*(float *)(this + 200),(bool)in_w6)
      ;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5 != 0.0);
}


