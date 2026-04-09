// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: KeyInnerHash
// Entry Point: 00cedd54
// Size: 100 bytes
// Signature: undefined KeyInnerHash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::HMAC_Base::KeyInnerHash() */

void CryptoPP::HMAC_Base::KeyInnerHash(void)

{
  undefined4 uVar1;
  long *in_x0;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(**(code **)(*in_x0 + 0xa8))();
  lVar3 = in_x0[5];
  uVar1 = (**(code **)(*plVar2 + 0x50))();
  (**(code **)(*plVar2 + 0x28))(plVar2,lVar3,uVar1);
  *(undefined *)(in_x0 + 6) = 1;
  return;
}


