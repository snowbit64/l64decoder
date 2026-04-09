// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_newthread
// Entry Point: 00f03048
// Size: 148 bytes
// Signature: undefined __cdecl lua_newthread(lua_State * param_1)


/* lua_newthread(lua_State*) */

undefined8 lua_newthread(lua_State *param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  if (*(ulong *)(*(long *)(param_1 + 0x18) + 0x40) <= *(ulong *)(*(long *)(param_1 + 0x18) + 0x48))
  {
    FUN_00f0bdd8(param_1,1);
  }
  if (((byte)param_1[1] >> 2 & 1) != 0) {
    FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
  }
  uVar1 = FUN_00f11d64(param_1);
  puVar4 = *(undefined8 **)(param_1 + 8);
  *puVar4 = uVar1;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar4 + 0xc) = 9;
  pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x1050);
  *(long *)(param_1 + 8) = lVar2 + 0x10;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1,uVar1);
  }
  return uVar1;
}


