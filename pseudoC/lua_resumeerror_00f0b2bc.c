// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_resumeerror
// Entry Point: 00f0b2bc
// Size: 620 bytes
// Signature: undefined __cdecl lua_resumeerror(lua_State * param_1, lua_State * param_2)


/* lua_resumeerror(lua_State*, lua_State*) */

lua_State lua_resumeerror(lua_State *param_1,lua_State *param_2)

{
  short *psVar1;
  int iVar2;
  lua_State lVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ushort uVar8;
  short sVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar3 = param_1[3];
  if (lVar3 == (lua_State)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x20);
    if (puVar10 == *(undefined8 **)(param_1 + 0x40)) goto LAB_00f0b318;
  }
  else {
    if ((lVar3 == (lua_State)0x1) || (lVar3 == (lua_State)0x6)) {
LAB_00f0b318:
      if (param_2 == (lua_State *)0x0) {
        uVar8 = 0;
LAB_00f0b3b0:
        psVar1 = (short *)(param_1 + 0x50);
        *psVar1 = uVar8 + 1;
        *(ushort *)(param_1 + 0x52) = uVar8 + 1;
        param_1[5] = (lua_State)0x1;
        if (((byte)param_1[1] >> 2 & 1) != 0) {
          FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
        }
        iVar4 = 2;
LAB_00f0b3e8:
        uVar7 = *(ulong *)(param_1 + 0x20);
        do {
          if (uVar7 <= *(ulong *)(param_1 + 0x40)) {
            puVar10 = *(undefined8 **)(param_1 + 8);
            param_1[5] = (lua_State)0x0;
            *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x52);
            param_1[3] = SUB41(iVar4,0);
            if (iVar4 - 2U < 2) {
              puVar10[1] = puVar10[-1];
              *puVar10 = puVar10[-2];
            }
            else {
              if (iVar4 == 5) {
                pcVar5 = "error in error handling";
                uVar6 = 0x17;
              }
              else {
                if (iVar4 != 4) goto LAB_00f0b4dc;
                pcVar5 = "not enough memory";
                uVar6 = 0x11;
              }
              uVar6 = FUN_00f128c0(param_1,pcVar5,uVar6);
              *puVar10 = uVar6;
              *(undefined4 *)((long)puVar10 + 0xc) = 5;
            }
LAB_00f0b4dc:
            sVar9 = *(short *)(param_1 + 0x50);
            lVar3 = param_1[3];
            *(undefined8 **)(param_1 + 8) = puVar10 + 2;
            *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10) = puVar10 + 2;
            goto LAB_00f0b4f4;
          }
          if ((*(byte *)(uVar7 + 0x24) >> 1 & 1) != 0) goto LAB_00f0b410;
          uVar7 = uVar7 - 0x28;
        } while( true );
      }
      uVar8 = *(ushort *)(param_2 + 0x50);
      *(ushort *)(param_1 + 0x50) = uVar8;
      if (uVar8 < 200) goto LAB_00f0b3b0;
      pcVar5 = "C stack overflow";
      uVar6 = 0x10;
      puVar10 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
      goto LAB_00f0b348;
    }
    puVar10 = *(undefined8 **)(param_1 + 0x20);
  }
  puVar10 = (undefined8 *)*puVar10;
  pcVar5 = "cannot resume non-suspended coroutine";
  uVar6 = 0x25;
LAB_00f0b348:
  *(undefined8 **)(param_1 + 8) = puVar10;
  uVar6 = FUN_00f128c0(param_1,pcVar5,uVar6);
  *puVar10 = uVar6;
  lVar12 = *(long *)(param_1 + 0x28);
  lVar11 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar10 + 0xc) = 5;
  if (lVar12 - lVar11 < 0x11) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar4 = iVar2 << 1;
    if (iVar2 < 1) {
      iVar4 = iVar2 + 1;
    }
    FUN_00f0a950(param_1,iVar4);
    lVar11 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 8) = lVar11 + 0x10;
  return (lua_State)0x2;
LAB_00f0b410:
  param_1[3] = SUB41(iVar4,0);
  iVar4 = FUN_00f0a814(param_1,FUN_00f0b138);
  if (iVar4 == 0) {
    sVar9 = *(short *)(param_1 + 0x52);
    param_1[5] = (lua_State)0x0;
    lVar3 = param_1[3];
    *(short *)(param_1 + 0x50) = sVar9;
    if (lVar3 == (lua_State)0x0) {
      if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) < *(ulong *)(param_1 + 8)) {
        *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
        *psVar1 = sVar9 + -1;
        return (lua_State)0x0;
      }
      *psVar1 = sVar9 + -1;
      return (lua_State)0x0;
    }
LAB_00f0b4f4:
    *psVar1 = sVar9 + -1;
    return lVar3;
  }
  goto LAB_00f0b3e8;
}


