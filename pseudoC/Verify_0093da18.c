// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Verify
// Entry Point: 0093da18
// Size: 64 bytes
// Signature: undefined __thiscall Verify(HashTransformation * this, uchar * param_1)


/* CryptoPP::HashTransformation::Verify(unsigned char const*) */

void __thiscall CryptoPP::HashTransformation::Verify(HashTransformation *this,uchar *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x0093da54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x90))(this,param_1,uVar1);
  return;
}


