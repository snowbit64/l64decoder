// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Randomize
// Entry Point: 00cfa330
// Size: 552 bytes
// Signature: undefined __thiscall Randomize(Integer * this, RandomNumberGenerator * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::Integer::Randomize(CryptoPP::RandomNumberGenerator&, CryptoPP::Integer const&,
   CryptoPP::Integer const&) */

void __thiscall
CryptoPP::Integer::Randomize
          (Integer *this,RandomNumberGenerator *param_1,Integer *param_2,Integer *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  InvalidArgument *this_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_78 [2];
  ulong local_68;
  ulong local_60;
  void *local_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = Compare(param_2,param_3);
  if (0 < iVar5) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfa518 to 00cfa527 has its CatchHandler @ 00cfa57c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_78,"Integer: Min must be no greater than Max");
                    /* try { // try from 00cfa52c to 00cfa553 has its CatchHandler @ 00cfa558 */
    InvalidArgument::InvalidArgument(this_00,(basic_string *)local_78);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  Minus(param_3);
  iVar5 = (int)local_60 * -0x20;
  uVar10 = local_60;
  do {
    if (uVar10 == 0) {
      uVar10 = 0;
      goto LAB_00cfa404;
    }
    uVar9 = uVar10 - 1;
    lVar1 = uVar10 * 4;
    iVar5 = iVar5 + 0x20;
    uVar10 = uVar9;
  } while (*(int *)((long)local_58 + lVar1 + -4) == 0);
  if ((int)uVar9 == -1) {
    uVar10 = 0;
  }
  else {
    uVar2 = *(uint *)((long)local_58 + (uVar9 & 0xffffffff) * 4);
    if (uVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar8 = 0;
      uVar6 = 0x20;
      do {
        uVar3 = uVar8 + uVar6 >> 1;
        uVar7 = uVar3;
        if (uVar2 >> (ulong)(uVar3 & 0x1f) != 0) {
          uVar7 = uVar6;
          uVar8 = uVar3;
        }
        uVar6 = uVar7;
      } while (1 < uVar7 - uVar8);
    }
    uVar10 = (ulong)(uVar7 - iVar5);
  }
LAB_00cfa404:
  do {
                    /* try { // try from 00cfa404 to 00cfa413 has its CatchHandler @ 00cfa598 */
    Randomize(this,param_1,uVar10);
    iVar5 = Compare(this,(Integer *)local_78);
  } while (0 < iVar5);
                    /* try { // try from 00cfa430 to 00cfa4a7 has its CatchHandler @ 00cfa594 */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)(this + 8),
             *(ulong *)(param_2 + 0x18));
  if (*(int *)(this + 0x28) == 1) {
    if (*(int *)(param_2 + 0x28) == 1) {
      PositiveAdd(this,this,param_2);
      *(undefined4 *)(this + 0x28) = 1;
    }
    else {
      PositiveSubtract(this,param_2,this);
    }
  }
  else if (*(int *)(param_2 + 0x28) == 1) {
    PositiveSubtract(this,this,param_2);
  }
  else {
    PositiveAdd(this,this,param_2);
  }
  if (local_60 <= local_68) {
    local_68 = local_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00cfa4e0 to 00cfa4e3 has its CatchHandler @ 00cfa590 */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


