// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Peek
// Entry Point: 00c7a65c
// Size: 108 bytes
// Signature: undefined __thiscall Peek(BufferedTransformation * this, uchar * param_1)


/* CryptoPP::BufferedTransformation::Peek(unsigned char&) const */

void __thiscall CryptoPP::BufferedTransformation::Peek(BufferedTransformation *this,uchar *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(*(long *)this + 0x168))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(*(long *)this + 0x168))(this);
                    /* WARNING: Could not recover jumptable at 0x00c7a6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xb8))(plVar2,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c7a6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xc0))(this,param_1,1);
  return;
}


