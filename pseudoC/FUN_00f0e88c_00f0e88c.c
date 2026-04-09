// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e88c
// Entry Point: 00f0e88c
// Size: 1052 bytes
// Signature: undefined FUN_00f0e88c(void)


undefined8 FUN_00f0e88c(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = luaL_checkunsigned(param_1,1);
  if ((int)uVar1 < 0) {
    lua_pushunsigned(param_1,0);
    return 1;
  }
  if ((uVar1 >> 0x1e & 1) != 0) {
    lua_pushunsigned(param_1,1);
    return 1;
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    lua_pushunsigned(param_1,2);
    return 1;
  }
  if ((uVar1 >> 0x1c & 1) != 0) {
    lua_pushunsigned(param_1,3);
    return 1;
  }
  if ((uVar1 >> 0x1b & 1) != 0) {
    lua_pushunsigned(param_1,4);
    return 1;
  }
  if ((uVar1 >> 0x1a & 1) != 0) {
    lua_pushunsigned(param_1,5);
    return 1;
  }
  if ((uVar1 >> 0x19 & 1) != 0) {
    lua_pushunsigned(param_1,6);
    return 1;
  }
  if ((uVar1 >> 0x18 & 1) != 0) {
    lua_pushunsigned(param_1,7);
    return 1;
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    lua_pushunsigned(param_1,8);
    return 1;
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    lua_pushunsigned(param_1,9);
    return 1;
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    lua_pushunsigned(param_1,10);
    return 1;
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    lua_pushunsigned(param_1,0xb);
    return 1;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    lua_pushunsigned(param_1,0xc);
    return 1;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    lua_pushunsigned(param_1,0xd);
    return 1;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    lua_pushunsigned(param_1,0xe);
    return 1;
  }
  if ((uVar1 >> 0x10 & 1) == 0) {
    if ((uVar1 >> 0xf & 1) != 0) {
      lua_pushunsigned(param_1,0x10);
      return 1;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lua_pushunsigned(param_1,0x11);
      return 1;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lua_pushunsigned(param_1,0x12);
      return 1;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      lua_pushunsigned(param_1,0x13);
      return 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lua_pushunsigned(param_1,0x14);
      return 1;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lua_pushunsigned(param_1,0x15);
      return 1;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lua_pushunsigned(param_1,0x16);
      return 1;
    }
    if ((uVar1 >> 8 & 1) == 0) {
      if ((uVar1 >> 7 & 1) != 0) {
        lua_pushunsigned(param_1,0x18);
        return 1;
      }
      if ((uVar1 >> 6 & 1) != 0) {
        lua_pushunsigned(param_1,0x19);
        return 1;
      }
      if ((uVar1 >> 5 & 1) != 0) {
        lua_pushunsigned(param_1,0x1a);
        return 1;
      }
      if ((uVar1 >> 4 & 1) == 0) {
        if ((uVar1 >> 3 & 1) != 0) {
          lua_pushunsigned(param_1,0x1c);
          return 1;
        }
        if ((uVar1 >> 2 & 1) == 0) {
          if ((uVar1 >> 1 & 1) == 0) {
            uVar2 = 0x1f;
            if ((uVar1 & 1) == 0) {
              uVar2 = 0x20;
            }
            lua_pushunsigned(param_1,uVar2);
            return 1;
          }
          lua_pushunsigned(param_1,0x1e);
          return 1;
        }
        lua_pushunsigned(param_1,0x1d);
        return 1;
      }
      lua_pushunsigned(param_1,0x1b);
      return 1;
    }
    lua_pushunsigned(param_1,0x17);
    return 1;
  }
  lua_pushunsigned(param_1,0xf);
  return 1;
}


