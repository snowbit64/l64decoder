// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compress
// Entry Point: 00de913c
// Size: 100 bytes
// Signature: undefined __thiscall Compress(ColourFit * this, void * param_1)


/* squish::ColourFit::Compress(void*) */

void __thiscall squish::ColourFit::Compress(ColourFit *this,void *param_1)

{
  code **ppcVar1;
  
  ppcVar1 = *(code ***)this;
  if (((byte)this[0x10] & 1) != 0) {
    (**ppcVar1)(this,param_1);
    if (*(char *)(*(long *)(this + 8) + 0x144) != '\0') {
      return;
    }
    ppcVar1 = *(code ***)this;
  }
                    /* WARNING: Could not recover jumptable at 0x00de919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*ppcVar1[1])(this,param_1);
  return;
}


