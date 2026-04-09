// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00aaaa5c
// Size: 8 bytes
// Signature: undefined __thiscall resize(NullConsoleWindow * this, uint param_1, uint param_2)


/* NullConsoleWindow::resize(unsigned int, unsigned int) */

void __thiscall NullConsoleWindow::resize(NullConsoleWindow *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x10) = param_1;
  *(uint *)(this + 0x14) = param_2;
  return;
}


