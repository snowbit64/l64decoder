// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_resetthread
// Entry Point: 00f11f80
// Size: 240 bytes
// Signature: undefined __cdecl lua_resetthread(lua_State * param_1)


/* lua_resetthread(lua_State*) */

void lua_resetthread(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  FUN_00f0bb9c(param_1,*(undefined8 *)(param_1 + 0x30));
  lVar4 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x4c);
  plVar7 = *(long **)(param_1 + 0x40);
  lVar2 = lVar4 + 0x10;
  *(undefined4 *)(lVar4 + 0xc) = 0;
  *(long **)(param_1 + 0x20) = plVar7;
  *plVar7 = lVar2;
  plVar7[1] = lVar4;
  plVar7[2] = lVar4 + 0x150;
  if (iVar1 != 8) {
    FUN_00f0aaa4(param_1,8);
    lVar2 = **(long **)(param_1 + 0x20);
  }
  param_1[3] = (lua_State)0x0;
  *(long *)(param_1 + 8) = lVar2;
  *(long *)(param_1 + 0x10) = lVar2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x48) == 0x2d) {
    uVar6 = 0x2d;
  }
  else {
    FUN_00f0a950(param_1,0x28);
    uVar6 = *(uint *)(param_1 + 0x48);
    if ((int)uVar6 < 1) {
      return;
    }
  }
  lVar2 = *(long *)(param_1 + 0x30);
  uVar3 = (ulong)uVar6;
  if (uVar6 < 2) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar3 & 0xfffffffe;
    puVar5 = (undefined4 *)(lVar2 + 0x1c);
    uVar9 = uVar8;
    do {
      uVar9 = uVar9 - 2;
      puVar5[-4] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 8;
    } while (uVar9 != 0);
    if (uVar8 == uVar3) {
      return;
    }
  }
  lVar4 = uVar3 - uVar8;
  puVar5 = (undefined4 *)(lVar2 + uVar8 * 0x10 + 0xc);
  do {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 4;
  } while (lVar4 != 0);
  return;
}


