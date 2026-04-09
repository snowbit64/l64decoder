// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsPrime
// Entry Point: 00d12728
// Size: 628 bytes
// Signature: undefined __cdecl IsPrime(Integer * param_1)


/* CryptoPP::IsPrime(CryptoPP::Integer const&) */

byte CryptoPP::IsPrime(Integer *param_1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  Integer *pIVar6;
  long *plVar7;
  ushort **ppuVar8;
  uint uVar9;
  Integer *in_x2;
  ushort *puVar10;
  ulong uVar11;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  Integer::Integer((Integer *)local_78,0x7fcf);
                    /* try { // try from 00d1275c to 00d12767 has its CatchHandler @ 00d129a8 */
  iVar5 = Integer::Compare(param_1,(Integer *)local_78);
  uVar11 = local_68;
  if (uStack_60 <= local_68) {
    uVar11 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)((long)local_58 + uVar11 * 4 + -4) = 0;
  }
                    /* try { // try from 00d127a4 to 00d127a7 has its CatchHandler @ 00d129a4 */
  UnalignedDeallocate(local_58);
  if (iVar5 < 1) {
    bVar4 = IsSmallPrime(param_1);
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00d12998;
    goto LAB_00d12968;
  }
  pIVar6 = (Integer *)Singleton<CryptoPP::Integer,CryptoPP::NewLastSmallPrimeSquared,0>::Ref();
  iVar5 = Integer::Compare(param_1,pIVar6);
  if (iVar5 < 1) {
    plVar7 = (long *)Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
                     ::Ref();
    uVar2 = *(ushort *)(*plVar7 + (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 1) - 1) * 2);
    ppuVar8 = (ushort **)
              Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
              ::Ref();
    puVar10 = *ppuVar8;
    uVar1 = *puVar10;
    uVar9 = (uint)uVar1;
    if (uVar1 < uVar2) {
      uVar11 = 1;
      do {
        iVar5 = Integer::Modulo(param_1,uVar9);
        if (iVar5 == 0) goto LAB_00d12908;
        uVar1 = puVar10[uVar11];
        uVar9 = (uint)uVar1;
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (uVar1 < uVar2);
    }
    if (uVar9 == uVar2) {
      iVar5 = Integer::Modulo(param_1,(uint)uVar2);
      bVar4 = iVar5 != 0;
      if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00d12998;
    }
    else {
      bVar4 = 1;
      if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00d12998;
    }
  }
  else {
    plVar7 = (long *)Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
                     ::Ref();
    uVar2 = *(ushort *)(*plVar7 + (ulong)((int)((ulong)(plVar7[1] - *plVar7) >> 1) - 1) * 2);
    ppuVar8 = (ushort **)
              Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
              ::Ref();
    puVar10 = *ppuVar8;
    uVar1 = *puVar10;
    uVar9 = (uint)uVar1;
    if ((uint)uVar1 < (uint)uVar2) {
      uVar11 = 1;
      do {
        iVar5 = Integer::Modulo(param_1,uVar9);
        if (iVar5 == 0) goto LAB_00d12908;
        uVar9 = (uint)puVar10[uVar11];
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (uVar9 < uVar2);
    }
    if ((uVar9 == uVar2) && (iVar5 = Integer::Modulo(param_1,(uint)uVar2), iVar5 == 0)) {
LAB_00d12908:
      bVar4 = 0;
      if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_00d12998:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      Integer::Integer((Integer *)local_78,3);
                    /* try { // try from 00d12844 to 00d1285b has its CatchHandler @ 00d129a0 */
      uVar11 = IsStrongProbablePrime((CryptoPP *)param_1,(Integer *)local_78,in_x2);
      if ((uVar11 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        bVar4 = IsStrongLucasProbablePrime(param_1);
      }
      local_78[0] = &PTR__Integer_0100c890;
      if (uStack_60 <= local_68) {
        local_68 = uStack_60;
      }
      for (; local_68 != 0; local_68 = local_68 - 1) {
        *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
      }
                    /* try { // try from 00d12954 to 00d12957 has its CatchHandler @ 00d1299c */
      UnalignedDeallocate(local_58);
      if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00d12998;
    }
  }
LAB_00d12968:
  return bVar4 & 1;
}


