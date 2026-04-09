// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_10
// Entry Point: 00ce9d40
// Size: 124 bytes
// Signature: undefined _INIT_10(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_10(void)

{
  long lVar1;
  bool bVar2;
  undefined4 *puVar3;
  
  DAT_021207e8 = 1;
  _DAT_021207e0 = 0x3fffffffffffffff;
  puVar3 = (undefined4 *)CryptoPP::UnalignedAllocate(4);
  lVar1 = DAT_021207e8;
  DAT_021207f0 = puVar3;
  if ((DAT_021207e8 != 0) && (bVar2 = DAT_021207e8 != 1, *puVar3 = 1, bVar2)) {
    memset(puVar3 + 1,0,lVar1 * 4 - 4);
  }
  __cxa_atexit(CryptoPP::PolynomialMod2::~PolynomialMod2,&DAT_021207d8,&PTR_LOOP_00fd8de0);
  return;
}


