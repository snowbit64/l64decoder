// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyPoint
// Entry Point: 00cd0a64
// Size: 668 bytes
// Signature: undefined __thiscall VerifyPoint(EC2N * this, EC2NPoint * param_1)


/* CryptoPP::EC2N::VerifyPoint(CryptoPP::EC2NPoint const&) const */

uint __thiscall CryptoPP::EC2N::VerifyPoint(EC2N *this,EC2NPoint *param_1)

{
  long lVar1;
  uint uVar2;
  PolynomialMod2 aPStack_148 [8];
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  PolynomialMod2 aPStack_108 [8];
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  PolynomialMod2 aPStack_e8 [8];
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  PolynomialMod2 aPStack_c8 [8];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  PolynomialMod2 aPStack_a8 [8];
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  PolynomialMod2 aPStack_88 [8];
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  PolynomialMod2 aPStack_68 [8];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0x48] == (EC2NPoint)0x0) {
    uVar2 = PolynomialMod2::BitCount();
    if ((*(uint *)(*(long *)(this + 0x10) + 0x90) < uVar2) ||
       (uVar2 = PolynomialMod2::BitCount(), *(uint *)(*(long *)(this + 0x10) + 0x90) < uVar2)) {
      uVar2 = 0;
    }
    else {
      PolynomialMod2::Xor((PolynomialMod2 *)(param_1 + 8));
                    /* try { // try from 00cd0af0 to 00cd0aff has its CatchHandler @ 00cd0db0 */
      PolynomialMod2::Times(aPStack_108);
                    /* try { // try from 00cd0b00 to 00cd0b0f has its CatchHandler @ 00cd0d94 */
      PolynomialMod2::Times(aPStack_e8);
                    /* try { // try from 00cd0b14 to 00cd0b1f has its CatchHandler @ 00cd0d8c */
      PolynomialMod2::Xor(aPStack_c8);
                    /* try { // try from 00cd0b20 to 00cd0b2f has its CatchHandler @ 00cd0d84 */
      PolynomialMod2::Xor((PolynomialMod2 *)(param_1 + 8));
                    /* try { // try from 00cd0b30 to 00cd0b3f has its CatchHandler @ 00cd0d50 */
      PolynomialMod2::Times(aPStack_148);
                    /* try { // try from 00cd0b40 to 00cd0b4f has its CatchHandler @ 00cd0d40 */
      PolynomialMod2::Xor(aPStack_a8);
                    /* try { // try from 00cd0b58 to 00cd0b63 has its CatchHandler @ 00cd0d30 */
      PolynomialMod2::Modulo(aPStack_88);
                    /* try { // try from 00cd0b64 to 00cd0b6b has its CatchHandler @ 00cd0d20 */
      uVar2 = PolynomialMod2::operator!(aPStack_68);
      if (uStack_58 <= local_60) {
        local_60 = uStack_58;
      }
      for (; local_60 != 0; local_60 = local_60 - 1) {
        *(undefined4 *)((long)local_50 + local_60 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd0b98 to 00cd0b9b has its CatchHandler @ 00cd0d1c */
      UnalignedDeallocate(local_50);
      if (uStack_78 <= local_80) {
        local_80 = uStack_78;
      }
      for (; local_80 != 0; local_80 = local_80 - 1) {
        *(undefined4 *)((long)local_70 + local_80 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd0bc4 to 00cd0bc7 has its CatchHandler @ 00cd0d18 */
      UnalignedDeallocate(local_70);
      if (uStack_118 <= local_120) {
        local_120 = uStack_118;
      }
      for (; local_120 != 0; local_120 = local_120 - 1) {
        *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd0bf0 to 00cd0bf3 has its CatchHandler @ 00cd0d14 */
      UnalignedDeallocate(local_110);
      if (uStack_138 <= local_140) {
        local_140 = uStack_138;
      }
      for (; local_140 != 0; local_140 = local_140 - 1) {
        *(undefined4 *)((long)local_130 + local_140 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd0c1c to 00cd0c1f has its CatchHandler @ 00cd0d10 */
      UnalignedDeallocate(local_130);
      if (uStack_98 <= local_a0) {
        local_a0 = uStack_98;
      }
      for (; local_a0 != 0; local_a0 = local_a0 - 1) {
        *(undefined4 *)((long)local_90 + local_a0 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd0c48 to 00cd0c4b has its CatchHandler @ 00cd0d0c */
      UnalignedDeallocate(local_90);
      if (uStack_b8 <= local_c0) {
        local_c0 = uStack_b8;
      }
      for (; local_c0 != 0; local_c0 = local_c0 - 1) {
        *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd0c74 to 00cd0c77 has its CatchHandler @ 00cd0d08 */
      UnalignedDeallocate(local_b0);
      if (uStack_d8 <= local_e0) {
        local_e0 = uStack_d8;
      }
      for (; local_e0 != 0; local_e0 = local_e0 - 1) {
        *(undefined4 *)((long)local_d0 + local_e0 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd0ca0 to 00cd0ca3 has its CatchHandler @ 00cd0d04 */
      UnalignedDeallocate(local_d0);
      if (uStack_f8 <= local_100) {
        local_100 = uStack_f8;
      }
      for (; local_100 != 0; local_100 = local_100 - 1) {
        *(undefined4 *)((long)local_f0 + local_100 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd0ccc to 00cd0ccf has its CatchHandler @ 00cd0d00 */
      UnalignedDeallocate(local_f0);
    }
  }
  else {
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


