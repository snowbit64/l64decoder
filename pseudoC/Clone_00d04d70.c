// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00d04d70
// Size: 104 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::MontgomeryRepresentation::Clone() const */

undefined8 * CryptoPP::MontgomeryRepresentation::Clone(void)

{
  ModularArithmetic *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xf8);
                    /* try { // try from 00d04d90 to 00d04d97 has its CatchHandler @ 00d04df8 */
  ModularArithmetic::ModularArithmetic((ModularArithmetic *)this,in_x0);
  *this = &PTR__MontgomeryRepresentation_0100ca00;
                    /* try { // try from 00d04db0 to 00d04db7 has its CatchHandler @ 00d04de8 */
  Integer::Integer((Integer *)(this + 0x15),(Integer *)(in_x0 + 0xa8));
                    /* try { // try from 00d04dc0 to 00d04dc3 has its CatchHandler @ 00d04dd8 */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::SecBlock
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
             (this + 0x1b),(SecBlock *)(in_x0 + 0xd8));
  return this;
}


