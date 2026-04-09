// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 00f4d074
// Size: 324 bytes
// Signature: undefined __thiscall process(btSingleContactCallback * this, btBroadphaseProxy * param_1)


/* btSingleContactCallback::process(btBroadphaseProxy const*) */

undefined8 __thiscall
btSingleContactCallback::process(btSingleContactCallback *this,btBroadphaseProxy *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 *puStack_c0;
  undefined local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)param_1;
  if ((lVar4 != *(long *)(this + 8)) &&
     (uVar2 = (**(code **)(**(long **)(this + 0x20) + 0x10))
                        (*(long **)(this + 0x20),*(undefined8 *)(lVar4 + 0xc0)), (uVar2 & 1) != 0))
  {
    local_60 = *(long *)(this + 8);
    uStack_90 = *(undefined8 *)(lVar4 + 200);
    uStack_68 = *(undefined8 *)(local_60 + 200);
    local_98 = 0;
    lStack_58 = local_60 + 8;
    local_70 = 0;
    lStack_80 = lVar4 + 8;
    local_50 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    local_88 = lVar4;
    plVar3 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x10))
                               (*(long **)(this + 0x18),&local_70,&local_98,0);
    if (plVar3 != (long *)0x0) {
      local_a0 = *(undefined8 *)(this + 0x20);
      local_a8 = 1;
      local_d8 = &PTR__Result_01019800;
      uStack_d0 = 0;
      local_c8 = &local_70;
      puStack_c0 = &local_98;
      (**(code **)(*plVar3 + 0x10))
                (plVar3,&local_70,&local_98,*(long *)(this + 0x10) + 0x30,&local_d8);
      (**(code **)*plVar3)(plVar3);
      (**(code **)(**(long **)(this + 0x18) + 0x78))(*(long **)(this + 0x18),plVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


