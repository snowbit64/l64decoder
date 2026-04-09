// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_newuserdatadtor
// Entry Point: 00f06160
// Size: 160 bytes
// Signature: undefined __cdecl lua_newuserdatadtor(lua_State * param_1, ulong param_2, _func_void_void_ptr * param_3)


/* lua_newuserdatadtor(lua_State*, unsigned long, void (*)(void*)) */

long lua_newuserdatadtor(lua_State *param_1,ulong param_2,_func_void_void_ptr *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_00f0bdd8(param_1,1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  lVar1 = param_2 + 8;
  if (0xfffffffffffffff7 < param_2) {
    lVar1 = -1;
  }
  lVar1 = FUN_00f199b8(param_1,lVar1,0x80);
  *(_func_void_void_ptr **)(lVar1 + 0x10 + param_2) = param_3;
  plVar2 = *(long **)(param_1 + 8);
  *plVar2 = lVar1;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar2 + 0xc) = 8;
  *(long *)(param_1 + 8) = lVar3 + 0x10;
  return lVar1 + 0x10;
}


