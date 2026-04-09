// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Recover
// Entry Point: 00c7b9f8
// Size: 84 bytes
// Signature: undefined __thiscall Recover(PK_Verifier * this, uchar * param_1, PK_MessageAccumulator * param_2)


/* CryptoPP::PK_Verifier::Recover(unsigned char*, CryptoPP::PK_MessageAccumulator*) const */

undefined  [16] __thiscall
CryptoPP::PK_Verifier::Recover(PK_Verifier *this,uchar *param_1,PK_MessageAccumulator *param_2)

{
  undefined auVar1 [16];
  
                    /* try { // try from 00c7ba14 to 00c7ba17 has its CatchHandler @ 00c7ba4c */
  auVar1 = (**(code **)(*(long *)this + 0x80))();
  if (param_2 != (PK_MessageAccumulator *)0x0) {
    (**(code **)(*(long *)param_2 + 8))(param_2);
  }
  return auVar1;
}


