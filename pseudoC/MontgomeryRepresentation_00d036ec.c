// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MontgomeryRepresentation
// Entry Point: 00d036ec
// Size: 292 bytes
// Signature: undefined __thiscall MontgomeryRepresentation(MontgomeryRepresentation * this, Integer * param_1)


/* CryptoPP::MontgomeryRepresentation::MontgomeryRepresentation(CryptoPP::Integer const&) */

void __thiscall
CryptoPP::MontgomeryRepresentation::MontgomeryRepresentation
          (MontgomeryRepresentation *this,Integer *param_1)

{
  long lVar1;
  uint *puVar2;
  InvalidArgument *this_00;
  ulong uVar3;
  long lVar4;
  basic_string abStack_60 [6];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ModularArithmetic::ModularArithmetic((ModularArithmetic *)this,param_1);
  *(undefined ***)this = &PTR__MontgomeryRepresentation_0100ca00;
                    /* try { // try from 00d03730 to 00d0373b has its CatchHandler @ 00d03854 */
  Integer::Integer((Integer *)(this + 0xa8),0,*(ulong *)(this + 0x30));
  lVar4 = *(long *)(this + 0x30);
  uVar3 = lVar4 * 5;
  *(undefined8 *)(this + 0xe0) = 0x3fffffffffffffff;
  *(ulong *)(this + 0xe8) = uVar3;
                    /* try { // try from 00d0374c to 00d03767 has its CatchHandler @ 00d0385c */
  AllocatorBase<unsigned_int>::CheckSize(uVar3);
  if (uVar3 == 0) {
    puVar2 = (uint *)0x0;
    uVar3 = *(ulong *)(this + 0x30);
    *(undefined8 *)(this + 0xf0) = 0;
  }
  else {
    puVar2 = (uint *)UnalignedAllocate(lVar4 * 0x14);
    uVar3 = *(ulong *)(this + 0x30);
    *(uint **)(this + 0xf0) = puVar2;
  }
  if ((uVar3 != 0) && ((*(byte *)*(uint **)(this + 0x38) & 1) != 0)) {
                    /* try { // try from 00d03798 to 00d0379b has its CatchHandler @ 00d03810 */
    RecursiveInverseModPower2(*(uint **)(this + 200),puVar2,*(uint **)(this + 0x38),uVar3);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d037d0 to 00d037df has its CatchHandler @ 00d0383c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             abStack_60,
             "MontgomeryRepresentation: Montgomery representation requires an odd modulus");
                    /* try { // try from 00d037e4 to 00d0380b has its CatchHandler @ 00d03818 */
  InvalidArgument::InvalidArgument(this_00,abStack_60);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
}


