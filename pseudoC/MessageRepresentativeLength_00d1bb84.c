// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MessageRepresentativeLength
// Entry Point: 00d1bb84
// Size: 180 bytes
// Signature: undefined MessageRepresentativeLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TF_SignatureSchemeBase<CryptoPP::PK_Verifier,
   CryptoPP::TF_Base<CryptoPP::TrapdoorFunction, CryptoPP::PK_SignatureMessageEncodingMethod>
   >::MessageRepresentativeLength() const */

ulong CryptoPP::
      TF_SignatureSchemeBase<CryptoPP::PK_Verifier,CryptoPP::TF_Base<CryptoPP::TrapdoorFunction,CryptoPP::PK_SignatureMessageEncodingMethod>>
      ::MessageRepresentativeLength(void)

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
  (**(code **)(*plVar4 + 0x18))(local_58);
                    /* try { // try from 00d1bbbc to 00d1bbc3 has its CatchHandler @ 00d1bc3c */
  iVar3 = Integer::BitCount();
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1bc00 to 00d1bc03 has its CatchHandler @ 00d1bc38 */
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


