// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignatureLength
// Entry Point: 00cbbabc
// Size: 180 bytes
// Signature: undefined SignatureLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SignatureSchemeBase<CryptoPP::PK_Verifier,
   CryptoPP::DL_PublicKey<CryptoPP::ECPPoint> >::SignatureLength() const */

long CryptoPP::
     DL_SignatureSchemeBase<CryptoPP::PK_Verifier,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>::
     SignatureLength(void)

{
  long *in_x0;
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x98))();
  plVar6 = in_x0 + 2;
  plVar2 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6);
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  lVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,uVar3);
  plVar1 = (long *)(**(code **)(*in_x0 + 0x98))();
  plVar2 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6);
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar3);
  return lVar5 + lVar4;
}


