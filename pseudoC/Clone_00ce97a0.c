// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00ce97a0
// Size: 84 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GF2NPP::Clone() const */

undefined8 * CryptoPP::GF2NPP::Clone(void)

{
  undefined4 uVar1;
  GF2NP *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xa0);
                    /* try { // try from 00ce97bc to 00ce97c3 has its CatchHandler @ 00ce97f4 */
  GF2NP::GF2NP((GF2NP *)this,in_x0);
  uVar1 = *(undefined4 *)(in_x0 + 0x9c);
  *(undefined8 *)((long)this + 0x94) = *(undefined8 *)(in_x0 + 0x94);
  *(undefined4 *)((long)this + 0x9c) = uVar1;
  *this = &PTR__QuotientRing_01009690;
  return this;
}


