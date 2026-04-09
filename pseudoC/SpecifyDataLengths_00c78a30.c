// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SpecifyDataLengths
// Entry Point: 00c78a30
// Size: 928 bytes
// Signature: undefined __thiscall SpecifyDataLengths(AuthenticatedSymmetricCipher * this, ulong param_1, ulong param_2, ulong param_3)


/* CryptoPP::AuthenticatedSymmetricCipher::SpecifyDataLengths(unsigned long, unsigned long, unsigned
   long) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipher::SpecifyDataLengths
          (AuthenticatedSymmetricCipher *this,ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  InvalidArgument *pIVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined auStack_f8 [24];
  undefined auStack_e0 [24];
  char acStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char acStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  basic_string abStack_60 [6];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x80))();
  if (uVar2 < param_1) {
    pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c78b00 to 00c78b17 has its CatchHandler @ 00c78ffc */
    plVar4 = (long *)(**(code **)(*(long *)this + 0x70))(this);
    (**(code **)(*plVar4 + 0x18))(acStack_c8);
                    /* try { // try from 00c78b18 to 00c78b27 has its CatchHandler @ 00c78fdc */
    puVar5 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_c8);
    local_a0 = puVar5[2];
    uStack_a8 = puVar5[1];
    local_b0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 00c78b40 to 00c78b4f has its CatchHandler @ 00c78fc0 */
    IntToString<unsigned_long>(param_1,10);
                    /* try { // try from 00c78b50 to 00c78b5f has its CatchHandler @ 00c78f84 */
    FUN_00c751d0(acStack_98,&local_b0,auStack_e0);
                    /* try { // try from 00c78b60 to 00c78b6f has its CatchHandler @ 00c78f48 */
    puVar5 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_98);
    local_70 = puVar5[2];
    uStack_78 = puVar5[1];
    local_80 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 00c78b90 to 00c78ba3 has its CatchHandler @ 00c78ec0 */
    uVar2 = (**(code **)(*(long *)this + 0x80))(this);
    IntToString<unsigned_long>(uVar2,10);
                    /* try { // try from 00c78ba4 to 00c78bb3 has its CatchHandler @ 00c78e84 */
    FUN_00c751d0(abStack_60,&local_80,auStack_f8);
                    /* try { // try from 00c78bb8 to 00c78bdf has its CatchHandler @ 00c78e40 */
    InvalidArgument::InvalidArgument(pIVar3,abStack_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar2 = (**(code **)(*(long *)this + 0x88))(this);
  if (uVar2 < param_2) {
    pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c78bfc to 00c78c13 has its CatchHandler @ 00c78ff8 */
    plVar4 = (long *)(**(code **)(*(long *)this + 0x70))(this);
    (**(code **)(*plVar4 + 0x18))(acStack_c8);
                    /* try { // try from 00c78c14 to 00c78c23 has its CatchHandler @ 00c78fd8 */
    puVar5 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_c8);
    local_a0 = puVar5[2];
    uStack_a8 = puVar5[1];
    local_b0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 00c78c3c to 00c78c4b has its CatchHandler @ 00c78fac */
    IntToString<unsigned_long>(param_2,10);
                    /* try { // try from 00c78c4c to 00c78c5b has its CatchHandler @ 00c78f70 */
    FUN_00c751d0(acStack_98,&local_b0,auStack_e0);
                    /* try { // try from 00c78c5c to 00c78c6b has its CatchHandler @ 00c78f34 */
    puVar5 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_98);
    local_70 = puVar5[2];
    uStack_78 = puVar5[1];
    local_80 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 00c78c8c to 00c78c9f has its CatchHandler @ 00c78eac */
    uVar2 = (**(code **)(*(long *)this + 0x88))(this);
    IntToString<unsigned_long>(uVar2,10);
                    /* try { // try from 00c78ca0 to 00c78caf has its CatchHandler @ 00c78e2c */
    FUN_00c751d0(abStack_60,&local_80,auStack_f8);
                    /* try { // try from 00c78cb4 to 00c78cdb has its CatchHandler @ 00c78dfc */
    InvalidArgument::InvalidArgument(pIVar3,abStack_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar2 = (**(code **)(*(long *)this + 0x90))(this);
  if (uVar2 < param_3) {
    pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c78cf4 to 00c78d0b has its CatchHandler @ 00c78ff4 */
    plVar4 = (long *)(**(code **)(*(long *)this + 0x70))(this);
    (**(code **)(*plVar4 + 0x18))(acStack_c8);
                    /* try { // try from 00c78d0c to 00c78d1b has its CatchHandler @ 00c78fd4 */
    puVar5 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_c8);
    local_a0 = puVar5[2];
    uStack_a8 = puVar5[1];
    local_b0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 00c78d34 to 00c78d43 has its CatchHandler @ 00c78f98 */
    IntToString<unsigned_long>(param_3,10);
                    /* try { // try from 00c78d44 to 00c78d53 has its CatchHandler @ 00c78f5c */
    FUN_00c751d0(acStack_98,&local_b0,auStack_e0);
                    /* try { // try from 00c78d54 to 00c78d63 has its CatchHandler @ 00c78f20 */
    puVar5 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_98);
    local_70 = puVar5[2];
    uStack_78 = puVar5[1];
    local_80 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 00c78d84 to 00c78d97 has its CatchHandler @ 00c78e98 */
    uVar2 = (**(code **)(*(long *)this + 0x90))(this);
    IntToString<unsigned_long>(uVar2,10);
                    /* try { // try from 00c78d98 to 00c78da7 has its CatchHandler @ 00c78de8 */
    FUN_00c751d0(abStack_60,&local_80,auStack_f8);
                    /* try { // try from 00c78dac to 00c78dd3 has its CatchHandler @ 00c78dd8 */
    InvalidArgument::InvalidArgument(pIVar3,abStack_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  (**(code **)(*(long *)this + 0xb8))(this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


