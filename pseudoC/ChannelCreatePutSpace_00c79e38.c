// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelCreatePutSpace
// Entry Point: 00c79e38
// Size: 196 bytes
// Signature: undefined __thiscall ChannelCreatePutSpace(BufferedTransformation * this, basic_string * param_1, ulong * param_2)


/* CryptoPP::BufferedTransformation::ChannelCreatePutSpace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long&) */

void __thiscall
CryptoPP::BufferedTransformation::ChannelCreatePutSpace
          (BufferedTransformation *this,basic_string *param_1,ulong *param_2)

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
    (**(code **)(*(long *)this + 0x28))(this,param_2);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (NoChannelSupport *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c79ec0 to 00c79ecb has its CatchHandler @ 00c79f20 */
  (**(code **)(*(long *)this + 0x18))(abStack_50,this);
                    /* try { // try from 00c79ed0 to 00c79ef7 has its CatchHandler @ 00c79efc */
  NoChannelSupport::NoChannelSupport(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&NoChannelSupport::typeinfo,Exception::~Exception);
}


