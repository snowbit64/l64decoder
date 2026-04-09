// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getcoverage
// Entry Point: 00f0a1fc
// Size: 200 bytes
// Signature: undefined __cdecl lua_getcoverage(lua_State * param_1, int param_2, void * param_3, _func_void_void_ptr_char_ptr_int_int_int_ptr_ulong * param_4)


/* lua_getcoverage(lua_State*, int, void*, void (*)(void*, char const*, int, int, int const*,
   unsigned long)) */

void lua_getcoverage(lua_State *param_1,int param_2,void *param_3,
                    _func_void_void_ptr_char_ptr_int_int_int_ptr_ulong *param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_00f02d28(param_1,param_2);
  uVar4 = *(undefined8 *)(*plVar2 + 0x18);
  iVar1 = FUN_00f0a2c4(uVar4);
  if (iVar1 == -1) {
    return;
  }
  if (iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
    lVar5 = (long)(iVar1 + 1) << 2;
    uVar3 = FUN_00f10090(param_1,lVar5,0);
    FUN_00f0a3d8(uVar4,0,uVar3,(long)(iVar1 + 1),param_3,param_4);
    FUN_00f1043c(param_1,uVar3,lVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f1007c(param_1);
}


