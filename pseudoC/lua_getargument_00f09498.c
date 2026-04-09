// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getargument
// Entry Point: 00f09498
// Size: 300 bytes
// Signature: undefined __cdecl lua_getargument(lua_State * param_1, int param_2, int param_3)


/* lua_getargument(lua_State*, int, int) */

undefined8 lua_getargument(lua_State *param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((uint)param_2 <
      (uint)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x40)) >> 3) *
            -0x33333333)) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + (long)param_2 * -0x28);
    plVar2 = (long *)plVar1[1];
    if (*(int *)((long)plVar2 + 0xc) == 7) {
      if (((*(char *)(*plVar2 + 3) != '\0') || (param_3 < 1)) ||
         (lVar3 = *(long *)(*plVar2 + 0x18), lVar3 == 0)) {
        return 0;
      }
      if ((uint)*(byte *)(lVar3 + 0x81) < (uint)param_3) {
        if (*(char *)(lVar3 + 0x82) == '\0') {
          return 0;
        }
        if (*plVar1 - (long)plVar2 >> 4 <= (long)(ulong)(uint)param_3) {
          return 0;
        }
        if (((byte)param_1[1] >> 2 & 1) != 0) {
          FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
          plVar2 = (long *)plVar1[1];
        }
        plVar2 = plVar2 + (ulong)(uint)param_3 * 2;
      }
      else {
        if (((byte)param_1[1] >> 2 & 1) != 0) {
          FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
        }
        plVar2 = (long *)(*plVar1 + (ulong)(param_3 - 1) * 0x10);
      }
      FUN_00f02da8(param_1,plVar2);
      return 1;
    }
  }
  return 0;
}


