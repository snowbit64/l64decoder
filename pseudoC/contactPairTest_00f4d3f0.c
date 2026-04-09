// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: contactPairTest
// Entry Point: 00f4d3f0
// Size: 320 bytes
// Signature: undefined __thiscall contactPairTest(btCollisionWorld * this, btCollisionObject * param_1, btCollisionObject * param_2, ContactResultCallback * param_3, btDispatcher * param_4, bool param_5)


/* btCollisionWorld::contactPairTest(btCollisionObject*, btCollisionObject*,
   btCollisionWorld::ContactResultCallback&, btDispatcher*, bool) */

void __thiscall
btCollisionWorld::contactPairTest
          (btCollisionWorld *this,btCollisionObject *param_1,btCollisionObject *param_2,
          ContactResultCallback *param_3,btDispatcher *param_4,bool param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 *puStack_e0;
  undefined local_c8;
  ContactResultCallback *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  btCollisionObject *local_a8;
  btCollisionObject *pbStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  btCollisionObject *local_80;
  btCollisionObject *pbStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  pbStack_78 = param_1 + 8;
  local_68 = *(long *)(lVar1 + 0x28);
  pbStack_a0 = param_2 + 8;
  uStack_88 = *(undefined8 *)(param_1 + 200);
  local_70 = 0xffffffffffffffff;
  uStack_b0 = *(undefined8 *)(param_2 + 200);
  local_98 = 0xffffffffffffffff;
  local_90 = 0;
  local_b8 = 0;
  local_a8 = param_2;
  local_80 = param_1;
  plVar2 = (long *)(**(code **)(*(long *)param_4 + 0x10))(param_4,&local_90,&local_b8,0);
  if (plVar2 != (long *)0x0) {
    uStack_118 = *(undefined8 *)(this + 0x48);
    local_120 = *(undefined8 *)(this + 0x40);
    uStack_108 = *(undefined8 *)(this + 0x58);
    local_c8 = 1;
    local_f8 = &PTR__Result_01019800;
    uStack_f0 = 0;
    uStack_128 = *(undefined8 *)(this + 0x38);
    local_130 = *(undefined8 *)(this + 0x30);
    local_e8 = &local_90;
    puStack_e0 = &local_b8;
    local_c0 = param_3;
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_90,&local_b8,&local_130,&local_f8);
    (**(code **)*plVar2)(plVar2);
    (**(code **)(*(long *)param_4 + 0x78))(param_4,plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


