// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_GFP
// Entry Point: 00c8d4a4
// Size: 140 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_GFP(DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this)


/* CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PrivateKey_GFP() */

void __thiscall
CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::~DL_PrivateKey_GFP
          (DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this)

{
  ulong uVar1;
  void *pvVar2;
  long in_x1;
  long lVar3;
  
  lVar3 = *(long *)(in_x1 + 8);
  *(long *)this = lVar3;
  *(undefined8 *)(this + 8) = *(undefined8 *)(in_x1 + 0x78);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(in_x1 + 0x80);
  *(undefined8 *)(this + *(long *)(lVar3 + -0x18)) = *(undefined8 *)(in_x1 + 0x88);
  *(undefined ***)(this + 0x140) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x160);
  uVar1 = *(ulong *)(this + 0x150);
  if (*(ulong *)(this + 0x158) <= *(ulong *)(this + 0x150)) {
    uVar1 = *(ulong *)(this + 0x158);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8d518 to 00c8d51b has its CatchHandler @ 00c8d530 */
  UnalignedDeallocate(pvVar2);
  DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *
             )(this + 8));
  return;
}


