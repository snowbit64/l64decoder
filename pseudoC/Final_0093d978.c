// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Final
// Entry Point: 0093d978
// Size: 64 bytes
// Signature: undefined __thiscall Final(HashTransformation * this, uchar * param_1)


/* CryptoPP::HashTransformation::Final(unsigned char*) */

void __thiscall CryptoPP::HashTransformation::Final(HashTransformation *this,uchar *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x0093d9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x80))(this,param_1,uVar1);
  return;
}


