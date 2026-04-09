// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxRecoverableLength
// Entry Point: 00cbc938
// Size: 112 bytes
// Signature: undefined MaxRecoverableLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SignatureSchemeBase<CryptoPP::PK_Signer, CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>
   >::MaxRecoverableLength() const */

void CryptoPP::
     DL_SignatureSchemeBase<CryptoPP::PK_Signer,CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>>::
     MaxRecoverableLength(void)

{
  long *in_x0;
  long *plVar1;
  undefined8 uVar2;
  ulong extraout_x1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x90))();
  (**(code **)(*in_x0 + 0x98))();
  uVar2 = (**(code **)(*in_x0 + 0xa0))();
                    /* WARNING: Could not recover jumptable at 0x00cbc9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,0,extraout_x1 & 0xffffffff,uVar2);
  return;
}


