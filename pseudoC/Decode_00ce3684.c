// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decode
// Entry Point: 00ce3684
// Size: 392 bytes
// Signature: undefined __thiscall Decode(PolynomialMod2 * this, BufferedTransformation * param_1, ulong param_2)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::PolynomialMod2::Decode(CryptoPP::BufferedTransformation&, unsigned long) */

void __thiscall
CryptoPP::PolynomialMod2::Decode(PolynomialMod2 *this,BufferedTransformation *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  void *__s;
  InvalidArgument *this_00;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  basic_string local_70 [6];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  if (uVar2 < param_2) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ce37cc to 00ce37db has its CatchHandler @ 00ce3834 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_70,"PolynomialMod2: input length is too small");
                    /* try { // try from 00ce37e0 to 00ce3807 has its CatchHandler @ 00ce380c */
    InvalidArgument::InvalidArgument(this_00,local_70);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar2 = param_2 + 3;
  uVar5 = uVar2 >> 2;
  uVar3 = *(ulong *)(this + 0x10);
  __s = *(void **)(this + 0x18);
  if (uVar3 != uVar5) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)((long)__s + uVar3 * 4 + -4) = 0;
    }
    UnalignedDeallocate(__s);
    AllocatorBase<unsigned_int>::CheckSize(uVar5);
    if (uVar2 < 4) {
      *(ulong *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      goto LAB_00ce3738;
    }
    __s = (void *)UnalignedAllocate(uVar2 & 0xfffffffffffffffc);
  }
  *(ulong *)(this + 0x10) = uVar5;
  *(void **)(this + 0x18) = __s;
  if (__s != (void *)0x0) {
    memset(__s,0,uVar2 & 0xfffffffffffffffc);
  }
LAB_00ce3738:
  *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
  if (param_2 != 0) {
    uVar4 = (int)param_2 * 8;
    uVar2 = param_2 - 1;
    do {
      uVar4 = uVar4 - 8;
      (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_70);
      uVar3 = uVar2 & 0xfffffffffffffffc;
      uVar2 = uVar2 - 1;
      *(uint *)(*(long *)(this + 0x18) + uVar3) =
           *(uint *)(*(long *)(this + 0x18) + uVar3) |
           (uint)(byte)local_70[0]._0_1_ << (ulong)(uVar4 & 0x18);
    } while (uVar2 != 0xffffffffffffffff);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


