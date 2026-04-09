// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SmallDivisorsTest
// Entry Point: 00d105b0
// Size: 204 bytes
// Signature: undefined __cdecl SmallDivisorsTest(Integer * param_1)


/* CryptoPP::SmallDivisorsTest(CryptoPP::Integer const&) */

void CryptoPP::SmallDivisorsTest(Integer *param_1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ushort **ppuVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  ulong uVar11;
  
  lVar3 = tpidr_el0;
  lVar9 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
                   ::Ref();
  uVar2 = *(ushort *)(*plVar5 + (ulong)((int)((ulong)(plVar5[1] - *plVar5) >> 1) - 1) * 2);
  ppuVar6 = (ushort **)
            Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
            ::Ref();
  puVar10 = *ppuVar6;
  uVar1 = *puVar10;
  uVar8 = (uint)uVar1;
  if (uVar1 < uVar2) {
    uVar11 = 1;
    do {
      uVar7 = Integer::Modulo(param_1,uVar8);
      if ((int)uVar7 == 0) goto LAB_00d10650;
      uVar1 = puVar10[uVar11];
      uVar8 = (uint)uVar1;
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (uVar1 < uVar2);
  }
  if (uVar8 == uVar2) {
    iVar4 = Integer::Modulo(param_1,(uint)uVar2);
    uVar7 = (ulong)(iVar4 != 0);
  }
  else {
    uVar7 = 1;
  }
LAB_00d10650:
  if (*(long *)(lVar3 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


