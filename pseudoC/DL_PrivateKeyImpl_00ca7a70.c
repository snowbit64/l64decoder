// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKeyImpl
// Entry Point: 00ca7a70
// Size: 216 bytes
// Signature: undefined __thiscall ~DL_PrivateKeyImpl(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::~DL_PrivateKeyImpl() */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::~DL_PrivateKeyImpl
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this)

{
  ulong uVar1;
  void *pvVar2;
  long *in_x1;
  long lVar3;
  long *plVar4;
  
  lVar3 = *in_x1;
  *(long *)this = lVar3;
  plVar4 = (long *)(this + 8);
  *plVar4 = in_x1[0xe];
  *(long *)(this + 0x10) = in_x1[0xf];
  *(long *)(this + *(long *)(lVar3 + -0x18)) = in_x1[0x10];
  *(undefined ***)(this + 0x1d8) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x1f8);
  uVar1 = *(ulong *)(this + 0x1e8);
  if (*(ulong *)(this + 0x1f0) <= *(ulong *)(this + 0x1e8)) {
    uVar1 = *(ulong *)(this + 0x1f0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca7ae8 to 00ca7aeb has its CatchHandler @ 00ca7b48 */
  UnalignedDeallocate(pvVar2);
  lVar3 = in_x1[1];
  *(long *)(this + 8) = lVar3;
  *(long *)(this + 0x10) = in_x1[0xc];
  *(long *)((long)plVar4 + *(long *)(lVar3 + -0x18)) = in_x1[0xd];
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x60));
  lVar3 = in_x1[2];
  *(long *)(this + 8) = lVar3;
  *(long *)(this + 0x10) = in_x1[10];
  *(long *)((long)plVar4 + *(long *)(lVar3 + -0x18)) = in_x1[0xb];
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x18));
  return;
}


