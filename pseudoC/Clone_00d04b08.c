// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00d04b08
// Size: 52 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ModularArithmetic::Clone() const */

ModularArithmetic * CryptoPP::ModularArithmetic::Clone(void)

{
  ModularArithmetic *in_x0;
  ModularArithmetic *this;
  
  this = (ModularArithmetic *)operator_new(0xa8);
                    /* try { // try from 00d04b24 to 00d04b2b has its CatchHandler @ 00d04b3c */
  ModularArithmetic(this,in_x0);
  return this;
}


