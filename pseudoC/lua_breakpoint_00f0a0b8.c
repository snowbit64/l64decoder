// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_breakpoint
// Entry Point: 00f0a0b8
// Size: 108 bytes
// Signature: undefined __cdecl lua_breakpoint(lua_State * param_1, int param_2, int param_3, int param_4)


/* lua_breakpoint(lua_State*, int, int, int) */

int lua_breakpoint(lua_State *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_00f02d28(param_1,param_2);
  uVar3 = *(undefined8 *)(*plVar2 + 0x18);
  iVar1 = FUN_00f0a124(uVar3,param_3);
  if (iVar1 != -1) {
    FUN_00f09f2c(param_1,uVar3,iVar1,param_4 != 0);
  }
  return iVar1;
}


