// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00d1a614
// Size: 236 bytes
// Signature: undefined __thiscall GenerateBlock(BlockingRng * this, uchar * param_1, ulong param_2)


/* CryptoPP::BlockingRng::GenerateBlock(unsigned char*, unsigned long) */

void __thiscall CryptoPP::BlockingRng::GenerateBlock(BlockingRng *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  OS_RNG_Err *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  piVar3 = (int *)this;
  if (param_2 != 0) {
    do {
      piVar3 = (int *)__read_chk(*(undefined4 *)(this + 8),param_1,param_2,0xffffffffffffffff);
      if ((long)piVar3 < 0) {
        piVar3 = (int *)__errno();
        if ((*piVar3 != 4) && (*piVar3 != 0xb)) {
          this_00 = (OS_RNG_Err *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1a69c to 00d1a6ab has its CatchHandler @ 00d1a724 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)abStack_50,"read /dev/random");
                    /* try { // try from 00d1a6b0 to 00d1a6d7 has its CatchHandler @ 00d1a700 */
          OS_RNG_Err::OS_RNG_Err(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this_00,&OS_RNG_Err::typeinfo,Exception::~Exception);
        }
      }
      else {
        param_2 = param_2 - (long)piVar3;
        if (param_2 == 0) break;
        param_1 = param_1 + (long)piVar3;
        uVar2 = sleep(1);
        piVar3 = (int *)(ulong)uVar2;
      }
    } while (param_2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar3);
  }
  return;
}


