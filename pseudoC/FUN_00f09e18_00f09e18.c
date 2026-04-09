// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f09e18
// Entry Point: 00f09e18
// Size: 272 bytes
// Signature: undefined FUN_00f09e18(void)


void FUN_00f09e18(lua_State *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined auStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(int *)((long)*(long **)(lVar5 + 8) + 0xc) == 7) &&
     (lVar3 = **(long **)(lVar5 + 8), *(char *)(lVar3 + 3) == '\0')) {
    FUN_00f11458(auStack_148,*(long *)(*(long *)(lVar3 + 0x18) + 0x40) + 0x18,0x100);
    uVar4 = *(ulong *)(lVar5 + 0x18);
    lVar5 = *(long *)(**(long **)(lVar5 + 8) + 0x18);
    if (uVar4 != 0) {
      uVar4 = (ulong)((int)(uVar4 - *(long *)(lVar5 + 0x10) >> 2) - 1);
    }
    if (*(long *)(lVar5 + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(long *)(lVar5 + 0x28) +
                      (long)((int)uVar4 >> (*(uint *)(lVar5 + 0x78) & 0x1f)) * 4) +
              (uint)*(byte *)(*(long *)(lVar5 + 0x20) + (long)(int)uVar4);
    }
    FUN_00f11348(param_1,"%s:%d: %s",auStack_148,iVar2,param_2);
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00f09f24;
  }
  else {
    lua_pushstring(param_1,param_2);
    if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_00f09f24:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


