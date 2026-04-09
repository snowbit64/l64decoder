// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsSmallPrime
// Entry Point: 00d10374
// Size: 332 bytes
// Signature: undefined __cdecl IsSmallPrime(Integer * param_1)


/* CryptoPP::IsSmallPrime(CryptoPP::Integer const&) */

bool CryptoPP::IsSmallPrime(Integer *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort uVar7;
  int iVar8;
  ushort **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  ppuVar9 = (ushort **)
            Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
            ::Ref();
  if (*(int *)(param_1 + 0x28) != 1) {
    puVar2 = *ppuVar9;
    puVar3 = ppuVar9[1];
    uVar10 = Integer::operator!(param_1);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)((long)puVar3 - (long)puVar2) >> 1;
      Integer::Integer((Integer *)local_78,(ulong)puVar2[(int)uVar10 - 1]);
                    /* try { // try from 00d103d8 to 00d103e3 has its CatchHandler @ 00d104c4 */
      iVar8 = Integer::Compare(param_1,(Integer *)local_78);
      if (uStack_60 <= local_68) {
        local_68 = uStack_60;
      }
      local_78[0] = &PTR__Integer_0100c890;
      for (; local_68 != 0; local_68 = local_68 - 1) {
        *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
      }
                    /* try { // try from 00d10420 to 00d10423 has its CatchHandler @ 00d104c0 */
      UnalignedDeallocate(local_58);
      if (iVar8 < 1) {
        uVar7 = Integer::ConvertToLong();
        puVar6 = puVar2;
        uVar5 = (ulong)((long)puVar3 - (long)puVar2) >> 1 & 0xffffffff;
        while (puVar3 = puVar6, uVar5 != 0) {
          uVar11 = uVar5 >> 1;
          puVar1 = (ushort *)((long)puVar3 + (uVar5 & 0xfffffffffffffffe));
          puVar6 = puVar1 + 1;
          uVar5 = uVar5 + ~uVar11;
          if (uVar7 <= *puVar1) {
            puVar6 = puVar3;
            uVar5 = uVar11;
          }
        }
        if (puVar3 != puVar2 + (uVar10 & 0xffffffff)) {
          if (*(long *)(lVar4 + 0x28) == local_48) {
            return *puVar3 <= uVar7;
          }
          goto LAB_00d104bc;
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return false;
  }
LAB_00d104bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


