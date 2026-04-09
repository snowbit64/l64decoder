// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_break
// Entry Point: 00f0b574
// Size: 64 bytes
// Signature: undefined __cdecl lua_break(lua_State * param_1)


/* lua_break(lua_State*) */

undefined8 lua_break(lua_State *param_1)

{
  if (*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52)) {
    param_1[3] = (lua_State)0x6;
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f09b70(param_1,"attempt to break across metamethod/C-call boundary");
}


