// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7b638
// Entry Point: 00d7b638
// Size: 420 bytes
// Signature: undefined FUN_00d7b638(void)


undefined8 FUN_00d7b638(byte **param_1,byte *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  plVar7 = (long *)param_1[4];
  pbVar9 = *param_1;
  pbVar10 = param_1[1];
  if (*(int *)((long)plVar7 + 0x21c) == 0) {
    if (param_3 < 0x19) {
      do {
        while (pbVar10 == (byte *)0x0) {
          cVar4 = (**(code **)(plVar7[5] + 0x18))(plVar7);
          if (cVar4 == '\0') {
            return 0;
          }
          pbVar9 = *(byte **)plVar7[5];
          pbVar8 = pbVar9 + 1;
          uVar6 = (ulong)*pbVar9;
          pbVar10 = ((byte **)plVar7[5])[1] + -1;
          pbVar9 = pbVar8;
          if (uVar6 != 0xff) goto LAB_00d7b70c;
LAB_00d7b740:
          do {
            if (pbVar10 == (byte *)0x0) {
              cVar4 = (**(code **)(plVar7[5] + 0x18))(plVar7);
              if (cVar4 == '\0') {
                return 0;
              }
              pbVar8 = *(byte **)plVar7[5];
              pbVar10 = ((byte **)plVar7[5])[1];
            }
            pbVar9 = pbVar8 + 1;
            bVar3 = *pbVar8;
            pbVar10 = pbVar10 + -1;
            pbVar8 = pbVar9;
          } while (bVar3 == 0xff);
          if (bVar3 != 0) {
            *(uint *)((long)plVar7 + 0x21c) = (uint)bVar3;
            if (param_3 < param_4) goto LAB_00d7b678;
            goto LAB_00d7b798;
          }
          param_2 = (byte *)((long)param_2 << 8 | 0xff);
          iVar2 = param_3 + 8;
          bVar1 = 0x10 < param_3;
          param_3 = iVar2;
          if (bVar1) goto LAB_00d7b798;
        }
        pbVar8 = pbVar9 + 1;
        uVar6 = (ulong)*pbVar9;
        pbVar10 = pbVar10 + -1;
        pbVar9 = pbVar8;
        if (uVar6 == 0xff) goto LAB_00d7b740;
LAB_00d7b70c:
        param_2 = (byte *)(uVar6 | (long)param_2 << 8);
        iVar2 = param_3 + 8;
        bVar1 = param_3 < 0x11;
        param_3 = iVar2;
      } while (bVar1);
    }
  }
  else if (param_3 < param_4) {
LAB_00d7b678:
    if (*(char *)(plVar7[0x4a] + 0x3c) == '\0') {
      lVar5 = *plVar7;
      *(undefined4 *)(lVar5 + 0x28) = 0x78;
      (**(code **)(lVar5 + 8))(plVar7,0xffffffff);
      *(undefined *)(plVar7[0x4a] + 0x3c) = 1;
    }
    param_2 = (byte *)((long)param_2 << ((ulong)(0x19 - param_3) & 0x3f));
    param_3 = 0x19;
  }
LAB_00d7b798:
  *param_1 = pbVar9;
  param_1[1] = pbVar10;
  param_1[2] = param_2;
  *(int *)(param_1 + 3) = param_3;
  return 1;
}


