// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Add
// Entry Point: 00cd3024
// Size: 680 bytes
// Signature: undefined __thiscall Add(ECP * this, ECPPoint * param_1, ECPPoint * param_2)


/* CryptoPP::ECP::Add(CryptoPP::ECPPoint const&, CryptoPP::ECPPoint const&) const */

ECP * __thiscall CryptoPP::ECP::Add(ECP *this,ECPPoint *param_1,ECPPoint *param_2)

{
  ECPPoint *pEVar1;
  ECPPoint *pEVar2;
  long lVar3;
  ulong uVar4;
  ECP *pEVar5;
  Integer *pIVar6;
  undefined8 uVar7;
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
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pEVar5 = (ECP *)param_2;
  if ((param_1[0x68] == (ECPPoint)0x0) && (pEVar5 = (ECP *)param_1, param_2[0x68] == (ECPPoint)0x0))
  {
    pEVar1 = param_1 + 8;
    pEVar2 = param_2 + 8;
    uVar4 = (**(code **)(**(long **)(this + 0x10) + 0x10))(*(long **)(this + 0x10),pEVar1,pEVar2);
    if ((uVar4 & 1) == 0) {
      pIVar6 = (Integer *)
               (**(code **)(**(long **)(this + 0x10) + 0x40))
                         (*(long **)(this + 0x10),param_2 + 0x38,param_1 + 0x38);
      Integer::Integer((Integer *)local_78,pIVar6);
      plVar8 = *(long **)(this + 0x10);
                    /* try { // try from 00cd3130 to 00cd3163 has its CatchHandler @ 00cd32d4 */
      uVar7 = (**(code **)(*plVar8 + 0x40))(plVar8,pEVar2,pEVar1);
      pIVar6 = (Integer *)(**(code **)(*plVar8 + 0x98))(plVar8,local_78,uVar7);
      Integer::operator=((Integer *)local_78,pIVar6);
      plVar8 = *(long **)(this + 0x10);
                    /* try { // try from 00cd3170 to 00cd31b7 has its CatchHandler @ 00cd32dc */
      uVar7 = (**(code **)(*plVar8 + 0x90))(plVar8,local_78);
      uVar7 = (**(code **)(*plVar8 + 0x40))(plVar8,uVar7,pEVar1);
      pIVar6 = (Integer *)(**(code **)(*plVar8 + 0x40))(plVar8,uVar7,pEVar2);
      Integer::Integer((Integer *)local_a8,pIVar6);
      plVar8 = *(long **)(this + 0x10);
                    /* try { // try from 00cd31c4 to 00cd321b has its CatchHandler @ 00cd32e4 */
      uVar7 = (**(code **)(*plVar8 + 0x40))(plVar8,pEVar1,local_a8);
      uVar7 = (**(code **)(*plVar8 + 0x80))(plVar8,local_78,uVar7);
      pIVar6 = (Integer *)(**(code **)(*plVar8 + 0x40))(plVar8,uVar7,param_1 + 0x38);
      Integer::operator=((Integer *)(this + 0xb0),pIVar6);
      Integer::swap((Integer *)(this + 0x80),(Integer *)local_a8);
      this[0xe0] = (ECP)0x0;
      if (uStack_90 <= local_98) {
        local_98 = uStack_90;
      }
      local_a8[0] = &PTR__Integer_0100c890;
      for (; local_98 != 0; local_98 = local_98 - 1) {
        *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd3258 to 00cd325b has its CatchHandler @ 00cd32d0 */
      UnalignedDeallocate(local_88);
      local_78[0] = &PTR__Integer_0100c890;
      if (uStack_60 <= local_68) {
        local_68 = uStack_60;
      }
      for (; local_68 != 0; local_68 = local_68 - 1) {
        *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd328c to 00cd328f has its CatchHandler @ 00cd32cc */
      UnalignedDeallocate(local_58);
      pEVar5 = this + 0x78;
      if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00cd32c8;
    }
    else {
      uVar4 = (**(code **)(**(long **)(this + 0x10) + 0x10))
                        (*(long **)(this + 0x10),param_1 + 0x38,param_2 + 0x38);
      if ((uVar4 & 1) == 0) {
        pEVar5 = (ECP *)(**(code **)(*(long *)this + 0x18))(this);
        if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_00cd32c8:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else {
        pEVar5 = (ECP *)(**(code **)(*(long *)this + 0x38))(this,param_1);
        if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00cd32c8;
      }
    }
  }
  else if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00cd32c8;
  return pEVar5;
}


