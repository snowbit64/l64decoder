// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTest
// Entry Point: 00f4423c
// Size: 264 bytes
// Signature: undefined __thiscall rayTest(btDbvtBroadphase * this, btVector3 * param_1, btVector3 * param_2, btBroadphaseRayCallback * param_3, btVector3 * param_4, btVector3 * param_5)


/* btDbvtBroadphase::rayTest(btVector3 const&, btVector3 const&, btBroadphaseRayCallback&, btVector3
   const&, btVector3 const&) */

void __thiscall
btDbvtBroadphase::rayTest
          (btDbvtBroadphase *this,btVector3 *param_1,btVector3 *param_2,
          btBroadphaseRayCallback *param_3,btVector3 *param_4,btVector3 *param_5)

{
  long lVar1;
  undefined **local_78;
  btBroadphaseRayCallback *pbStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x70))();
  local_78 = &PTR__ICollide_01018f30;
  pbStack_70 = param_3;
  btDbvt::rayTestInternal
            ((btDbvt *)(this + 8),*(btDbvtNode **)(this + 8),param_1,param_2,
             (btVector3 *)(param_3 + 8),(uint *)(param_3 + 0x18),*(float *)(param_3 + 0x24),param_4,
             param_5,(ICollide *)&local_78);
  btDbvt::rayTestInternal
            ((btDbvt *)(this + 0x68),*(btDbvtNode **)(this + 0x68),param_1,param_2,
             (btVector3 *)(param_3 + 8),(uint *)(param_3 + 0x18),*(float *)(param_3 + 0x24),param_4,
             param_5,(ICollide *)&local_78);
  (**(code **)(*(long *)this + 0x78))(this);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


