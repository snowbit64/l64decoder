// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IDensityPixelSource
// Entry Point: 00b8ca4c
// Size: 128 bytes
// Signature: undefined __thiscall ~IDensityPixelSource(IDensityPixelSource * this)


/* IDensityPixelSource::~IDensityPixelSource() */

void __thiscall IDensityPixelSource::~IDensityPixelSource(IDensityPixelSource *this)

{
  long **pplVar1;
  long **pplVar2;
  
  pplVar1 = *(long ***)(this + 8);
  pplVar2 = *(long ***)(this + 0x10);
  *(undefined ***)this = &PTR__IDensityPixelSource_00fea7a8;
  if (pplVar1 != pplVar2) {
    do {
                    /* try { // try from 00b8ca90 to 00b8ca97 has its CatchHandler @ 00b8cacc */
      (**(code **)(**pplVar1 + 0x10))(*pplVar1,this);
      pplVar1 = pplVar1 + 1;
    } while (pplVar1 != pplVar2);
    pplVar1 = *(long ***)(this + 8);
  }
  if (pplVar1 != (long **)0x0) {
    *(long ***)(this + 0x10) = pplVar1;
    operator_delete(pplVar1);
  }
  operator_delete(this);
  return;
}


