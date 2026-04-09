// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Sample
// Entry Point: 008b2b60
// Size: 4 bytes
// Signature: undefined __thiscall ~Sample(Sample * this)


/* non-virtual thunk to Sample::~Sample() */

void __thiscall Sample::~Sample(Sample *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8b2b64);
  (*pcVar1)();
}


