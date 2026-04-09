// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsUnit
// Entry Point: 00d046f8
// Size: 200 bytes
// Signature: undefined __cdecl IsUnit(Integer * param_1)


/* CryptoPP::ModularArithmetic::IsUnit(CryptoPP::Integer const&) const */

bool CryptoPP::ModularArithmetic::IsUnit(Integer *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  Integer *in_x1;
  Integer *in_x2;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_48;
  ulong local_40;
  int *piStack_38;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  Integer::Gcd(in_x1,param_1 + 0x18,in_x2);
  uVar5 = local_40;
  do {
    if (uVar5 == 0) goto LAB_00d0474c;
    uVar6 = uVar5 - 1;
    lVar2 = uVar5 - 1;
    uVar5 = uVar6;
  } while (piStack_38[lVar2] == 0);
  if ((int)uVar6 == 0) {
    bVar3 = *piStack_38 == 1;
  }
  else {
LAB_00d0474c:
    bVar3 = false;
  }
  if (local_40 <= local_48) {
    local_48 = local_40;
  }
  for (; local_48 != 0; local_48 = local_48 - 1) {
    piStack_38[local_48 - 1] = 0;
  }
                    /* try { // try from 00d04784 to 00d04787 has its CatchHandler @ 00d047c0 */
  UnalignedDeallocate(piStack_38);
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


