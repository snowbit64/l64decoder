// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00ce982c
// Size: 52 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GF2NP::Clone() const */

GF2NP * CryptoPP::GF2NP::Clone(void)

{
  GF2NP *in_x0;
  GF2NP *this;
  
  this = (GF2NP *)operator_new(0x98);
                    /* try { // try from 00ce9848 to 00ce984f has its CatchHandler @ 00ce9860 */
  GF2NP(this,in_x0);
  return this;
}


