// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FixedCiphertextLength
// Entry Point: 00d1d228
// Size: 168 bytes
// Signature: undefined FixedCiphertextLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TF_CryptoSystemBase<CryptoPP::PK_Encryptor,
   CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunction,
   CryptoPP::PK_EncryptionMessageEncodingMethod> >::FixedCiphertextLength() const */

undefined4
CryptoPP::
TF_CryptoSystemBase<CryptoPP::PK_Encryptor,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunction,CryptoPP::PK_EncryptionMessageEncodingMethod>>
::FixedCiphertextLength(void)

{
  long lVar1;
  undefined4 uVar2;
  long in_x0;
  long *plVar3;
  undefined **local_58 [2];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(**(code **)(*(long *)(in_x0 + 0x10) + 0x10))();
  (**(code **)(*plVar3 + 0x28))(local_58);
                    /* try { // try from 00d1d260 to 00d1d267 has its CatchHandler @ 00d1d2d4 */
  uVar2 = Integer::ByteCount();
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1d2a4 to 00d1d2a7 has its CatchHandler @ 00d1d2d0 */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


