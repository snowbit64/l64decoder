// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Get
// Entry Point: 00c7a510
// Size: 108 bytes
// Signature: undefined __thiscall Get(BufferedTransformation * this, uchar * param_1)


/* CryptoPP::BufferedTransformation::Get(unsigned char&) */

void __thiscall CryptoPP::BufferedTransformation::Get(BufferedTransformation *this,uchar *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(*(long *)this + 0x160))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(*(long *)this + 0x160))(this);
                    /* WARNING: Could not recover jumptable at 0x00c7a558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c7a578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))(this,param_1,1);
  return;
}


