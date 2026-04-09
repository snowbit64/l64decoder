// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelMessageSeriesEnd
// Entry Point: 00c7a264
// Size: 208 bytes
// Signature: undefined __thiscall ChannelMessageSeriesEnd(BufferedTransformation * this, basic_string * param_1, int param_2, bool param_3)


/* CryptoPP::BufferedTransformation::ChannelMessageSeriesEnd(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, bool) */

uint __thiscall
CryptoPP::BufferedTransformation::ChannelMessageSeriesEnd
          (BufferedTransformation *this,basic_string *param_1,int param_2,bool param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  NoChannelSupport *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)(*(byte *)param_1 >> 1);
  if ((*(byte *)param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 2);
  }
  if (uVar1 == 0) {
    uVar3 = (**(code **)(*(long *)this + 0x80))(this,param_2,param_3);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return uVar3 & 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (NoChannelSupport *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7a2f8 to 00c7a303 has its CatchHandler @ 00c7a358 */
  (**(code **)(*(long *)this + 0x18))(abStack_50,this);
                    /* try { // try from 00c7a308 to 00c7a32f has its CatchHandler @ 00c7a334 */
  NoChannelSupport::NoChannelSupport(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&NoChannelSupport::typeinfo,Exception::~Exception);
}


