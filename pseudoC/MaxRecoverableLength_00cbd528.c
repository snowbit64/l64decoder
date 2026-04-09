// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxRecoverableLength
// Entry Point: 00cbd528
// Size: 112 bytes
// Signature: undefined MaxRecoverableLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SignatureSchemeBase<CryptoPP::PK_Verifier,
   CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint> >::MaxRecoverableLength() const */

void CryptoPP::
     DL_SignatureSchemeBase<CryptoPP::PK_Verifier,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>::
     MaxRecoverableLength(void)

{
  long *in_x0;
  long *plVar1;
  undefined8 uVar2;
  ulong extraout_x1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0xa0))();
  (**(code **)(*in_x0 + 0xa8))();
  uVar2 = (**(code **)(*in_x0 + 0xb0))();
                    /* WARNING: Could not recover jumptable at 0x00cbd594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,0,extraout_x1 & 0xffffffff,uVar2);
  return;
}


