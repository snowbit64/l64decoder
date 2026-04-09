// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKeyImpl
// Entry Point: 00cb0b9c
// Size: 132 bytes
// Signature: undefined __thiscall ~DL_PrivateKeyImpl(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this)


/* non-virtual thunk to
   CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::~DL_PrivateKeyImpl() */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::~DL_PrivateKeyImpl
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined8 *)(this + -8) = 0x10035a0;
  uVar1 = *(ulong *)(this + 0x148);
  if (*(ulong *)(this + 0x150) <= *(ulong *)(this + 0x148)) {
    uVar1 = *(ulong *)(this + 0x150);
  }
  pvVar2 = *(void **)(this + 0x158);
  *(undefined8 *)this = 0x1003638;
  *(undefined8 *)(this + 8) = 0x1003718;
  *(undefined ***)(this + 0x138) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb0c00 to 00cb0c03 has its CatchHandler @ 00cb0c20 */
  UnalignedDeallocate(pvVar2);
  DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *
             )this);
  return;
}


