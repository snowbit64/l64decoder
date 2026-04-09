// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a05b18
// Size: 136 bytes
// Signature: undefined __cdecl init(uint param_1, float * param_2, INFO_RENDERING param_3, char * param_4)


/* RenderArgs::init(unsigned int, float const*, RenderArgs::INFO_RENDERING, char const*) */

void RenderArgs::init(uint param_1,float *param_2,INFO_RENDERING param_3,char *param_4)

{
  TransformArgs *this;
  undefined4 uVar1;
  
  this = (TransformArgs *)(ulong)param_1;
  TransformArgs::init(this,(bool)((byte)((uint)param_2 >> 3) & 1));
  uVar1 = *(undefined4 *)(ulong)param_3;
  *(uint *)(this + 0x3a8) = (uint)param_2;
  *(int *)(this + 0x3ac) = (int)param_4;
  *(undefined4 *)(this + 0x590) = uVar1;
  uVar1 = ((undefined4 *)(ulong)param_3)[1];
  this[0x3b0] = (TransformArgs)0x0;
  *(undefined4 *)(this + 0x594) = uVar1;
  *(undefined4 *)(this + 0x550) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x560) = 0;
  *(undefined8 *)(this + 0x558) = 0;
  *(undefined8 *)(this + 0x570) = 0;
  *(undefined8 *)(this + 0x568) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x578));
  return;
}


