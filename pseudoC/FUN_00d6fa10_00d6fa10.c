// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6fa10
// Entry Point: 00d6fa10
// Size: 324 bytes
// Signature: undefined FUN_00d6fa10(void)


undefined8 FUN_00d6fa10(long *param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  byte **ppbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  ppbVar5 = (byte **)param_1[5];
  pbVar8 = ppbVar5[1];
  pbVar7 = *ppbVar5;
  if (pbVar8 != (byte *)0x0) goto LAB_00d6fa68;
LAB_00d6fa50:
  cVar2 = (*(code *)ppbVar5[3])(param_1);
  do {
    if (cVar2 == '\0') {
      return 0;
    }
    pbVar8 = ppbVar5[1];
    pbVar7 = *ppbVar5;
LAB_00d6fa68:
    do {
      while( true ) {
        pbVar6 = pbVar7 + 1;
        pbVar8 = pbVar8 + -1;
        if (*pbVar7 != 0xff) break;
        do {
          if (pbVar8 == (byte *)0x0) {
            cVar2 = (*(code *)ppbVar5[3])(param_1);
            if (cVar2 == '\0') {
              return 0;
            }
            pbVar6 = *ppbVar5;
            pbVar8 = ppbVar5[1];
          }
          pbVar7 = pbVar6 + 1;
          bVar1 = *pbVar6;
          pbVar8 = pbVar8 + -1;
          pbVar6 = pbVar7;
        } while (bVar1 == 0xff);
        if (bVar1 != 0) {
          if (*(int *)(param_1[0x49] + 0x20) != 0) {
            lVar4 = *param_1;
            *(int *)(lVar4 + 0x2c) = *(int *)(param_1[0x49] + 0x20);
            lVar3 = *param_1;
            *(undefined4 *)(lVar4 + 0x28) = 0x77;
            *(uint *)(lVar3 + 0x30) = (uint)bVar1;
            (**(code **)(*param_1 + 8))(param_1,0xffffffff);
            *(undefined4 *)(param_1[0x49] + 0x20) = 0;
          }
          *(uint *)((long)param_1 + 0x21c) = (uint)bVar1;
          *ppbVar5 = pbVar7;
          ppbVar5[1] = pbVar8;
          return 1;
        }
        lVar3 = param_1[0x49];
        *ppbVar5 = pbVar7;
        ppbVar5[1] = pbVar8;
        *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 2;
        if (pbVar8 == (byte *)0x0) goto LAB_00d6fa50;
      }
      lVar3 = param_1[0x49];
      *ppbVar5 = pbVar6;
      ppbVar5[1] = pbVar8;
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
      pbVar7 = pbVar6;
    } while (pbVar8 != (byte *)0x0);
    cVar2 = (*(code *)ppbVar5[3])(param_1);
  } while( true );
}


