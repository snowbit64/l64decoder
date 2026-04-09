// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f190a0
// Entry Point: 00f190a0
// Size: 1028 bytes
// Signature: undefined FUN_00f190a0(void)


void FUN_00f190a0(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < param_3) {
    do {
      lua_rawgeti(param_1,1,param_2);
      lua_rawgeti(param_1,1,param_3);
      iVar2 = FUN_00f194a4(param_1,0xffffffff,0xfffffffe);
      if (iVar2 == 0) {
        lua_settop(param_1,-3);
      }
      else {
        lua_rawseti(param_1,1,param_2);
        lua_rawseti(param_1,1,param_3);
      }
      if (param_3 - param_2 == 1) {
        return;
      }
      iVar2 = param_3 + param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      lua_rawgeti(param_1,1,iVar2);
      lua_rawgeti(param_1,1,param_2);
      iVar3 = FUN_00f194a4(param_1,0xfffffffe,0xffffffff);
      if (iVar3 == 0) {
        lua_settop(param_1,-2);
        lua_rawgeti(param_1,1,param_3);
        iVar3 = FUN_00f194a4(param_1,0xffffffff,0xfffffffe);
        if (iVar3 == 0) {
          lua_settop(param_1,-3);
        }
        else {
          lua_rawseti(param_1,1,iVar2);
          lua_rawseti(param_1,1,param_3);
        }
      }
      else {
        lua_rawseti(param_1,1,iVar2);
        lua_rawseti(param_1,1,param_2);
      }
      if (param_3 - param_2 == 2) {
        return;
      }
      lua_rawgeti(param_1,1,iVar2);
      lua_pushvalue(param_1,-1);
      iVar3 = param_3 + -1;
      lua_rawgeti(param_1,1,iVar3);
      iVar5 = iVar3;
      iVar4 = param_2;
      do {
        lua_rawseti(param_1,1,iVar2);
        lua_rawseti(param_1,1,iVar5);
        iVar1 = iVar4;
        while( true ) {
          iVar2 = iVar1 + 1;
          lua_rawgeti(param_1,1,iVar2);
          iVar4 = lua_type(param_1,2);
          if (iVar4 == 0) {
            iVar4 = lua_lessthan(param_1,-1,-2);
          }
          else {
            lua_pushvalue(param_1,2);
            lua_pushvalue(param_1,-2);
            lua_pushvalue(param_1,-4);
            lua_call(param_1,2,1);
            iVar4 = lua_toboolean(param_1,-1);
            lua_settop(param_1,-2);
          }
          iVar6 = iVar5;
          if (iVar4 == 0) break;
          if (param_3 <= iVar2) goto LAB_00f19494;
          lua_settop(param_1,-2);
          iVar1 = iVar2;
        }
        while( true ) {
          iVar5 = iVar6 + -1;
          lua_rawgeti(param_1,1,iVar5);
          iVar4 = lua_type(param_1,2);
          if (iVar4 == 0) {
            iVar4 = lua_lessthan(param_1,-3,-1);
          }
          else {
            lua_pushvalue(param_1,2);
            lua_pushvalue(param_1,-4);
            lua_pushvalue(param_1,-3);
            lua_call(param_1,2,1);
            iVar4 = lua_toboolean(param_1,-1);
            lua_settop(param_1,-2);
          }
          if (iVar4 == 0) break;
          if (iVar5 <= param_2) {
LAB_00f19494:
                    /* WARNING: Subroutine does not return */
            luaL_errorL(param_1,"invalid order function for sorting");
          }
          lua_settop(param_1,-2);
          iVar6 = iVar5;
        }
        iVar4 = iVar2;
      } while (iVar2 < iVar6);
      lua_settop(param_1,-4);
      lua_rawgeti(param_1,1,iVar3);
      lua_rawgeti(param_1,1,iVar2);
      lua_rawseti(param_1,1,iVar3);
      lua_rawseti(param_1,1,iVar2);
      if (iVar2 - param_2 < param_3 - iVar2) {
        iVar2 = param_3;
        iVar5 = iVar1 + 2;
        param_3 = iVar1;
        iVar3 = param_2;
      }
      else {
        iVar3 = iVar1 + 2;
        iVar2 = iVar1;
        iVar5 = param_2;
      }
      FUN_00f190a0(param_1,iVar3,param_3);
      param_3 = iVar2;
      param_2 = iVar5;
    } while (iVar5 < iVar2);
  }
  return;
}


