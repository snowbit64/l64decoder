// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCallDepth
// Entry Point: 00bb775c
// Size: 128 bytes
// Signature: undefined __thiscall getCallDepth(LuauScriptSystem * this, lua_State * param_1)


/* LuauScriptSystem::getCallDepth(lua_State*) */

int __thiscall LuauScriptSystem::getCallDepth(LuauScriptSystem *this,lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  lua_Debug alStack_178 [304];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = -1;
  do {
    iVar3 = iVar3 + 1;
    iVar2 = lua_getinfo(param_1,iVar3,"",alStack_178);
  } while (iVar2 != 0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


