// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TrialDivision
// Entry Point: 00d104d8
// Size: 216 bytes
// Signature: undefined __cdecl TrialDivision(Integer * param_1, uint param_2)


/* CryptoPP::TrialDivision(CryptoPP::Integer const&, unsigned int) */

void CryptoPP::TrialDivision(Integer *param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  ushort **ppuVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x28);
  ppuVar4 = (ushort **)
            Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
            ::Ref();
  puVar8 = *ppuVar4;
  uVar1 = *puVar8;
  uVar5 = (uint)uVar1;
  if (uVar1 < param_2) {
    uVar9 = 1;
    do {
      iVar3 = Integer::Modulo(param_1,uVar5);
      if (iVar3 == 0) {
        bVar2 = true;
        lVar7 = *(long *)(lVar7 + 0x28);
        goto joined_r0x00d105a8;
      }
      uVar1 = puVar8[uVar9];
      uVar5 = (uint)uVar1;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar1 < param_2);
  }
  if (uVar5 == param_2) {
    iVar3 = Integer::Modulo(param_1,param_2);
    bVar2 = iVar3 == 0;
    lVar7 = *(long *)(lVar7 + 0x28);
  }
  else {
    bVar2 = false;
    lVar7 = *(long *)(lVar7 + 0x28);
  }
joined_r0x00d105a8:
  if (lVar7 != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


