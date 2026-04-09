// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_close
// Entry Point: 00f12468
// Size: 164 bytes
// Signature: undefined __cdecl lua_close(lua_State * param_1)


/* lua_close(lua_State*) */

void lua_close(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0xa70);
  FUN_00f0bb9c(lVar1,*(undefined8 *)(lVar1 + 0x30));
  lVar2 = *(long *)(lVar1 + 0x18);
  FUN_00f0bb9c(lVar1,*(undefined8 *)(lVar1 + 0x30));
  FUN_00f0bda4(lVar1);
  FUN_00f1043c(lVar1,**(undefined8 **)(lVar1 + 0x18),
               (long)*(int *)((long)*(undefined8 **)(lVar1 + 0x18) + 0xc) << 3,0);
  FUN_00f1043c(lVar1,*(undefined8 *)(lVar1 + 0x40),(long)*(int *)(lVar1 + 0x4c) * 0x28,
               *(undefined *)(lVar1 + 2));
  FUN_00f1043c(lVar1,*(undefined8 *)(lVar1 + 0x30),(long)*(int *)(lVar1 + 0x48) << 4,
               *(undefined *)(lVar1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00f12508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),lVar1,0x11c0,0);
  return;
}


