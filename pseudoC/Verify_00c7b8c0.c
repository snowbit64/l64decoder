// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Verify
// Entry Point: 00c7b8c0
// Size: 68 bytes
// Signature: undefined __thiscall Verify(PK_Verifier * this, PK_MessageAccumulator * param_1)


/* CryptoPP::PK_Verifier::Verify(CryptoPP::PK_MessageAccumulator*) const */

uint __thiscall CryptoPP::PK_Verifier::Verify(PK_Verifier *this,PK_MessageAccumulator *param_1)

{
  uint uVar1;
  
                    /* try { // try from 00c7b8d8 to 00c7b8db has its CatchHandler @ 00c7b904 */
  uVar1 = (**(code **)(*(long *)this + 0x68))();
  if (param_1 != (PK_MessageAccumulator *)0x0) {
    (**(code **)(*(long *)param_1 + 8))(param_1);
  }
  return uVar1 & 1;
}


