// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0a90c
// Entry Point: 00f0a90c
// Size: 68 bytes
// Signature: noreturn undefined FUN_00f0a90c(void)


void FUN_00f0a90c(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x18);
  *(undefined4 *)(puVar1 + 2) = param_2;
  *puVar1 = &PTR__exception_010170e8;
  puVar1[1] = param_1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&lua_exception::typeinfo,std::exception::~exception);
}


