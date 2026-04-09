// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThrowIfInvalidIV
// Entry Point: 00c77c44
// Size: 228 bytes
// Signature: undefined __thiscall ThrowIfInvalidIV(SimpleKeyingInterface * this, uchar * param_1)


/* CryptoPP::SimpleKeyingInterface::ThrowIfInvalidIV(unsigned char const*) */

void __thiscall
CryptoPP::SimpleKeyingInterface::ThrowIfInvalidIV(SimpleKeyingInterface *this,uchar *param_1)

{
  long lVar1;
  int iVar2;
  InvalidArgument *this_00;
  long *plVar3;
  undefined8 *puVar4;
  char acStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (uchar *)0x0) && (iVar2 = (**(code **)(*(long *)this + 0x40))(), iVar2 == 2)) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c77cb8 to 00c77ccf has its CatchHandler @ 00c77d78 */
    plVar3 = (long *)(**(code **)(*(long *)this + 0x70))(this);
    (**(code **)(*plVar3 + 0x18))(acStack_68);
                    /* try { // try from 00c77cd0 to 00c77cdf has its CatchHandler @ 00c77d60 */
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
                    /* try { // try from 00c77cfc to 00c77d23 has its CatchHandler @ 00c77d28 */
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


