// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetTestValue
// Entry Point: 00d239e8
// Size: 312 bytes
// Signature: undefined GetTestValue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::MaurerRandomnessTest::GetTestValue() const */

undefined  [16] CryptoPP::MaurerRandomnessTest::GetTestValue(void)

{
  uint uVar1;
  long lVar2;
  long in_x0;
  Exception *this;
  undefined8 *puVar3;
  undefined auVar4 [16];
  undefined auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(uint *)(in_x0 + 0x20) < 4000) {
    this = (Exception *)__cxa_allocate_exception(0x28);
    uVar1 = 0;
    if (*(uint *)(in_x0 + 0x20) < 4000) {
      uVar1 = 4000 - *(uint *)(in_x0 + 0x20);
    }
                    /* try { // try from 00d23a8c to 00d23a97 has its CatchHandler @ 00d23ba4 */
    IntToString<unsigned_int>(uVar1,10);
                    /* try { // try from 00d23a98 to 00d23aab has its CatchHandler @ 00d23b8c */
    puVar3 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((ulong)auStack_88,(char *)0x0);
    local_60 = puVar3[2];
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00d23ac4 to 00d23ad3 has its CatchHandler @ 00d23b58 */
    puVar3 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_70);
    local_40 = puVar3[2];
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00d23af0 to 00d23b1b has its CatchHandler @ 00d23b20 */
    Exception::Exception(this,6,(basic_string *)&local_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&Exception::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    auVar4._0_8_ = NEON_fmin(((*(double *)(in_x0 + 0x18) /
                              (double)(ulong)(*(uint *)(in_x0 + 0x20) - 2000)) / 0.6931471805599453)
                             * 0.1392,0x3ff0000000000000);
    auVar4._8_8_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


