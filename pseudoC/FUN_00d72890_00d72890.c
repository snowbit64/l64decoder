// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d72890
// Entry Point: 00d72890
// Size: 672 bytes
// Signature: undefined FUN_00d72890(void)


void FUN_00d72890(long *param_1,char *param_2,uint param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  
  uVar10 = (undefined4)(param_4 + (ulong)param_3);
  if (param_3 < 0xe) {
    if ((5 < param_3) && (*param_2 == 'J')) goto LAB_00d72a28;
  }
  else if (*param_2 == 'J') {
    if ((((param_2[1] == 'F') && (param_2[2] == 'I')) && (param_2[3] == 'F')) &&
       (param_2[4] == '\0')) {
      *(undefined *)(param_1 + 0x2c) = 1;
      bVar1 = param_2[5];
      *(byte *)((long)param_1 + 0x161) = bVar1;
      bVar2 = param_2[6];
      *(byte *)((long)param_1 + 0x162) = bVar2;
      bVar3 = param_2[7];
      *(byte *)((long)param_1 + 0x163) = bVar3;
      uVar7 = (uint)(*(ushort *)(param_2 + 8) >> 8) | (*(ushort *)(param_2 + 8) & 0xff00ff) << 8;
      *(short *)((long)param_1 + 0x164) = (short)uVar7;
      uVar9 = (uint)(*(ushort *)(param_2 + 10) >> 8) | (*(ushort *)(param_2 + 10) & 0xff00ff) << 8;
      *(short *)((long)param_1 + 0x166) = (short)uVar9;
      if (1 < bVar1 - 1) {
        lVar5 = *param_1;
        *(uint *)(lVar5 + 0x2c) = (uint)bVar1;
        bVar1 = *(byte *)((long)param_1 + 0x162);
        lVar8 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x7a;
        *(uint *)(lVar8 + 0x30) = (uint)bVar1;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        bVar1 = *(byte *)((long)param_1 + 0x161);
        bVar2 = *(byte *)((long)param_1 + 0x162);
        uVar7 = (uint)*(ushort *)((long)param_1 + 0x164);
        uVar9 = (uint)*(ushort *)((long)param_1 + 0x166);
        bVar3 = *(byte *)((long)param_1 + 0x163);
      }
      lVar5 = *param_1;
      *(uint *)(lVar5 + 0x30) = (uint)bVar2;
      *(uint *)(lVar5 + 0x34) = uVar7;
      *(uint *)(lVar5 + 0x38) = uVar9;
      *(uint *)(lVar5 + 0x3c) = (uint)bVar3;
      *(undefined4 *)(lVar5 + 0x28) = 0x59;
      *(uint *)(lVar5 + 0x2c) = (uint)bVar1;
      (**(code **)(lVar5 + 8))(param_1,1);
      bVar1 = param_2[0xc];
      bVar2 = param_2[0xd];
      if ((bVar2 | bVar1) != 0) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x5c;
        *(uint *)(lVar5 + 0x2c) = (uint)(byte)param_2[0xc];
        *(uint *)(*param_1 + 0x30) = (uint)(byte)param_2[0xd];
        (**(code **)(*param_1 + 8))(param_1,1);
        bVar1 = param_2[0xc];
        bVar2 = param_2[0xd];
      }
      lVar5 = param_4 + (ulong)param_3 + -0xe;
      if (lVar5 == (ulong)bVar1 * (ulong)bVar2 * 2 + (ulong)bVar1 * (ulong)bVar2) {
        return;
      }
      lVar8 = *param_1;
      *(int *)(lVar8 + 0x2c) = (int)lVar5;
      lVar5 = *param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x5a;
                    /* WARNING: Could not recover jumptable at 0x00d72ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 8))(param_1,1);
      return;
    }
LAB_00d72a28:
    if (((param_2[1] == 'F') && (param_2[2] == 'X')) &&
       ((param_2[3] == 'X' && (param_2[4] == '\0')))) {
      cVar4 = param_2[5];
      if (cVar4 == '\x13') {
        lVar5 = *param_1;
        uVar6 = 0x70;
      }
      else if (cVar4 == '\x11') {
        lVar5 = *param_1;
        uVar6 = 0x6f;
      }
      else {
        if (cVar4 != '\x10') {
          lVar5 = *param_1;
          *(undefined4 *)(lVar5 + 0x28) = 0x5b;
          *(uint *)(lVar5 + 0x2c) = (uint)(byte)param_2[5];
          *(undefined4 *)(*param_1 + 0x30) = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00d72b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 8))(param_1,1);
          return;
        }
        lVar5 = *param_1;
        uVar6 = 0x6e;
      }
      goto LAB_00d72a5c;
    }
  }
  lVar5 = *param_1;
  uVar6 = 0x4f;
LAB_00d72a5c:
  *(undefined4 *)(lVar5 + 0x2c) = uVar10;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  *(undefined4 *)(lVar5 + 0x28) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00d72a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,1);
  return;
}


