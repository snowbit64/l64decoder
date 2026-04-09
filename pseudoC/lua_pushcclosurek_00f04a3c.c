// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_pushcclosurek
// Entry Point: 00f04a3c
// Size: 276 bytes
// Signature: undefined __cdecl lua_pushcclosurek(lua_State * param_1, _func_int_lua_State_ptr * param_2, char * param_3, int param_4, _func_int_lua_State_ptr_int * param_5)


/* lua_pushcclosurek(lua_State*, int (*)(lua_State*), char const*, int, int (*)(lua_State*, int)) */

void lua_pushcclosurek(lua_State *param_1,_func_int_lua_State_ptr *param_2,char *param_3,int param_4
                      ,_func_int_lua_State_ptr_int *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x48) < *(ulong *)(*(long *)(param_1 + 0x18) + 0x40)) {
    if (((byte)param_1[1] >> 2 & 1) == 0) goto LAB_00f04a7c;
LAB_00f04ab0:
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == *(long *)(param_1 + 0x40)) goto LAB_00f04ad0;
  }
  else {
    FUN_00f0bdd8(param_1,1);
    if (((byte)param_1[1] >> 2 & 1) != 0) goto LAB_00f04ab0;
LAB_00f04a7c:
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == *(long *)(param_1 + 0x40)) {
LAB_00f04ad0:
      puVar2 = (undefined8 *)(param_1 + 0x58);
      goto LAB_00f04ad4;
    }
  }
  puVar2 = (undefined8 *)(**(long **)(lVar1 + 8) + 0x10);
LAB_00f04ad4:
  lVar1 = FUN_00f0ba50(param_1,param_4,*puVar2);
  *(_func_int_lua_State_ptr **)(lVar1 + 0x18) = param_2;
  *(_func_int_lua_State_ptr_int **)(lVar1 + 0x20) = param_5;
  *(char **)(lVar1 + 0x28) = param_3;
  plVar3 = (long *)(*(long *)(param_1 + 8) + (long)param_4 * -0x10);
  *(long **)(param_1 + 8) = plVar3;
  if (param_4 != 0) {
    lVar4 = (long)param_4 << 4;
    do {
      param_4 = param_4 + -1;
      uVar5 = *(undefined8 *)((long)plVar3 + lVar4 + -0x10);
      puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar4);
      puVar2[1] = *(undefined8 *)((long)plVar3 + lVar4 + -8);
      *puVar2 = uVar5;
      lVar4 = lVar4 + -0x10;
      plVar3 = *(long **)(param_1 + 8);
    } while (param_4 != 0);
  }
  *plVar3 = lVar1;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)plVar3 + 0xc) = 7;
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}


