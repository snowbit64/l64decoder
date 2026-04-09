// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00735e5c
// Entry Point: 00735e5c
// Size: 60 bytes
// Signature: undefined FUN_00735e5c(void)


void FUN_00735e5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00735e78 to 00735e7f has its CatchHandler @ 00735e98 */
  FUN_00735eac(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
}


