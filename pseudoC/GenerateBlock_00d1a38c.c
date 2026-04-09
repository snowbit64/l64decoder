// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00d1a38c
// Size: 224 bytes
// Signature: undefined __thiscall GenerateBlock(NonblockingRng * this, uchar * param_1, ulong param_2)


/* CryptoPP::NonblockingRng::GenerateBlock(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::NonblockingRng::GenerateBlock(NonblockingRng *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  OS_RNG_Err *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    do {
      lVar2 = __read_chk(*(undefined4 *)(this + 8),param_1,param_2,0xffffffffffffffff);
      if (lVar2 < 0) {
        piVar3 = (int *)__errno();
        if ((*piVar3 != 4) && (*piVar3 != 0xb)) {
          this_00 = (OS_RNG_Err *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1a408 to 00d1a417 has its CatchHandler @ 00d1a490 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)abStack_50,"read /dev/urandom");
                    /* try { // try from 00d1a41c to 00d1a443 has its CatchHandler @ 00d1a46c */
          OS_RNG_Err::OS_RNG_Err(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this_00,&OS_RNG_Err::typeinfo,Exception::~Exception);
        }
      }
      else {
        param_1 = param_1 + lVar2;
        param_2 = param_2 - lVar2;
      }
    } while (param_2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


