// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateIntoBufferedTransformation
// Entry Point: 00d236a0
// Size: 568 bytes
// Signature: undefined __thiscall GenerateIntoBufferedTransformation(X917RNG * this, BufferedTransformation * param_1, basic_string * param_2, ulong param_3)


/* CryptoPP::X917RNG::GenerateIntoBufferedTransformation(CryptoPP::BufferedTransformation&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned long) */

void __thiscall
CryptoPP::X917RNG::GenerateIntoBufferedTransformation
          (X917RNG *this,BufferedTransformation *param_1,basic_string *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  SelfTestFailure *this_00;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  void *__s2;
  clock_t local_78 [3];
  time_t local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    do {
      if (*(long *)(this + 0x88) == 0) {
        local_78[0] = clock();
        uVar7 = (ulong)*(uint *)(this + 0x10);
        if (7 < *(uint *)(this + 0x10)) {
          uVar7 = 8;
        }
        xorbuf(*(uchar **)(this + 0x30),(uchar *)local_78,uVar7);
        local_60 = time((time_t *)0x0);
        uVar7 = (ulong)*(uint *)(this + 0x10);
        lVar6 = *(long *)(this + 0x30) + uVar7;
        if (7 < *(uint *)(this + 0x10)) {
          uVar7 = 8;
        }
        xorbuf((uchar *)(lVar6 - uVar7),(uchar *)&local_60,uVar7);
        (**(code **)(**(long **)(this + 8) + 0x28))
                  (*(long **)(this + 8),*(undefined8 *)(this + 0x30),0,*(undefined8 *)(this + 0x30))
        ;
      }
      else {
        (**(code **)(**(long **)(this + 8) + 0x28))
                  (*(long **)(this + 8),*(undefined8 *)(this + 0x90),0,*(undefined8 *)(this + 0x30))
        ;
        uVar5 = *(int *)(this + 0x10) - 1;
        if (-1 < (int)uVar5) {
          lVar6 = *(long *)(this + 0x90);
          do {
            uVar7 = (ulong)uVar5;
            bVar3 = uVar5 == 0;
            uVar5 = uVar5 - 1;
            uVar1 = *(byte *)(lVar6 + uVar7) + 1;
            *(char *)(lVar6 + uVar7) = (char)uVar1;
            if (bVar3) break;
          } while (uVar1 >> 8 != 0);
        }
      }
      xorbuf(*(uchar **)(this + 0x50),*(uchar **)(this + 0x30),(ulong)*(uint *)(this + 0x10));
      (**(code **)(**(long **)(this + 8) + 0x28))
                (*(long **)(this + 8),*(undefined8 *)(this + 0x50),0,*(undefined8 *)(this + 0x50));
      __s2 = *(void **)(this + 0x50);
      uVar5 = *(uint *)(this + 0x10);
      iVar4 = memcmp(*(void **)(this + 0x70),__s2,(ulong)uVar5);
      if (iVar4 == 0) {
        this_00 = (SelfTestFailure *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d23898 to 00d238a7 has its CatchHandler @ 00d23900 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_78,"X917RNG: Continuous random number generator test failed.");
                    /* try { // try from 00d238ac to 00d238d3 has its CatchHandler @ 00d238d8 */
        SelfTestFailure::SelfTestFailure(this_00,(basic_string *)local_78);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this_00,&SelfTestFailure::typeinfo,Exception::~Exception);
      }
      uVar1 = (uint)param_3;
      if (uVar5 <= param_3) {
        uVar1 = uVar5;
      }
      (**(code **)(*(long *)param_1 + 0x130))(param_1,param_2,__s2,(ulong)uVar1,0,1);
      param_3 = param_3 - uVar1;
      memcpy(*(void **)(this + 0x70),*(void **)(this + 0x50),(ulong)*(uint *)(this + 0x10));
      xorbuf(*(uchar **)(this + 0x50),*(uchar **)(this + 0x30),(ulong)*(uint *)(this + 0x10));
      (**(code **)(**(long **)(this + 8) + 0x28))
                (*(long **)(this + 8),*(undefined8 *)(this + 0x50),0,*(undefined8 *)(this + 0x50));
    } while (param_3 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


