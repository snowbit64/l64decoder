// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderWindow
// Entry Point: 00aaa6ac
// Size: 68 bytes
// Signature: undefined __thiscall createRenderWindow(NullConsoleDevice * this, RenderWindowDesc * param_1)


/* NullConsoleDevice::createRenderWindow(RenderWindowDesc&) */

NullConsoleWindow * __thiscall
NullConsoleDevice::createRenderWindow(NullConsoleDevice *this,RenderWindowDesc *param_1)

{
  NullConsoleWindow *this_00;
  
  this_00 = (NullConsoleWindow *)operator_new(0xa8);
                    /* try { // try from 00aaa6d0 to 00aaa6d7 has its CatchHandler @ 00aaa6f0 */
  NullConsoleWindow::NullConsoleWindow(this_00,param_1);
  *(NullConsoleWindow **)(this + 0x10) = this_00;
  return this_00;
}


