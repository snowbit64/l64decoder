// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullConsoleWindow
// Entry Point: 00aaa888
// Size: 156 bytes
// Signature: undefined __thiscall NullConsoleWindow(NullConsoleWindow * this, RenderWindowDesc * param_1)


/* NullConsoleWindow::NullConsoleWindow(RenderWindowDesc const&) */

void __thiscall
NullConsoleWindow::NullConsoleWindow(NullConsoleWindow *this,RenderWindowDesc *param_1)

{
  NullConsoleWindow NVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined ***)this = &PTR__NullConsoleWindow_00fe5408;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  NVar1 = *(NullConsoleWindow *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x28) = uVar2;
  this[0x38] = NVar1;
  *(undefined8 *)(this + 0x20) = uVar6;
  *(undefined8 *)(this + 0x18) = uVar5;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 8) = uVar3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x40));
  this[0x58] = *(NullConsoleWindow *)(param_1 + 0x50);
                    /* try { // try from 00aaa8e8 to 00aaa8ef has its CatchHandler @ 00aaa954 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x60));
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x70);
                    /* try { // try from 00aaa900 to 00aaa903 has its CatchHandler @ 00aaa924 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x80));
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  this[0xa0] = *(NullConsoleWindow *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x98) = uVar2;
  return;
}


