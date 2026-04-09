// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Double
// Entry Point: 00cd1240
// Size: 488 bytes
// Signature: undefined __thiscall Double(EC2N * this, EC2NPoint * param_1)


/* CryptoPP::EC2N::Double(CryptoPP::EC2NPoint const&) const */

EC2NPoint * __thiscall CryptoPP::EC2N::Double(EC2N *this,EC2NPoint *param_1)

{
  EC2NPoint *pEVar1;
  long lVar2;
  ulong uVar3;
  PolynomialMod2 *pPVar4;
  PolynomialMod2 *pPVar5;
  PolynomialMod2 *pPVar6;
  undefined8 uVar7;
  long *plVar8;
  PolynomialMod2 aPStack_68 [8];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1[0x48] == (EC2NPoint)0x0) {
    pEVar1 = param_1 + 8;
    uVar3 = (**(code **)(**(long **)(this + 0x10) + 0x70))(*(long **)(this + 0x10),pEVar1);
    if ((uVar3 & 1) == 0) {
      param_1 = (EC2NPoint *)(**(code **)(*(long *)this + 0x18))(this);
      if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_00cd1424;
    }
    else {
      pPVar4 = (PolynomialMod2 *)
               (**(code **)(**(long **)(this + 0x10) + 0x98))
                         (*(long **)(this + 0x10),param_1 + 0x28,pEVar1);
      PolynomialMod2::PolynomialMod2(aPStack_68,pPVar4);
                    /* try { // try from 00cd12ec to 00cd13bb has its CatchHandler @ 00cd142c */
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),aPStack_68,pEVar1);
      pPVar5 = (PolynomialMod2 *)
               (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),pEVar1);
      pPVar4 = (PolynomialMod2 *)(this + 0x80);
      PolynomialMod2::operator=(pPVar4,pPVar5);
      pPVar6 = (PolynomialMod2 *)
               (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),aPStack_68);
      pPVar5 = (PolynomialMod2 *)(this + 0x60);
      PolynomialMod2::operator=(pPVar5,pPVar6);
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),pPVar5,aPStack_68);
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),pPVar5,this + 0x18);
      plVar8 = *(long **)(this + 0x10);
      uVar7 = (**(code **)(*plVar8 + 0x80))(plVar8,aPStack_68,pPVar5);
      (**(code **)(*plVar8 + 0x48))(plVar8,pPVar4,uVar7);
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),pPVar4,pPVar5);
      this[0xa0] = (EC2N)0x0;
      if (uStack_58 <= local_60) {
        local_60 = uStack_58;
      }
      for (; local_60 != 0; local_60 = local_60 - 1) {
        *(undefined4 *)((long)local_50 + local_60 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd13e8 to 00cd13eb has its CatchHandler @ 00cd1428 */
      UnalignedDeallocate(local_50);
      param_1 = (EC2NPoint *)(this + 0x58);
      if (*(long *)(lVar2 + 0x28) != local_48) {
LAB_00cd1424:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
  else if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_00cd1424;
  return param_1;
}


