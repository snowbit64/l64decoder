// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetPublicElement
// Entry Point: 00cb2520
// Size: 88 bytes
// Signature: undefined GetPublicElement(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>::GetPublicElement() const */

void CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>::GetPublicElement(void)

{
  long *in_x0;
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x40))();
  plVar2 = (long *)(**(code **)(*in_x0 + 0x10))();
  uVar3 = (**(code **)(*plVar2 + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00cb2574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar3);
  return;
}


