// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThrowIfResynchronizable
// Entry Point: 00c77b00
// Size: 224 bytes
// Signature: undefined ThrowIfResynchronizable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::SimpleKeyingInterface::ThrowIfResynchronizable() */

void CryptoPP::SimpleKeyingInterface::ThrowIfResynchronizable(void)

{
  long lVar1;
  int iVar2;
  long *in_x0;
  InvalidArgument *this;
  long *plVar3;
  undefined8 *puVar4;
  char acStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*in_x0 + 0x40))();
  if (iVar2 < 4) {
    this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c77b70 to 00c77b87 has its CatchHandler @ 00c77c30 */
    plVar3 = (long *)(**(code **)(*in_x0 + 0x70))();
    (**(code **)(*plVar3 + 0x18))(acStack_68);
                    /* try { // try from 00c77b88 to 00c77b97 has its CatchHandler @ 00c77c18 */
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
                    /* try { // try from 00c77bb4 to 00c77bdb has its CatchHandler @ 00c77be0 */
    InvalidArgument::InvalidArgument(this,(basic_string *)&local_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


