// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EC2N
// Entry Point: 00ccfb1c
// Size: 368 bytes
// Signature: undefined __thiscall EC2N(EC2N * this, BufferedTransformation * param_1)


/* CryptoPP::EC2N::EC2N(CryptoPP::BufferedTransformation&) */

void __thiscall CryptoPP::EC2N::EC2N(EC2N *this,BufferedTransformation *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uStack_b4;
  SecBlock aSStack_b0 [8];
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  undefined **local_90;
  undefined **ppuStack_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__EC2N_01005c90;
  *(undefined ***)(this + 8) = &PTR__EC2N_01005d50;
  uVar2 = BERDecodeGF2NP(param_1);
  *(undefined8 *)(this + 0x10) = uVar2;
                    /* try { // try from 00ccfb70 to 00ccfb77 has its CatchHandler @ 00ccfcc8 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x18));
                    /* try { // try from 00ccfb7c to 00ccfb83 has its CatchHandler @ 00ccfcc0 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x38));
  *(undefined ***)(this + 0x58) = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00ccfb9c to 00ccfba3 has its CatchHandler @ 00ccfcb8 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x60));
                    /* try { // try from 00ccfba8 to 00ccfbab has its CatchHandler @ 00ccfca8 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x80));
  this[0xa0] = (EC2N)0x1;
                    /* try { // try from 00ccfbb4 to 00ccfbc3 has its CatchHandler @ 00ccfca0 */
  BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_90,param_1,'0');
  local_90 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_88 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00ccfbdc to 00ccfbff has its CatchHandler @ 00ccfcd0 */
  GF2NP::BERDecodeElement
            (*(GF2NP **)(this + 0x10),(BufferedTransformation *)&local_90,
             (PolynomialMod2 *)(this + 0x18));
  GF2NP::BERDecodeElement
            (*(GF2NP **)(this + 0x10),(BufferedTransformation *)&local_90,
             (PolynomialMod2 *)(this + 0x38));
  uVar3 = BERGeneralDecoder::EndReached();
  if ((uVar3 & 1) == 0) {
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_a8 = 0xffffffffffffffff;
                    /* try { // try from 00ccfc10 to 00ccfc1f has its CatchHandler @ 00ccfc90 */
    BERDecodeBitString((BufferedTransformation *)&local_90,aSStack_b0,&uStack_b4);
    uVar3 = local_a8;
    if (local_a0 <= local_a8) {
      uVar3 = local_a0;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)((long)local_98 + (uVar3 - 1)) = 0;
    }
                    /* try { // try from 00ccfc48 to 00ccfc4b has its CatchHandler @ 00ccfc8c */
    UnalignedDeallocate(local_98);
  }
                    /* try { // try from 00ccfc4c to 00ccfc53 has its CatchHandler @ 00ccfcd0 */
  BERGeneralDecoder::MessageEnd();
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_90);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


