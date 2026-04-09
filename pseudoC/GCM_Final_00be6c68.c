// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GCM_Final
// Entry Point: 00be6c68
// Size: 360 bytes
// Signature: undefined __thiscall ~GCM_Final(GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,true> * this)


/* CryptoPP::GCM_Final<CryptoPP::Rijndael, (CryptoPP::GCM_TablesOption)0, true>::~GCM_Final() */

void __thiscall
CryptoPP::GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,true>::~GCM_Final
          (GCM_Final<CryptoPP::Rijndael,(CryptoPP::GCM_TablesOption)0,true> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__GCM_Final_00fec368;
  *(undefined ***)(this + 8) = &PTR__GCM_Final_00fec4e0;
  uVar1 = *(ulong *)(this + 0x128);
  if (*(ulong *)(this + 0x130) <= *(ulong *)(this + 0x128)) {
    uVar1 = *(ulong *)(this + 0x130);
  }
  *(undefined ***)(this + 0x10) = &PTR__GCM_Final_00fec590;
  pvVar2 = *(void **)(this + 0x138);
  *(undefined ***)(this + 0xe8) = &PTR__Base_0100fe98;
  *(undefined ***)(this + 0xf0) = &PTR__Base_0100ff48;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be6cd0 to 00be6cd3 has its CatchHandler @ 00be6ddc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x118);
  uVar1 = *(ulong *)(this + 0x108);
  if (*(ulong *)(this + 0x110) <= *(ulong *)(this + 0x108)) {
    uVar1 = *(ulong *)(this + 0x110);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00be6cfc to 00be6cff has its CatchHandler @ 00be6dd8 */
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
                    /* try { // try from 00be6d70 to 00be6d73 has its CatchHandler @ 00be6dd4 */
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
                    /* try { // try from 00be6dc0 to 00be6dc3 has its CatchHandler @ 00be6dd0 */
  UnalignedDeallocate(pvVar2);
  return;
}


