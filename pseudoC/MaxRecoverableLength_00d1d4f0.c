// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxRecoverableLength
// Entry Point: 00d1d4f0
// Size: 284 bytes
// Signature: undefined MaxRecoverableLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TF_SignatureSchemeBase<CryptoPP::PK_Signer,
   CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,
   CryptoPP::PK_SignatureMessageEncodingMethod> >::MaxRecoverableLength() const */

void CryptoPP::
     TF_SignatureSchemeBase<CryptoPP::PK_Signer,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,CryptoPP::PK_SignatureMessageEncodingMethod>>
     ::MaxRecoverableLength(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *in_x0;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong extraout_x1;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = in_x0 + 2;
  plVar4 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(*plVar5 + 0x18))(local_78);
                    /* try { // try from 00d1d550 to 00d1d557 has its CatchHandler @ 00d1d610 */
  iVar3 = Integer::BitCount();
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1d594 to 00d1d597 has its CatchHandler @ 00d1d60c */
  UnalignedDeallocate(local_58);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + -1;
  }
  (**(code **)(*in_x0 + 0x80))();
  uVar6 = (**(code **)(*in_x0 + 0x88))();
  (**(code **)(*plVar4 + 0x18))(plVar4,iVar1,extraout_x1 & 0xffffffff,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


