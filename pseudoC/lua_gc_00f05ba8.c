// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_gc
// Entry Point: 00f05ba8
// Size: 520 bytes
// Signature: undefined __cdecl lua_gc(lua_State * param_1, int param_2, int param_3)


/* lua_gc(lua_State*, int, int) */

ulong lua_gc(lua_State *param_1,int param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (9 < (uint)param_2) {
    return 0xffffffff;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar7 + 0x40) = 0xffffffffffffffff;
    return 0;
  case 1:
    *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(lVar7 + 0x48);
    return 0;
  case 2:
    FUN_00f0c6c0(param_1);
    return 0;
  case 3:
    return *(ulong *)(lVar7 + 0x48) >> 10;
  case 4:
    return (ulong)(*(uint *)(lVar7 + 0x48) & 0x3ff);
  case 5:
    return (ulong)(*(long *)(lVar7 + 0x40) != -1);
  case 7:
    uVar2 = *(uint *)(lVar7 + 0x50);
    *(int *)(lVar7 + 0x50) = param_3;
    return (ulong)uVar2;
  case 8:
    uVar2 = *(uint *)(lVar7 + 0x54);
    *(int *)(lVar7 + 0x54) = param_3;
    return (ulong)uVar2;
  case 9:
    iVar3 = *(int *)(lVar7 + 0x58);
    *(int *)(lVar7 + 0x58) = param_3 << 10;
    return (ulong)(uint)(iVar3 >> 10);
  }
  uVar6 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffc0000000000 | (ulong)(uint)param_3 << 10;
  if (*(char *)(lVar7 + 0x21) == '\0') {
    uVar5 = *(ulong *)(lVar7 + 0x48);
    lVar8 = 0;
    lVar9 = 0;
    uVar1 = 0;
    if (uVar6 <= uVar5) {
      uVar1 = uVar5 - uVar6;
    }
    *(ulong *)(lVar7 + 0x40) = uVar1;
    if (uVar1 <= uVar5) goto LAB_00f05d5c;
  }
  else {
    uVar5 = *(ulong *)(lVar7 + 0x48);
    lVar8 = *(long *)(lVar7 + 0x40) - uVar5;
    lVar9 = 0;
    uVar1 = 0;
    if (uVar6 <= uVar5) {
      uVar1 = uVar5 - uVar6;
    }
    *(ulong *)(lVar7 + 0x40) = uVar1;
    if (uVar1 <= uVar5) {
LAB_00f05d5c:
      do {
        lVar4 = FUN_00f0bdd8(param_1,0);
        if (*(char *)(lVar7 + 0x21) == '\0') {
          return 1;
        }
        uVar5 = *(ulong *)(lVar7 + 0x48);
        lVar9 = lVar4 + lVar9;
      } while (*(ulong *)(lVar7 + 0x40) <= uVar5);
      goto LAB_00f05cc8;
    }
  }
  lVar9 = 0;
  if (*(char *)(lVar7 + 0x21) == '\0') {
    return 0;
  }
LAB_00f05cc8:
  uVar5 = lVar9 + lVar8 + uVar5;
  *(ulong *)(lVar7 + 0x40) = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
  return 0;
}


