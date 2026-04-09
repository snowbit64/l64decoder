// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_resume
// Entry Point: 00f0ad24
// Size: 656 bytes
// Signature: undefined __cdecl lua_resume(lua_State * param_1, lua_State * param_2, int param_3)


/* lua_resume(lua_State*, lua_State*, int) */

lua_State lua_resume(lua_State *param_1,lua_State *param_2,int param_3)

{
  int iVar1;
  lua_State lVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ushort uVar8;
  undefined8 *puVar9;
  long lVar10;
  short *psVar11;
  
  lVar2 = param_1[3];
  if (lVar2 == (lua_State)0x0) {
    puVar9 = *(undefined8 **)(param_1 + 0x20);
    if (puVar9 == *(undefined8 **)(param_1 + 0x40)) goto LAB_00f0ad84;
  }
  else {
    if ((lVar2 == (lua_State)0x1) || (lVar2 == (lua_State)0x6)) {
LAB_00f0ad84:
      if (param_2 == (lua_State *)0x0) {
        uVar8 = 0;
        *(undefined2 *)(param_1 + 0x50) = 0;
      }
      else {
        uVar8 = *(ushort *)(param_2 + 0x50);
        *(ushort *)(param_1 + 0x50) = uVar8;
        if (199 < uVar8) {
          pcVar5 = "C stack overflow";
          uVar6 = 0x10;
          puVar9 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
          goto LAB_00f0adb4;
        }
      }
      psVar11 = (short *)(param_1 + 0x50);
      *(ushort *)(param_1 + 0x50) = uVar8 + 1;
      *(ushort *)(param_1 + 0x52) = uVar8 + 1;
      param_1[5] = (lua_State)0x1;
      if (((byte)param_1[1] >> 2 & 1) != 0) {
        FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
        lVar2 = param_1[3];
      }
      lVar7 = *(long *)(param_1 + 8) + (long)param_3 * -0x10;
      if (lVar2 == (lua_State)0x0) {
        if (*(long *)(param_1 + 0x10) == lVar7) {
                    /* try { // try from 00f0afa4 to 00f0afb3 has its CatchHandler @ 00f0afb4 */
                    /* WARNING: Subroutine does not return */
          FUN_00f09b70(param_1,"cannot resume dead coroutine");
        }
        iVar4 = FUN_00f22e00(param_1,lVar7 + -0x10,0xffffffff);
        if (iVar4 != 0) goto LAB_00f0aea8;
        *(uint *)(*(long *)(param_1 + 0x20) + 0x24) =
             *(uint *)(*(long *)(param_1 + 0x20) + 0x24) | 1;
      }
      else {
        param_1[3] = (lua_State)0x0;
        lVar7 = *(long *)(*(undefined8 **)(param_1 + 0x20))[1];
        if (*(char *)(lVar7 + 3) == '\0') {
          *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(param_1 + 0x20);
        }
        else if (*(long *)(lVar7 + 0x20) == 0) {
                    /* try { // try from 00f0ae7c to 00f0aea3 has its CatchHandler @ 00f0afb4 */
          FUN_00f23068(param_1);
        }
      }
      while ((param_1[3] == (lua_State)0x0 &&
             (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x20)))) {
        lVar7 = **(long **)(*(ulong *)(param_1 + 0x20) + 8);
        if (*(char *)(lVar7 + 3) == '\0') {
                    /* try { // try from 00f0af44 to 00f0af9f has its CatchHandler @ 00f0afc0 */
          FUN_00f1a6c4(param_1);
        }
        else {
          iVar4 = (**(code **)(lVar7 + 0x20))(param_1,0);
          if (param_1[3] == (lua_State)0x6) break;
          FUN_00f23068(param_1,*(long *)(param_1 + 8) + (long)iVar4 * -0x10);
        }
      }
LAB_00f0aea8:
      sVar3 = *(short *)(param_1 + 0x52);
      param_1[5] = (lua_State)0x0;
      *(short *)(param_1 + 0x50) = sVar3;
      if (param_1[3] != (lua_State)0x0) {
        *psVar11 = sVar3 + -1;
        return param_1[3];
      }
      if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x10) < *(ulong *)(param_1 + 8)) {
        *(ulong *)(*(long *)(param_1 + 0x20) + 0x10) = *(ulong *)(param_1 + 8);
        *psVar11 = sVar3 + -1;
        return (lua_State)0x0;
      }
      *psVar11 = sVar3 + -1;
      return (lua_State)0x0;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x20);
  }
  puVar9 = (undefined8 *)*puVar9;
  pcVar5 = "cannot resume non-suspended coroutine";
  uVar6 = 0x25;
LAB_00f0adb4:
  *(undefined8 **)(param_1 + 8) = puVar9;
  uVar6 = FUN_00f128c0(param_1,pcVar5,uVar6);
  *puVar9 = uVar6;
  lVar10 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 8);
  *(undefined4 *)((long)puVar9 + 0xc) = 5;
  if (lVar10 - lVar7 < 0x11) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar4 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar4 = iVar1 + 1;
    }
    FUN_00f0a950(param_1,iVar4);
    lVar7 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 8) = lVar7 + 0x10;
  return (lua_State)0x2;
}


