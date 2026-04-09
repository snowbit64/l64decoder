// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoundPlayer
// Entry Point: 008bb8e0
// Size: 460 bytes
// Signature: undefined __thiscall SoundPlayer(SoundPlayer * this, char * param_1, char * param_2, char * param_3, char * param_4, char * param_5, char * param_6, char * param_7, uint param_8)


/* SoundPlayer::SoundPlayer(char const*, char const*, char const*, char const*, char const*, char
   const*, char const*, unsigned int) */

void __thiscall
SoundPlayer::SoundPlayer
          (SoundPlayer *this,char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,uint param_8)

{
  Thread *this_00;
  
  Entity::Entity((Entity *)this,param_1,true);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined ***)this = &PTR__SoundPlayer_00fddca8;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
                    /* try { // try from 008bb994 to 008bb99f has its CatchHandler @ 008bbacc */
  Mutex::Mutex((Mutex *)(this + 0x110),true);
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
                    /* try { // try from 008bb9c0 to 008bb9cb has its CatchHandler @ 008bbac4 */
  Mutex::Mutex((Mutex *)(this + 0x168),true);
                    /* try { // try from 008bb9d0 to 008bb9df has its CatchHandler @ 008bbabc */
  Event::Event((Event *)(this + 400),false,false);
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x40000000000;
                    /* try { // try from 008bb9f4 to 008bba57 has its CatchHandler @ 008bbad4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x40));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x58));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x70));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x88));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0xa0));
  *(undefined2 *)(this + 0x108) = 0;
  *(undefined2 *)(this + 0x3c) = 0;
  *(uint *)(this + 0x104) = param_8;
  *(undefined2 *)(this + 0xd8) = 1;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 008bba5c to 008bba5f has its CatchHandler @ 008bbaac */
  Thread::Thread(this_00);
  *(Thread **)(this + 0xe0) = this_00;
                    /* try { // try from 008bba64 to 008bba8b has its CatchHandler @ 008bbad4 */
  Thread::start(this_00,loadingThreadStart,this,0xffffffff,"SoundPlayerLoading",2,0x80000);
  return;
}


