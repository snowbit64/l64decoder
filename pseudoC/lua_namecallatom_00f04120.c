// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_namecallatom
// Entry Point: 00f04120
// Size: 120 bytes
// Signature: undefined __cdecl lua_namecallatom(lua_State * param_1, int * param_2)


/* lua_namecallatom(lua_State*, int*) */

long lua_namecallatom(lua_State *param_1,int *param_2)

{
  short sVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    if (param_2 != (int *)0x0) {
      sVar1 = *(short *)(lVar2 + 4);
      if (sVar1 == -0x8000) {
        if (*(code **)(*(long *)(param_1 + 0x18) + 0x1058) == (code *)0x0) {
          sVar1 = -1;
        }
        else {
          sVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x1058))
                            (lVar2 + 0x18,*(undefined4 *)(lVar2 + 0x14));
        }
        *(short *)(lVar2 + 4) = sVar1;
      }
      *param_2 = (int)sVar1;
    }
    return lVar2 + 0x18;
  }
  return 0;
}


