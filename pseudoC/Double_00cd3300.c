// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Double
// Entry Point: 00cd3300
// Size: 672 bytes
// Signature: undefined __thiscall Double(ECP * this, ECPPoint * param_1)


/* CryptoPP::ECP::Double(CryptoPP::ECPPoint const&) const */

ECP * __thiscall CryptoPP::ECP::Double(ECP *this,ECPPoint *param_1)

{
  ECPPoint *pEVar1;
  long lVar2;
  int iVar3;
  ECP *pEVar4;
  Integer *pIVar5;
  undefined8 uVar6;
  Integer *pIVar7;
  long *plVar8;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1[0x68] == (ECPPoint)0x0) {
    pIVar7 = (Integer *)(param_1 + 0x38);
    pIVar5 = (Integer *)(**(code **)(**(long **)(this + 0x10) + 0x18))();
    iVar3 = Integer::Compare(pIVar7,pIVar5);
    if (iVar3 != 0) {
      pEVar1 = param_1 + 8;
      pIVar5 = (Integer *)
               (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),pEVar1);
      Integer::Integer((Integer *)local_78,pIVar5);
      plVar8 = *(long **)(this + 0x10);
                    /* try { // try from 00cd33c0 to 00cd3443 has its CatchHandler @ 00cd35bc */
      uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,local_78);
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,uVar6,local_78);
      pIVar5 = (Integer *)(**(code **)(*plVar8 + 0x20))(plVar8,uVar6,this + 0x18);
      Integer::operator=((Integer *)local_78,pIVar5);
      plVar8 = *(long **)(this + 0x10);
      uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,pIVar7);
      pIVar5 = (Integer *)(**(code **)(*plVar8 + 0x98))(plVar8,local_78,uVar6);
      Integer::operator=((Integer *)local_78,pIVar5);
      plVar8 = *(long **)(this + 0x10);
                    /* try { // try from 00cd3450 to 00cd3497 has its CatchHandler @ 00cd35a8 */
      uVar6 = (**(code **)(*plVar8 + 0x90))(plVar8,local_78);
      uVar6 = (**(code **)(*plVar8 + 0x40))(plVar8,uVar6,pEVar1);
      pIVar5 = (Integer *)(**(code **)(*plVar8 + 0x40))(plVar8,uVar6,pEVar1);
      Integer::Integer((Integer *)local_a8,pIVar5);
      plVar8 = *(long **)(this + 0x10);
                    /* try { // try from 00cd34a4 to 00cd34fb has its CatchHandler @ 00cd35ac */
      uVar6 = (**(code **)(*plVar8 + 0x40))(plVar8,pEVar1,local_a8);
      uVar6 = (**(code **)(*plVar8 + 0x80))(plVar8,local_78,uVar6);
      pIVar7 = (Integer *)(**(code **)(*plVar8 + 0x40))(plVar8,uVar6,pIVar7);
      Integer::operator=((Integer *)(this + 0xb0),pIVar7);
      Integer::swap((Integer *)(this + 0x80),(Integer *)local_a8);
      this[0xe0] = (ECP)0x0;
      if (uStack_90 <= local_98) {
        local_98 = uStack_90;
      }
      local_a8[0] = &PTR__Integer_0100c890;
      for (; local_98 != 0; local_98 = local_98 - 1) {
        *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd3538 to 00cd353b has its CatchHandler @ 00cd35a4 */
      UnalignedDeallocate(local_88);
      local_78[0] = &PTR__Integer_0100c890;
      if (uStack_60 <= local_68) {
        local_68 = uStack_60;
      }
      for (; local_68 != 0; local_68 = local_68 - 1) {
        *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd356c to 00cd356f has its CatchHandler @ 00cd35a0 */
      UnalignedDeallocate(local_58);
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return this + 0x78;
      }
      goto LAB_00cd359c;
    }
  }
  pEVar4 = (ECP *)(**(code **)(*(long *)this + 0x18))(this);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pEVar4;
  }
LAB_00cd359c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


