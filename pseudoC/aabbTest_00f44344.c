// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: aabbTest
// Entry Point: 00f44344
// Size: 192 bytes
// Signature: undefined __thiscall aabbTest(btDbvtBroadphase * this, btVector3 * param_1, btVector3 * param_2, btBroadphaseAabbCallback * param_3)


/* btDbvtBroadphase::aabbTest(btVector3 const&, btVector3 const&, btBroadphaseAabbCallback&) */

void __thiscall
btDbvtBroadphase::aabbTest
          (btDbvtBroadphase *this,btVector3 *param_1,btVector3 *param_2,
          btBroadphaseAabbCallback *param_3)

{
  long lVar1;
  undefined **local_80;
  btBroadphaseAabbCallback *pbStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x70))();
  uStack_68 = *(undefined8 *)(param_1 + 8);
  local_70 = *(undefined8 *)param_1;
  local_80 = &PTR__ICollide_01018f90;
  uStack_58 = *(undefined8 *)(param_2 + 8);
  uStack_60 = *(undefined8 *)param_2;
  pbStack_78 = param_3;
  btDbvt::collideTV((btDbvt *)(this + 8),*(btDbvtNode **)(this + 8),(btDbvtAabbMm *)&local_70,
                    (ICollide *)&local_80);
  btDbvt::collideTV((btDbvt *)(this + 0x68),*(btDbvtNode **)(this + 0x68),(btDbvtAabbMm *)&local_70,
                    (ICollide *)&local_80);
  (**(code **)(*(long *)this + 0x78))(this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


