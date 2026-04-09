// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_GFP
// Entry Point: 00c8d774
// Size: 148 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_GFP(DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this)


/* CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PrivateKey_GFP() */

void __thiscall
CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PrivateKey_GFP
          (DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined8 *)(this + 8) = 0xff7ff8;
  uVar1 = *(ulong *)(this + 0x150);
  if (*(ulong *)(this + 0x158) <= *(ulong *)(this + 0x150)) {
    uVar1 = *(ulong *)(this + 0x158);
  }
  *(undefined8 *)(this + 0x10) = 0xff80d8;
  *(undefined ***)(this + 0x140) = &PTR__Integer_0100c890;
  *(undefined8 *)this = 0xff7f60;
  pvVar2 = *(void **)(this + 0x160);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8d7e0 to 00c8d7e3 has its CatchHandler @ 00c8d808 */
  UnalignedDeallocate(pvVar2);
  DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *
             )(this + 8));
  operator_delete(this);
  return;
}


