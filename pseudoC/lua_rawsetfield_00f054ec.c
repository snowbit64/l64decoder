// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_rawsetfield
// Entry Point: 00f054ec
// Size: 256 bytes
// Signature: undefined __cdecl lua_rawsetfield(lua_State * param_1, int param_2, char * param_3)


/* lua_rawsetfield(lua_State*, int, char const*) */

void lua_rawsetfield(lua_State *param_1,int param_2,char *param_3)

{
  long *plVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      plVar1 = (long *)FUN_00f068dc(param_1);
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 - 1) * 0x10);
    if (*(long **)(param_1 + 8) <= plVar1) {
      plVar1 = (long *)&DAT_0056fdf8;
    }
  }
  lVar5 = *plVar1;
  if (*(char *)(lVar5 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00f09e04(param_1);
  }
  lVar6 = *(long *)(param_1 + 8);
  sVar2 = strlen(param_3);
  uVar3 = FUN_00f128c0(param_1,param_3,sVar2);
  puVar4 = (undefined8 *)FUN_00f179e8(param_1,lVar5,uVar3);
  uVar3 = *(undefined8 *)(lVar6 + -0x10);
  puVar4[1] = *(undefined8 *)(lVar6 + -8);
  *puVar4 = uVar3;
  lVar5 = *(long *)(param_1 + 8);
  if (((4 < *(int *)(lVar5 + -4)) && ((*(byte *)(*plVar1 + 1) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar5 + -0x10) + 1) & 3) != 0)) {
    FUN_00f0c9ec(param_1);
    lVar5 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 8) = lVar5 + -0x10;
  return;
}


