// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MontgomeryRepresentation
// Entry Point: 00cb5c34
// Size: 160 bytes
// Signature: undefined __thiscall MontgomeryRepresentation(MontgomeryRepresentation * this, MontgomeryRepresentation * param_1)


/* CryptoPP::MontgomeryRepresentation::MontgomeryRepresentation(CryptoPP::MontgomeryRepresentation
   const&) */

void __thiscall
CryptoPP::MontgomeryRepresentation::MontgomeryRepresentation
          (MontgomeryRepresentation *this,MontgomeryRepresentation *param_1)

{
  *(undefined ***)(this + 8) = &PTR__AbstractGroup_010009d8;
  *(MontgomeryRepresentation **)(this + 0x10) = this;
  *(undefined ***)this = &PTR__ModularArithmetic_0100c910;
  Integer::Integer((Integer *)(this + 0x18),(Integer *)(param_1 + 0x18));
                    /* try { // try from 00cb5c84 to 00cb5c8f has its CatchHandler @ 00cb5d08 */
  Integer::Integer((Integer *)(this + 0x48),0,*(ulong *)(param_1 + 0x30));
                    /* try { // try from 00cb5c94 to 00cb5c97 has its CatchHandler @ 00cb5cf8 */
  Integer::Integer((Integer *)(this + 0x78));
  *(undefined ***)this = &PTR__MontgomeryRepresentation_0100ca00;
                    /* try { // try from 00cb5cb0 to 00cb5cb7 has its CatchHandler @ 00cb5ce4 */
  Integer::Integer((Integer *)(this + 0xa8),(Integer *)(param_1 + 0xa8));
                    /* try { // try from 00cb5cc0 to 00cb5cc3 has its CatchHandler @ 00cb5cd4 */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::SecBlock
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
             (this + 0xd8),(SecBlock *)(param_1 + 0xd8));
  return;
}


