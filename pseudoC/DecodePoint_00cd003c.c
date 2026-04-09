// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecodePoint
// Entry Point: 00cd003c
// Size: 748 bytes
// Signature: undefined __thiscall DecodePoint(EC2N * this, EC2NPoint * param_1, BufferedTransformation * param_2, ulong param_3)


/* CryptoPP::EC2N::DecodePoint(CryptoPP::EC2NPoint&, CryptoPP::BufferedTransformation&, unsigned
   long) const */

void __thiscall
CryptoPP::EC2N::DecodePoint
          (EC2N *this,EC2NPoint *param_1,BufferedTransformation *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  PolynomialMod2 *pPVar5;
  undefined8 uVar6;
  PolynomialMod2 *pPVar7;
  long *plVar8;
  PolynomialMod2 aPStack_90 [8];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  PolynomialMod2 aPStack_70 [8];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  byte local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 == 0) goto LAB_00cd0150;
  lVar3 = (**(code **)(*(long *)param_2 + 0xa8))(param_2,local_4c);
  if (lVar3 == 0) goto LAB_00cd0154;
  if (local_4c[0] - 2 < 2) {
    uVar4 = (**(code **)(*(long *)this + 0x78))(this,1);
    if ((uVar4 & 0xffffffff) == param_3) {
      param_1[0x48] = (EC2NPoint)0x0;
      pPVar7 = (PolynomialMod2 *)(param_1 + 8);
      PolynomialMod2::Decode
                (pPVar7,param_2,(ulong)*(uint *)(*(long *)(this + 0x10) + 0x90) + 7 >> 3);
      uVar4 = PolynomialMod2::operator!(pPVar7);
      if ((uVar4 & 1) == 0) {
        pPVar5 = (PolynomialMod2 *)
                 (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),pPVar7);
        PolynomialMod2::PolynomialMod2(aPStack_70,pPVar5);
        plVar8 = *(long **)(this + 0x10);
                    /* try { // try from 00cd020c to 00cd026f has its CatchHandler @ 00cd034c */
        uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,pPVar7,this + 0x18);
        uVar6 = (**(code **)(*plVar8 + 0x80))(plVar8,aPStack_70,uVar6);
        uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,uVar6,this + 0x38);
        pPVar5 = (PolynomialMod2 *)(**(code **)(*plVar8 + 0x98))(plVar8,uVar6,aPStack_70);
        PolynomialMod2::operator=((PolynomialMod2 *)(param_1 + 0x28),pPVar5);
                    /* try { // try from 00cd0274 to 00cd027f has its CatchHandler @ 00cd0340 */
        GF2NP::SolveQuadraticEquation(*(PolynomialMod2 **)(this + 0x10));
                    /* try { // try from 00cd0280 to 00cd028b has its CatchHandler @ 00cd0330 */
        PolynomialMod2::operator=(aPStack_70,aPStack_90);
        if (uStack_80 <= local_88) {
          local_88 = uStack_80;
        }
        for (; local_88 != 0; local_88 = local_88 - 1) {
          *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd02b4 to 00cd02b7 has its CatchHandler @ 00cd032c */
        UnalignedDeallocate(local_78);
                    /* try { // try from 00cd02c0 to 00cd02ef has its CatchHandler @ 00cd034c */
        PolynomialMod2::SetBit(aPStack_70,0,local_4c[0] & 1);
        pPVar7 = (PolynomialMod2 *)
                 (**(code **)(**(long **)(this + 0x10) + 0x80))
                           (*(long **)(this + 0x10),aPStack_70,pPVar7);
        PolynomialMod2::operator=((PolynomialMod2 *)(param_1 + 0x28),pPVar7);
        if (uStack_60 <= local_68) {
          local_68 = uStack_60;
        }
        for (; local_68 != 0; local_68 = local_68 - 1) {
          *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd0318 to 00cd031b has its CatchHandler @ 00cd0328 */
        UnalignedDeallocate(local_58);
      }
      else {
        GF2NP::SquareRoot(*(PolynomialMod2 **)(this + 0x10));
                    /* try { // try from 00cd0118 to 00cd011f has its CatchHandler @ 00cd0348 */
        PolynomialMod2::operator=((PolynomialMod2 *)(param_1 + 0x28),aPStack_70);
        if (uStack_60 <= local_68) {
          local_68 = uStack_60;
        }
        for (; local_68 != 0; local_68 = local_68 - 1) {
          *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd0148 to 00cd014b has its CatchHandler @ 00cd0344 */
        UnalignedDeallocate(local_58);
      }
      goto LAB_00cd031c;
    }
  }
  else {
    if (local_4c[0] == 4) {
      uVar4 = (**(code **)(*(long *)this + 0x78))(this,0);
      lVar3 = 0;
      if ((uVar4 & 0xffffffff) != param_3) goto LAB_00cd0154;
      uVar1 = *(uint *)(*(long *)(this + 0x10) + 0x90);
      param_1[0x48] = (EC2NPoint)0x0;
      uVar4 = (ulong)uVar1 + 7 >> 3;
      PolynomialMod2::Decode((PolynomialMod2 *)(param_1 + 8),param_2,uVar4);
      PolynomialMod2::Decode((PolynomialMod2 *)(param_1 + 0x28),param_2,uVar4);
LAB_00cd031c:
      lVar3 = 1;
      goto LAB_00cd0154;
    }
    if (local_4c[0] == 0) {
      lVar3 = 1;
      param_1[0x48] = (EC2NPoint)0x1;
      goto LAB_00cd0154;
    }
  }
LAB_00cd0150:
  lVar3 = 0;
LAB_00cd0154:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


