// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetPrimeTable
// Entry Point: 00d1022c
// Size: 92 bytes
// Signature: undefined __cdecl GetPrimeTable(uint * param_1)


/* CryptoPP::GetPrimeTable(unsigned int&) */

void CryptoPP::GetPrimeTable(uint *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
                   ::Ref();
  *param_1 = (uint)((ulong)(plVar2[1] - *plVar2) >> 1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


