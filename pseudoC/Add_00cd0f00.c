// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Add
// Entry Point: 00cd0f00
// Size: 780 bytes
// Signature: undefined __thiscall Add(EC2N * this, EC2NPoint * param_1, EC2NPoint * param_2)


/* CryptoPP::EC2N::Add(CryptoPP::EC2NPoint const&, CryptoPP::EC2NPoint const&) const */

EC2N * __thiscall CryptoPP::EC2N::Add(EC2N *this,EC2NPoint *param_1,EC2NPoint *param_2)

{
  EC2NPoint *pEVar1;
  EC2NPoint *pEVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  EC2N *pEVar7;
  undefined8 uVar8;
  PolynomialMod2 *pPVar9;
  void *pvVar10;
  long *plVar11;
  PolynomialMod2 aPStack_98 [8];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  PolynomialMod2 aPStack_78 [8];
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pEVar7 = (EC2N *)param_2;
  if ((param_1[0x48] == (EC2NPoint)0x0) &&
     (pEVar7 = (EC2N *)param_1, param_2[0x48] == (EC2NPoint)0x0)) {
    uVar6 = (**(code **)(*(long *)this + 0x10))(this,param_1,param_2);
    if ((uVar6 & 1) == 0) {
      pEVar1 = param_1 + 8;
      pEVar2 = param_2 + 8;
      uVar6 = (**(code **)(**(long **)(this + 0x10) + 0x10))(*(long **)(this + 0x10),pEVar1,pEVar2);
      if ((uVar6 & 1) != 0) {
        plVar11 = *(long **)(this + 0x10);
        uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,pEVar2,param_2 + 0x28);
        uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0x28,uVar8);
        if ((uVar6 & 1) != 0) {
          pEVar7 = (EC2N *)(**(code **)(*(long *)this + 0x18))(this);
          if (*(long *)(lVar5 + 0x28) == local_58) {
            return pEVar7;
          }
          goto LAB_00cd1208;
        }
      }
      pPVar9 = (PolynomialMod2 *)
               (**(code **)(**(long **)(this + 0x10) + 0x20))
                         (*(long **)(this + 0x10),param_1 + 0x28,param_2 + 0x28);
      PolynomialMod2::PolynomialMod2(aPStack_78,pPVar9);
      plVar11 = *(long **)(this + 0x10);
                    /* try { // try from 00cd1070 to 00cd10a3 has its CatchHandler @ 00cd121c */
      uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,pEVar1,pEVar2);
      pPVar9 = (PolynomialMod2 *)(**(code **)(*plVar11 + 0x98))(plVar11,aPStack_78,uVar8);
      PolynomialMod2::operator=(aPStack_78,pPVar9);
                    /* try { // try from 00cd10b0 to 00cd10c3 has its CatchHandler @ 00cd1214 */
      pPVar9 = (PolynomialMod2 *)
               (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),aPStack_78);
      PolynomialMod2::PolynomialMod2(aPStack_98,pPVar9);
                    /* try { // try from 00cd10d0 to 00cd117f has its CatchHandler @ 00cd1224 */
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),aPStack_98,aPStack_78);
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),aPStack_98,pEVar2);
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),aPStack_98,this + 0x18)
      ;
      plVar11 = *(long **)(this + 0x10);
      uVar8 = (**(code **)(*plVar11 + 0x80))(plVar11,aPStack_78,aPStack_98);
      pPVar9 = (PolynomialMod2 *)(**(code **)(*plVar11 + 0x20))(plVar11,param_1 + 0x28,uVar8);
      PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x80),pPVar9);
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10),aPStack_98,pEVar1);
      (**(code **)(**(long **)(this + 0x10) + 0x48))
                (*(long **)(this + 0x10),(PolynomialMod2 *)(this + 0x80),aPStack_98);
      uVar3 = *(ulong *)(this + 0x68);
      uVar4 = *(ulong *)(this + 0x70);
      this[0xa0] = (EC2N)0x0;
      pvVar10 = *(void **)(this + 0x78);
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = uVar4;
      }
      *(ulong *)(this + 0x70) = uStack_88;
      *(ulong *)(this + 0x68) = local_90;
      *(void **)(this + 0x78) = local_80;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)((long)pvVar10 + uVar6 * 4 + -4) = 0;
      }
      local_90 = uVar3;
      uStack_88 = uVar4;
      local_80 = pvVar10;
                    /* try { // try from 00cd11c4 to 00cd11c7 has its CatchHandler @ 00cd1210 */
      UnalignedDeallocate(pvVar10);
      if (uStack_68 <= local_70) {
        local_70 = uStack_68;
      }
      for (; local_70 != 0; local_70 = local_70 - 1) {
        *(undefined4 *)((long)local_60 + local_70 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd11f0 to 00cd11f3 has its CatchHandler @ 00cd120c */
      UnalignedDeallocate(local_60);
      pEVar7 = this + 0x58;
      if (*(long *)(lVar5 + 0x28) != local_58) {
LAB_00cd1208:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      pEVar7 = (EC2N *)(**(code **)(*(long *)this + 0x38))(this,param_1);
      if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_00cd1208;
    }
  }
  else if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_00cd1208;
  return pEVar7;
}


