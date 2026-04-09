// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1ee34
// Entry Point: 00e1ee34
// Size: 508 bytes
// Signature: undefined FUN_00e1ee34(void)


long FUN_00e1ee34(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (0 < param_3) {
    param_3 = param_1[2] + param_3;
  }
  plVar1 = param_1 + 4;
  if (param_3 == 0) {
    while (lVar4 = ogg_sync_pageseek(plVar1,param_2), lVar4 < 0) {
      param_1[2] = param_1[2] - lVar4;
    }
    if (lVar4 != 0) {
LAB_00e1eea4:
      lVar5 = param_1[2];
      param_1[2] = lVar5 + lVar4;
      return lVar5;
    }
  }
  else {
    if (param_3 < 1) {
      do {
        lVar4 = ogg_sync_pageseek(plVar1,param_2);
        while (-1 < lVar4) {
          if (lVar4 != 0) goto LAB_00e1eea4;
          piVar2 = (int *)__errno();
          lVar4 = param_1[0x72];
          *piVar2 = 0;
          if (lVar4 == 0) {
            return -0x80;
          }
          if (*param_1 == 0) {
            return -2;
          }
          uVar3 = ogg_sync_buffer(plVar1,0x800);
          lVar4 = (*(code *)param_1[0x72])(uVar3,1,0x800,*param_1);
          if (lVar4 < 1) goto LAB_00e1efec;
          ogg_sync_wrote(plVar1);
          lVar4 = ogg_sync_pageseek(plVar1,param_2);
        }
        param_1[2] = param_1[2] - lVar4;
      } while( true );
    }
    lVar4 = param_1[2];
    while (lVar4 < param_3) {
      while (lVar4 = ogg_sync_pageseek(plVar1,param_2), -1 < lVar4) {
        if (lVar4 != 0) goto LAB_00e1eea4;
        piVar2 = (int *)__errno();
        lVar4 = param_1[0x72];
        *piVar2 = 0;
        if (lVar4 == 0) {
          return -0x80;
        }
        if (*param_1 == 0) {
          return -2;
        }
        uVar3 = ogg_sync_buffer(plVar1,0x800);
        lVar4 = (*(code *)param_1[0x72])(uVar3,1,0x800,*param_1);
        if (lVar4 < 1) {
LAB_00e1efec:
          if ((lVar4 == 0) && (*piVar2 == 0)) {
            return -2;
          }
          return -0x80;
        }
        ogg_sync_wrote(plVar1);
        if (param_3 <= param_1[2]) {
          return -1;
        }
      }
      lVar4 = param_1[2] - lVar4;
      param_1[2] = lVar4;
    }
  }
  return -1;
}


