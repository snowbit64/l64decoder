// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessLastBlock
// Entry Point: 00d0b660
// Size: 356 bytes
// Signature: undefined __thiscall ProcessLastBlock(CBC_CTS_Encryption * this, uchar * param_1, ulong param_2, uchar * param_3, ulong param_4)


/* CryptoPP::CBC_CTS_Encryption::ProcessLastBlock(unsigned char*, unsigned long, unsigned char
   const*, unsigned long) */

ulong __thiscall
CryptoPP::CBC_CTS_Encryption::ProcessLastBlock
          (CBC_CTS_Encryption *this,uchar *param_1,ulong param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  InvalidArgument *this_00;
  ulong __n;
  size_t sVar2;
  basic_string abStack_70 [6];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = (ulong)*(uint *)(this + 0x28);
  if (__n < param_4) {
    xorbuf(*(uchar **)(this + 0x30),param_3,__n);
    (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x28))
              ((long *)(*(long *)(this + 0x10) + 8),*(undefined8 *)(this + 0x30),0,
               *(undefined8 *)(this + 0x30));
    param_3 = param_3 + __n;
    memcpy(param_1 + __n,*(void **)(this + 0x30),param_4 - __n);
    sVar2 = param_4 - __n;
  }
  else {
    if (*(long *)(this + 0x58) == 0) {
      this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0b784 to 00d0b793 has its CatchHandler @ 00d0b7e8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_70,"CBC_Encryption: message is too short for ciphertext stealing");
                    /* try { // try from 00d0b798 to 00d0b7bf has its CatchHandler @ 00d0b7c4 */
      InvalidArgument::InvalidArgument(this_00,abStack_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    memcpy(param_1,*(void **)(this + 0x30),param_4);
    param_1 = *(uchar **)(this + 0x58);
    sVar2 = param_4;
  }
  xorbuf(*(uchar **)(this + 0x30),param_3,sVar2);
  (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x28))
            ((long *)(*(long *)(this + 0x10) + 8),*(undefined8 *)(this + 0x30),0,
             *(undefined8 *)(this + 0x30));
  memcpy(param_1,*(void **)(this + 0x30),__n);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


