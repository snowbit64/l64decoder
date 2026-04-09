// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ApplicationDesc
// Entry Point: 006deb24
// Size: 160 bytes
// Signature: undefined __thiscall ApplicationDesc(ApplicationDesc * this, ApplicationDesc * param_1)


/* ApplicationDesc::ApplicationDesc(ApplicationDesc const&) */

void __thiscall ApplicationDesc::ApplicationDesc(ApplicationDesc *this,ApplicationDesc *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 8));
                    /* try { // try from 006deb60 to 006deb6b has its CatchHandler @ 006dec44 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x20));
                    /* try { // try from 006deb74 to 006deb7b has its CatchHandler @ 006dec24 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x38));
                    /* try { // try from 006deb84 to 006deb8b has its CatchHandler @ 006dec04 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x50));
                    /* try { // try from 006deb94 to 006deb97 has its CatchHandler @ 006debc4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x80) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xb0) = uVar3;
  *(undefined8 *)(this + 200) = uVar2;
  *(undefined8 *)(this + 0xc0) = uVar1;
  *(undefined8 *)(this + 0x98) = uVar7;
  *(undefined8 *)(this + 0x90) = uVar6;
  *(undefined8 *)(this + 0xa8) = uVar5;
  *(undefined8 *)(this + 0xa0) = uVar4;
  return;
}


