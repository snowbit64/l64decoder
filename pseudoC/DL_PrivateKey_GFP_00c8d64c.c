// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_GFP
// Entry Point: 00c8d64c
// Size: 148 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_GFP(DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this)


/* virtual thunk to
   CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PrivateKey_GFP() */

void __thiscall
CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PrivateKey_GFP
          (DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  
  puVar1 = (undefined8 *)(this + *(long *)(*(long *)this + -0x18));
  *puVar1 = 0xff7f60;
  pvVar3 = (void *)puVar1[0x2c];
  puVar1[1] = 0xff7ff8;
  puVar1[2] = 0xff80d8;
  uVar2 = puVar1[0x2a];
  if ((ulong)puVar1[0x2b] <= (ulong)puVar1[0x2a]) {
    uVar2 = puVar1[0x2b];
  }
  puVar1[0x28] = &PTR__Integer_0100c890;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)((long)pvVar3 + uVar2 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8d6c0 to 00c8d6c3 has its CatchHandler @ 00c8d6e0 */
  UnalignedDeallocate(pvVar3);
  DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *
             )(puVar1 + 1));
  return;
}


