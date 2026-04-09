// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Flush
// Entry Point: 00c79e18
// Size: 16 bytes
// Signature: undefined __thiscall Flush(BufferedTransformation * this, bool param_1, int param_2, bool param_3)


/* CryptoPP::BufferedTransformation::Flush(bool, int, bool) */

void __thiscall
CryptoPP::BufferedTransformation::Flush
          (BufferedTransformation *this,bool param_1,int param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c79e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))(this,param_1,param_3);
  return;
}


