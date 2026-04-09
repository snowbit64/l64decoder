// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bb641c
// Entry Point: 00bb641c
// Size: 276 bytes
// Signature: undefined FUN_00bb641c(void)


void FUN_00bb641c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  pcVar3 = (char *)luaL_checklstring(param_1,1,&local_50);
  pcVar4 = (char *)luaL_optlstring(param_1,2,pcVar3,(ulong *)0x0);
  lua_setsafeenv(param_1,-0x2711,0);
  local_70 = 2;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0x200000000;
  pcVar3 = (char *)luau_compile(pcVar3,local_50,(lua_CompileOptions *)&local_78,&local_80);
  iVar2 = luau_load(param_1,pcVar4,pcVar3,local_80,0);
  if (pcVar3 != (char *)0x0) {
    operator_delete__(pcVar3);
  }
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  else {
    lua_pushnil(param_1);
    lua_insert(param_1,-2);
    uVar5 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


