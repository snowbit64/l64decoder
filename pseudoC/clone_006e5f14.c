// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 006e5f14
// Size: 108 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Script::ScriptDesc::clone() const */

undefined8 * Script::ScriptDesc::clone(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__ScriptDesc_00fd93f0;
  puVar1[1] = 0;
                    /* try { // try from 006e5f64 to 006e5f6b has its CatchHandler @ 006e5f80 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(puVar1 + 1));
  return puVar1;
}


