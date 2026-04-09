// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d1f18
// Entry Point: 006d1f18
// Size: 60 bytes
// Signature: noreturn undefined FUN_006d1f18(void)


void FUN_006d1f18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 006d1f34 to 006d1f3b has its CatchHandler @ 006d1f54 */
  FUN_006d1f68(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,&std::length_error::typeinfo,std::length_error::~length_error);
}


