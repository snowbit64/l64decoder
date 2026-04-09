// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThrowIfInvalidTruncatedSize
// Entry Point: 00c79a9c
// Size: 348 bytes
// Signature: undefined __thiscall ThrowIfInvalidTruncatedSize(HashTransformation * this, ulong param_1)


/* CryptoPP::HashTransformation::ThrowIfInvalidTruncatedSize(unsigned long) const */

void __thiscall
CryptoPP::HashTransformation::ThrowIfInvalidTruncatedSize(HashTransformation *this,ulong param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  InvalidArgument *this_00;
  undefined8 *puVar4;
  undefined auStack_d0 [24];
  undefined auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char acStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0x48))();
  if ((uVar3 & 0xffffffff) < param_1) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c79b18 to 00c79b2b has its CatchHandler @ 00c79d00 */
    uVar2 = (**(code **)(*(long *)this + 0x48))(this);
    IntToString<unsigned_int>(uVar2,10);
                    /* try { // try from 00c79b2c to 00c79b3f has its CatchHandler @ 00c79ce8 */
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((ulong)auStack_b8,(char *)0x0);
    local_90 = puVar4[2];
    uStack_98 = puVar4[1];
    local_a0 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00c79b58 to 00c79b67 has its CatchHandler @ 00c79cb4 */
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_a0);
    local_70 = puVar4[2];
    uStack_78 = puVar4[1];
    local_80 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00c79b80 to 00c79b8f has its CatchHandler @ 00c79c90 */
    IntToString<unsigned_long>(param_1,10);
                    /* try { // try from 00c79b90 to 00c79b9f has its CatchHandler @ 00c79c6c */
    FUN_00c751d0(acStack_68,&local_80,auStack_d0);
                    /* try { // try from 00c79ba0 to 00c79baf has its CatchHandler @ 00c79c48 */
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (acStack_68);
    local_40 = puVar4[2];
    uStack_48 = puVar4[1];
    local_50 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00c79bcc to 00c79bf3 has its CatchHandler @ 00c79bf8 */
    InvalidArgument::InvalidArgument(this_00,(basic_string *)&local_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


