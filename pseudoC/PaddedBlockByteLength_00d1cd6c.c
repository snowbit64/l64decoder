// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PaddedBlockByteLength
// Entry Point: 00d1cd6c
// Size: 180 bytes
// Signature: undefined PaddedBlockByteLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TF_CryptoSystemBase<CryptoPP::PK_Encryptor,
   CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunction,
   CryptoPP::PK_EncryptionMessageEncodingMethod> >::PaddedBlockByteLength() const */

ulong CryptoPP::
      TF_CryptoSystemBase<CryptoPP::PK_Encryptor,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunction,CryptoPP::PK_EncryptionMessageEncodingMethod>>
      ::PaddedBlockByteLength(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  long *plVar4;
  undefined **local_58 [2];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)(in_x0 + 0x10) + 0x10))();
  (**(code **)(*plVar4 + 0x10))(local_58);
                    /* try { // try from 00d1cda4 to 00d1cdab has its CatchHandler @ 00d1ce24 */
  iVar3 = Integer::BitCount();
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1cde8 to 00d1cdeb has its CatchHandler @ 00d1ce20 */
  UnalignedDeallocate(local_38);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar3 - 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return (ulong)uVar1 + 7 >> 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


