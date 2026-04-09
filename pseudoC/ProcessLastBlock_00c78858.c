// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessLastBlock
// Entry Point: 00c78858
// Size: 284 bytes
// Signature: undefined __thiscall ProcessLastBlock(StreamTransformation * this, uchar * param_1, ulong param_2, uchar * param_3, ulong param_4)


/* CryptoPP::StreamTransformation::ProcessLastBlock(unsigned char*, unsigned long, unsigned char
   const*, unsigned long) */

ulong __thiscall
CryptoPP::StreamTransformation::ProcessLastBlock
          (StreamTransformation *this,uchar *param_1,ulong param_2,uchar *param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  NotImplemented *this_00;
  undefined8 *puVar4;
  char acStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0x28))();
  if ((uVar3 & 0xffffffff) == param_4) {
    (**(code **)(*(long *)this + 0x48))(this,param_1,param_3,param_4);
  }
  else {
    bVar1 = param_4 != 0;
    param_4 = param_2;
    if (bVar1) {
      this_00 = (NotImplemented *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c78910 to 00c7891b has its CatchHandler @ 00c789c0 */
      (**(code **)(*(long *)this + 0x18))(acStack_78,this);
                    /* try { // try from 00c7891c to 00c7892b has its CatchHandler @ 00c789a8 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_78);
      local_50 = puVar4[2];
      uStack_58 = puVar4[1];
      local_60 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00c78948 to 00c7896f has its CatchHandler @ 00c78974 */
      NotImplemented::NotImplemented(this_00,(basic_string *)&local_60);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&NotImplemented::typeinfo,Exception::~Exception);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


