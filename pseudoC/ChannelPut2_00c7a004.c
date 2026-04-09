// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPut2
// Entry Point: 00c7a004
// Size: 212 bytes
// Signature: undefined __thiscall ChannelPut2(BufferedTransformation * this, basic_string * param_1, uchar * param_2, ulong param_3, int param_4, bool param_5)


/* CryptoPP::BufferedTransformation::ChannelPut2(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char const*,
   unsigned long, int, bool) */

void __thiscall
CryptoPP::BufferedTransformation::ChannelPut2
          (BufferedTransformation *this,basic_string *param_1,uchar *param_2,ulong param_3,
          int param_4,bool param_5)

{
  ulong uVar1;
  long lVar2;
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
    (**(code **)(*(long *)this + 0x38))(this,param_2,param_3,param_4,param_5);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (NoChannelSupport *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7a09c to 00c7a0a7 has its CatchHandler @ 00c7a0fc */
  (**(code **)(*(long *)this + 0x18))(abStack_50,this);
                    /* try { // try from 00c7a0ac to 00c7a0d3 has its CatchHandler @ 00c7a0d8 */
  NoChannelSupport::NoChannelSupport(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&NoChannelSupport::typeinfo,Exception::~Exception);
}


