// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FixedMaxPlaintextLength
// Entry Point: 00d1d2e8
// Size: 224 bytes
// Signature: undefined FixedMaxPlaintextLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TF_CryptoSystemBase<CryptoPP::PK_Encryptor,
   CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunction,
   CryptoPP::PK_EncryptionMessageEncodingMethod> >::FixedMaxPlaintextLength() const */

void CryptoPP::
     TF_CryptoSystemBase<CryptoPP::PK_Encryptor,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunction,CryptoPP::PK_EncryptionMessageEncodingMethod>>
     ::FixedMaxPlaintextLength(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  long *plVar4;
  long *plVar5;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)(in_x0 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(*plVar5 + 0x10))(local_68);
                    /* try { // try from 00d1d340 to 00d1d347 has its CatchHandler @ 00d1d3cc */
  iVar3 = Integer::BitCount();
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1d384 to 00d1d387 has its CatchHandler @ 00d1d3c8 */
  UnalignedDeallocate(local_48);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + -1;
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,iVar1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


