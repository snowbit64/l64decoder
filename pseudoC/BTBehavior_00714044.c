// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BTBehavior
// Entry Point: 00714044
// Size: 4 bytes
// Signature: undefined __thiscall ~BTBehavior(BTBehavior * this)


/* BTBehavior::~BTBehavior() */

void __thiscall BTBehavior::~BTBehavior(BTBehavior *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x714048);
  (*pcVar1)();
}


