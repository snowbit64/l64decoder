// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TruncatedFinal
// Entry Point: 00c74c00
// Size: 940 bytes
// Signature: undefined __thiscall TruncatedFinal(AuthenticatedSymmetricCipherBase * this, uchar * param_1, ulong param_2)


/* CryptoPP::AuthenticatedSymmetricCipherBase::TruncatedFinal(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::TruncatedFinal
          (AuthenticatedSymmetricCipherBase *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  InvalidArgument *pIVar3;
  undefined8 *puVar4;
  BadState *this_00;
  ulong uVar5;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(this + 0x38);
  uVar1 = (**(code **)(*(long *)this + 0x80))();
  if (uVar1 < uVar5) {
    pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c74d10 to 00c74d1b has its CatchHandler @ 00c751bc */
    (**(code **)(*(long *)this + 0xb0))(acStack_c8,this);
                    /* try { // try from 00c74d1c to 00c74d2b has its CatchHandler @ 00c751a4 */
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_c8);
    local_a0 = puVar4[2];
    uStack_a8 = puVar4[1];
    local_b0 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00c74d48 to 00c74d53 has its CatchHandler @ 00c7514c */
    IntToString<unsigned_long>(*(ulong *)(this + 0x38),10);
                    /* try { // try from 00c74d54 to 00c74d63 has its CatchHandler @ 00c750e8 */
    FUN_00c751d0(acStack_98,&local_b0,auStack_e0);
                    /* try { // try from 00c74d64 to 00c74d73 has its CatchHandler @ 00c750b0 */
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_98);
    local_70 = puVar4[2];
    uStack_78 = puVar4[1];
    local_80 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00c74d94 to 00c74da7 has its CatchHandler @ 00c75078 */
    uVar1 = (**(code **)(*(long *)this + 0x80))(this);
    IntToString<unsigned_long>(uVar1,10);
                    /* try { // try from 00c74da8 to 00c74db7 has its CatchHandler @ 00c7502c */
    FUN_00c751d0(&local_60,&local_80,auStack_f8);
                    /* try { // try from 00c74dbc to 00c74de3 has its CatchHandler @ 00c74fec */
    InvalidArgument::InvalidArgument(pIVar3,(basic_string *)&local_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar5 = *(ulong *)(this + 0x48);
  uVar1 = (**(code **)(*(long *)this + 0x90))(this);
  if (uVar1 < uVar5) {
    lVar2 = (**(code **)(*(long *)this + 0x90))(this);
    pIVar3 = (InvalidArgument *)__cxa_allocate_exception(0x28);
    if (lVar2 != 0) {
                    /* try { // try from 00c74e80 to 00c74e8b has its CatchHandler @ 00c7519c */
      (**(code **)(*(long *)this + 0xb0))(acStack_c8,this);
                    /* try { // try from 00c74e8c to 00c74e9b has its CatchHandler @ 00c75130 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_c8);
      local_a0 = puVar4[2];
      uStack_a8 = puVar4[1];
      local_b0 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00c74eb8 to 00c74ec3 has its CatchHandler @ 00c750d4 */
      IntToString<unsigned_long>(*(ulong *)(this + 0x48),10);
                    /* try { // try from 00c74ec4 to 00c74ed3 has its CatchHandler @ 00c7509c */
      FUN_00c751d0(acStack_98,&local_b0,auStack_e0);
                    /* try { // try from 00c74ed4 to 00c74ee3 has its CatchHandler @ 00c75064 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_98);
      local_70 = puVar4[2];
      uStack_78 = puVar4[1];
      local_80 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 00c74f04 to 00c74f17 has its CatchHandler @ 00c75050 */
      uVar1 = (**(code **)(*(long *)this + 0x90))(this);
      IntToString<unsigned_long>(uVar1,10);
                    /* try { // try from 00c74f18 to 00c74f27 has its CatchHandler @ 00c74fd8 */
      FUN_00c751d0(&local_60,&local_80,auStack_f8);
                    /* try { // try from 00c74f2c to 00c74f53 has its CatchHandler @ 00c74fb8 */
      InvalidArgument::InvalidArgument(pIVar3,(basic_string *)&local_60);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
    }
                    /* try { // try from 00c74e14 to 00c74e1f has its CatchHandler @ 00c751a0 */
    (**(code **)(*(long *)this + 0xb0))(&local_80,this);
                    /* try { // try from 00c74e20 to 00c74e2f has its CatchHandler @ 00c75134 */
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_80);
    local_50 = puVar4[2];
    uStack_58 = puVar4[1];
    local_60 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00c74e4c to 00c74e73 has its CatchHandler @ 00c7510c */
    InvalidArgument::InvalidArgument(pIVar3,(basic_string *)&local_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pIVar3,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  switch(*(undefined4 *)(this + 0x54)) {
  case 0:
  case 1:
    this_00 = (BadState *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c74f6c to 00c74f77 has its CatchHandler @ 00c75198 */
    (**(code **)(*(long *)this + 0xb0))(&local_60,this);
                    /* try { // try from 00c74f7c to 00c74fb3 has its CatchHandler @ 00c75174 */
    AuthenticatedSymmetricCipher::BadState::BadState
              (this_00,(basic_string *)&local_60,"TruncatedFinal","setting key and IV");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&AuthenticatedSymmetricCipher::BadState::typeinfo,Exception::~Exception);
  case 2:
    (**(code **)(*(long *)this + 0x120))(this);
    *(undefined4 *)(this + 0x50) = 0;
  case 3:
  case 4:
    (**(code **)(*(long *)this + 0x128))(this);
    *(undefined4 *)(this + 0x50) = 0;
  case 5:
    (**(code **)(*(long *)this + 0x130))(this,param_1,param_2);
    *(undefined4 *)(this + 0x50) = 0;
  }
  *(undefined4 *)(this + 0x54) = 1;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


