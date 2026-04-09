// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: what
// Entry Point: 00f0b88c
// Size: 128 bytes
// Signature: undefined what(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* lua_exception::what() const */

char * lua_exception::what(void)

{
  long in_x0;
  char *pcVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_x0 + 0x10);
  if ((uVar2 & 0xfffffffe) == 2) {
                    /* try { // try from 00f0b8b0 to 00f0b8bb has its CatchHandler @ 00f0b90c */
    pcVar1 = (char *)lua_tolstring(*(lua_State **)(in_x0 + 8),-1,(ulong *)0x0);
    if (pcVar1 != (char *)0x0) {
      return pcVar1;
    }
    uVar2 = *(uint *)(in_x0 + 0x10);
  }
  if (uVar2 - 2 < 4) {
    return &DAT_0056f6d0 + *(int *)(&DAT_0056f6d0 + (long)(int)(uVar2 - 2) * 4);
  }
  return "lua_exception: unexpected exception status";
}


