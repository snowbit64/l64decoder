// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_yield
// Entry Point: 00f0b528
// Size: 76 bytes
// Signature: undefined __cdecl lua_yield(lua_State * param_1, int param_2)


/* lua_yield(lua_State*, int) */

undefined8 lua_yield(lua_State *param_1,int param_2)

{
  if (*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52)) {
    param_1[3] = (lua_State)0x1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8) + (long)param_2 * -0x10;
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f09b70(param_1,"attempt to yield across metamethod/C-call boundary");
}


