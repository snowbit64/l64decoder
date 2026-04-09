// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move
// Entry Point: 00aaaa64
// Size: 8 bytes
// Signature: undefined __thiscall move(NullConsoleWindow * this, int param_1, int param_2)


/* NullConsoleWindow::move(int, int) */

void __thiscall NullConsoleWindow::move(NullConsoleWindow *this,int param_1,int param_2)

{
  *(int *)(this + 0x24) = param_1;
  *(int *)(this + 0x28) = param_2;
  return;
}


