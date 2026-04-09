// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: add
// Entry Point: 00be5afc
// Size: 32 bytes
// Signature: undefined __thiscall add(ShaHash * this, uchar * param_1, uint param_2)


/* ShaHash::add(unsigned char const*, unsigned int) */

void __thiscall ShaHash::add(ShaHash *this,uchar *param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(this + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00be5b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2);
  return;
}


