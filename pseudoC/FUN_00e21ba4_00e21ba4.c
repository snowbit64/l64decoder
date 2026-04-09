// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e21ba4
// Entry Point: 00e21ba4
// Size: 704 bytes
// Signature: undefined FUN_00e21ba4(void)


long FUN_00e21ba4(long *param_1,long param_2,long *param_3,int param_4,int *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined auStack_88 [32];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_3 == (long *)0x0) || (param_4 == 0)) {
    uVar10 = 0xffffffffffffffff;
    iVar2 = -1;
    lVar11 = param_2;
    do {
      if (lVar11 < 0x10001) {
        lVar11 = 0x10000;
      }
      if (*param_1 == 0) goto LAB_00e21e1c;
      lVar11 = lVar11 + -0x10000;
      lVar8 = lVar11;
      if (param_1[2] != lVar11) {
        if (((code *)param_1[0x73] == (code *)0x0) ||
           (iVar3 = (*(code *)param_1[0x73])(*param_1,lVar11,0), iVar3 == -1)) goto LAB_00e21df4;
        param_1[2] = lVar11;
        ogg_sync_reset(param_1 + 4);
        lVar8 = param_1[2];
      }
      lVar7 = -1;
      if (lVar8 < param_2) {
        while( true ) {
          lVar9 = FUN_00e1ee34(param_1,auStack_88,param_2 - lVar8);
          if (lVar9 == -0x80) goto LAB_00e21df4;
          if (lVar9 < 0) break;
          iVar2 = ogg_page_serialno(auStack_88);
          uVar10 = ogg_page_granulepos(auStack_88);
          if (iVar2 == *param_5) {
            *param_6 = uVar10;
          }
          lVar8 = param_1[2];
          lVar7 = lVar9;
          if (param_2 <= lVar8) goto LAB_00e21e00;
        }
      }
      lVar9 = lVar7;
    } while (lVar7 == -1);
  }
  else {
    uVar10 = 0xffffffffffffffff;
    lVar7 = -1;
    lVar8 = -1;
    lVar11 = param_2;
    do {
      if (lVar11 < 0x10001) {
        lVar11 = 0x10000;
      }
      if (*param_1 == 0) goto LAB_00e21e1c;
      lVar11 = lVar11 + -0x10000;
      lVar5 = lVar11;
      if (param_1[2] != lVar11) {
        if (((code *)param_1[0x73] == (code *)0x0) ||
           (iVar2 = (*(code *)param_1[0x73])(*param_1,lVar11,0), iVar2 == -1)) goto LAB_00e21df4;
        param_1[2] = lVar11;
        ogg_sync_reset(param_1 + 4);
        lVar5 = param_1[2];
      }
      if (lVar5 < param_2) {
        lVar9 = -1;
        do {
          lVar4 = FUN_00e1ee34(param_1,auStack_88,param_2 - lVar5);
          if (lVar4 == -0x80) goto LAB_00e21df4;
          if (lVar4 < 0) break;
          iVar2 = ogg_page_serialno(auStack_88);
          uVar10 = ogg_page_granulepos(auStack_88);
          if (iVar2 == *param_5) {
            *param_6 = uVar10;
            lVar8 = lVar4;
          }
          lVar7 = (long)iVar2;
          plVar6 = param_3;
          iVar2 = param_4;
          do {
            if (*plVar6 == lVar7) goto LAB_00e21c7c;
            iVar2 = iVar2 + -1;
            plVar6 = plVar6 + 1;
          } while (iVar2 != 0);
          lVar8 = -1;
LAB_00e21c7c:
          lVar5 = param_1[2];
          lVar9 = lVar4;
        } while (lVar5 < param_2);
      }
      else {
        lVar9 = -1;
      }
      iVar2 = (int)lVar7;
    } while (lVar9 == -1);
    if (-1 < lVar8) goto LAB_00e21e2c;
  }
LAB_00e21e00:
  lVar8 = lVar9;
  *param_5 = iVar2;
  *param_6 = uVar10;
LAB_00e21e2c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar8;
LAB_00e21e1c:
  lVar8 = -0x81;
  goto LAB_00e21e2c;
LAB_00e21df4:
  lVar8 = -0x80;
  goto LAB_00e21e2c;
}


