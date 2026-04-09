// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GCM_Final
// Entry Point: 00be6e10
// Size: 360 bytes
// Signature: undefined __thiscall ~GCM_Final(GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,false> * this)


/* CryptoPP::GCM_Final<CryptoPP::Rijndael, (CryptoPP::GCM_TablesOption)0, false>::~GCM_Final() */

void __thiscall
CryptoPP::GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,false>::~GCM_Final
          (GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,false> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__GCM_Final_00feca00;
  *(undefined ***)(this + 8) = &PTR__GCM_Final_00fecb78;
  uVar1 = *(ulong *)(this + 0x128);
  if (*(ulong *)(this + 0x130) <= *(ulong *)(this + 0x128)) {
    uVar1 = *(ulong *)(this + 0x130);
  }
  *(undefined ***)(this + 0x10) = &PTR__GCM_Final_00fecc28;
  pvVar2 = *(void **)(this + 0x138);
  *(undefined ***)(this + 0xe8) = &PTR__Base_0100fe98;
  *(undefined ***)(this + 0xf0) = &PTR__Base_0100ff48;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be6e78 to 00be6e7b has its CatchHandler @ 00be6f84 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x118);
  uVar1 = *(ulong *)(this + 0x108);
  if (*(ulong *)(this + 0x110) <= *(ulong *)(this + 0x108)) {
    uVar1 = *(ulong *)(this + 0x110);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00be6ea4 to 00be6ea7 has its CatchHandler @ 00be6f80 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0xd8);
  *(undefined ***)this = &PTR__GCM_Base_010090c0;
  *(undefined ***)(this + 8) = &PTR__GCM_Base_01009230;
  *(undefined ***)(this + 0x58) = &PTR__AdditiveCipherTemplate_00ff1438;
  *(undefined ***)(this + 0x10) = &PTR__GCM_Base_010092e0;
  *(undefined ***)(this + 0x60) = &PTR__AdditiveCipherTemplate_00ff1588;
  *(undefined ***)(this + 0x90) = &PTR__AdditiveCipherTemplate_00ff1620;
  uVar1 = *(ulong *)(this + 200);
  if (*(ulong *)(this + 0xd0) <= *(ulong *)(this + 200)) {
    uVar1 = *(ulong *)(this + 0xd0);
  }
  *(undefined ***)(this + 0xb8) = &PTR__AdditiveCipherTemplate_00ff16a0;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be6f18 to 00be6f1b has its CatchHandler @ 00be6f7c */
  UnalignedDeallocate(pvVar2);
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)(this + 0x58));
  pvVar2 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__AuthenticatedSymmetricCipherBase_00feebe0;
  *(undefined ***)(this + 8) = &PTR__AuthenticatedSymmetricCipherBase_00feed28;
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  *(undefined ***)(this + 0x10) = &PTR__AuthenticatedSymmetricCipherBase_00feedd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be6f68 to 00be6f6b has its CatchHandler @ 00be6f78 */
  UnalignedDeallocate(pvVar2);
  return;
}


