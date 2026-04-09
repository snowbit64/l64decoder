// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushValue
// Entry Point: 00bb9598
// Size: 816 bytes
// Signature: undefined __thiscall pushValue(LuauScriptSystem * this, lua_State * param_1, Value * param_2)


/* LuauScriptSystem::pushValue(lua_State*, Value const&) */

void __thiscall
LuauScriptSystem::pushValue(LuauScriptSystem *this,lua_State *param_1,Value *param_2)

{
  ushort uVar1;
  int iVar2;
  uint3 uVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  
  checkYieldState();
  switch(*(undefined4 *)(param_2 + 8)) {
  case 1:
    lua_pushinteger(param_1,*(int *)param_2);
    return;
  case 2:
    dVar7 = (double)NEON_ucvtf((ulong)*(uint *)param_2);
    goto LAB_00bb9638;
  case 3:
    lua_pushboolean(param_1,(uint)(byte)*param_2);
    return;
  case 4:
    dVar7 = (double)*(float *)param_2;
    goto LAB_00bb9638;
  case 5:
    dVar7 = *(double *)param_2;
LAB_00bb9638:
    lua_pushnumber(param_1,dVar7);
    return;
  case 6:
    lua_pushstring(param_1,*(char **)param_2);
    uVar1 = *(ushort *)(param_2 + 0xc);
    goto joined_r0x00bb9748;
  case 7:
    lua_pushlightuserdata(param_1,*(void **)param_2);
    return;
  case 8:
    piVar4 = *(int **)param_2;
    if (piVar4 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      validateObjectRef(this,(ObjectRef *)piVar4,"pushing as a function parameter");
      iVar2 = *piVar4;
    }
    lua_rawgeti(param_1,-10000,iVar2);
    return;
  case 9:
    lua_createtable(param_1,0,0);
    uVar3 = *(uint3 *)(param_2 + 0xc);
    if (1 < uVar3) {
      lVar6 = 0;
      iVar2 = 1;
      do {
        pushValue(this,param_1,(Value *)(*(long *)param_2 + lVar6));
        lua_rawseti(param_1,-2,iVar2);
        lVar6 = lVar6 + 0x10;
        iVar2 = iVar2 + 1;
      } while ((ulong)(uVar3 >> 1) * 0x10 - lVar6 != 0);
LAB_00bb9808:
      uVar3 = (uint3)*(ushort *)(param_2 + 0xc);
    }
    break;
  case 10:
    lua_pushlstring(param_1,*(char **)param_2,(ulong)(*(uint3 *)(param_2 + 0xc) >> 1));
    uVar1 = *(ushort *)(param_2 + 0xc);
joined_r0x00bb9748:
    if ((uVar1 & 1) == 0) {
      return;
    }
    goto LAB_00bb9818;
  case 0xb:
    lua_createtable(param_1,0,0);
    uVar3 = *(uint3 *)(param_2 + 0xc);
    if (1 < uVar3) {
      uVar5 = 0;
      do {
        lua_pushinteger(param_1,*(int *)(*(long *)param_2 + uVar5 * 4));
        uVar5 = uVar5 + 1;
        lua_rawseti(param_1,-2,(int)uVar5);
      } while (uVar3 >> 1 != uVar5);
      goto LAB_00bb9808;
    }
    break;
  case 0xc:
    lua_createtable(param_1,0,0);
    uVar3 = *(uint3 *)(param_2 + 0xc);
    if (1 < uVar3) {
      uVar5 = 0;
      do {
        lua_pushnumber(param_1,(double)*(float *)(*(long *)param_2 + uVar5 * 4));
        uVar5 = uVar5 + 1;
        lua_rawseti(param_1,-2,(int)uVar5);
      } while (uVar3 >> 1 != uVar5);
      goto LAB_00bb9808;
    }
    break;
  case 0xd:
    if (**(long **)param_2 != 0) {
      lua_getfield(param_1,-10000,(char *)(*(long **)param_2)[1]);
      lua_pushstring(param_1,"userdata");
      lua_gettable(param_1,-2);
      lua_pushlightuserdata(param_1,**(void ***)param_2);
      lua_gettable(param_1,-2);
      return;
    }
  default:
    lua_pushnil(param_1);
    return;
  }
  if ((uVar3 & 1) != 0) {
LAB_00bb9818:
    if (*(void **)param_2 != (void *)0x0) {
      operator_delete__(*(void **)param_2);
      return;
    }
  }
  return;
}


