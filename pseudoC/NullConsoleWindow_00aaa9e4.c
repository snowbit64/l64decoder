// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullConsoleWindow
// Entry Point: 00aaa9e4
// Size: 116 bytes
// Signature: undefined __thiscall ~NullConsoleWindow(NullConsoleWindow * this)


/* NullConsoleWindow::~NullConsoleWindow() */

void __thiscall NullConsoleWindow::~NullConsoleWindow(NullConsoleWindow *this)

{
  NullConsoleWindow NVar1;
  
  *(undefined ***)this = &PTR__NullConsoleWindow_00fe5408;
  if (((byte)this[0x80] & 1) == 0) {
    NVar1 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    NVar1 = this[0x60];
  }
  if (((byte)NVar1 & 1) == 0) {
    NVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    NVar1 = this[0x40];
  }
  if (((byte)NVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  operator_delete(this);
  return;
}


