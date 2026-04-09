// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelFlush
// Entry Point: 00c7a158
// Size: 212 bytes
// Signature: undefined __thiscall ChannelFlush(BufferedTransformation * this, basic_string * param_1, bool param_2, int param_3, bool param_4)


/* CryptoPP::BufferedTransformation::ChannelFlush(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, int, bool) */

uint __thiscall
CryptoPP::BufferedTransformation::ChannelFlush
          (BufferedTransformation *this,basic_string *param_1,bool param_2,int param_3,bool param_4)

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
    uVar3 = (**(code **)(*(long *)this + 0x78))(this,param_2,param_3,param_4);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return uVar3 & 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (NoChannelSupport *)__cxa_allocate_exception(0x28,param_1,param_2,param_3);
                    /* try { // try from 00c7a1f0 to 00c7a1fb has its CatchHandler @ 00c7a250 */
  (**(code **)(*(long *)this + 0x18))(abStack_50,this);
                    /* try { // try from 00c7a200 to 00c7a227 has its CatchHandler @ 00c7a22c */
  NoChannelSupport::NoChannelSupport(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&NoChannelSupport::typeinfo,Exception::~Exception);
}


