// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKeyImpl
// Entry Point: 00ca8684
// Size: 220 bytes
// Signature: undefined __thiscall ~DL_PrivateKeyImpl(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::~DL_PrivateKeyImpl() */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this)

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
  *(undefined ***)(this + 0x250) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x270);
  uVar1 = *(ulong *)(this + 0x260);
  if (*(ulong *)(this + 0x268) <= *(ulong *)(this + 0x260)) {
    uVar1 = *(ulong *)(this + 0x268);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca8700 to 00ca8703 has its CatchHandler @ 00ca8760 */
  UnalignedDeallocate(pvVar2);
  lVar3 = in_x1[1];
  *(long *)(this + 8) = lVar3;
  *(long *)(this + 0x10) = in_x1[0xc];
  *(long *)((long)plVar4 + *(long *)(lVar3 + -0x18)) = in_x1[0xd];
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x60));
  lVar3 = in_x1[2];
  *(long *)(this + 8) = lVar3;
  *(long *)(this + 0x10) = in_x1[10];
  *(long *)((long)plVar4 + *(long *)(lVar3 + -0x18)) = in_x1[0xb];
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x18));
  return;
}


