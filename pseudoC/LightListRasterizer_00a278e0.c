// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LightListRasterizer
// Entry Point: 00a278e0
// Size: 172 bytes
// Signature: undefined __thiscall LightListRasterizer(LightListRasterizer * this, IRenderDevice * param_1, ThreadPool * param_2)


/* LightListRasterizer::LightListRasterizer(IRenderDevice*, ThreadPool*) */

void __thiscall
LightListRasterizer::LightListRasterizer
          (LightListRasterizer *this,IRenderDevice *param_1,ThreadPool *param_2)

{
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x70) = 0;
                    /* try { // try from 00a2791c to 00a27923 has its CatchHandler @ 00a279ac */
  ThreadPoolTaskManager::ThreadPoolTaskManager((ThreadPoolTaskManager *)(this + 0x90),param_2);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined ***)(this + 0x108) = &PTR__Task_00fde908;
                    /* try { // try from 00a27940 to 00a2794f has its CatchHandler @ 00a2798c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x118));
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)(this + 0x108) = &PTR__Task_00fe3190;
  return;
}


