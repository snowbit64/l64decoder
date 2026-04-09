// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1d970
// Entry Point: 00e1d970
// Size: 488 bytes
// Signature: undefined FUN_00e1d970(void)


int FUN_00e1d970(long param_1,long *param_2,void *param_3,size_t param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_64;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_1 == 0) || ((code *)param_5[1] == (code *)0x0)) {
    iVar2 = -1;
  }
  else {
    iVar2 = (*(code *)param_5[1])(param_1,0,1);
  }
  local_60 = (void *)0x0;
  local_64 = 0;
  memset(param_2,0,0x3b0);
  *param_2 = param_1;
  lVar6 = *param_5;
  lVar8 = param_5[3];
  lVar7 = param_5[2];
  plVar4 = param_2 + 4;
  param_2[0x73] = param_5[1];
  param_2[0x72] = lVar6;
  param_2[0x75] = lVar8;
  param_2[0x74] = lVar7;
  ogg_sync_init(plVar4);
  if (param_3 != (void *)0x0) {
    pvVar3 = (void *)ogg_sync_buffer(plVar4,param_4);
    memcpy(pvVar3,param_3,param_4);
    ogg_sync_wrote(plVar4,param_4);
  }
  if (iVar2 != -1) {
    *(undefined4 *)(param_2 + 1) = 1;
  }
  *(undefined4 *)(param_2 + 8) = 1;
  pvVar3 = calloc(1,0x38);
  param_2[0xd] = (long)pvVar3;
  pvVar3 = calloc(1,0x20);
  param_2[0xe] = (long)pvVar3;
  ogg_stream_init(param_2 + 0x15,0xffffffff);
  iVar2 = FUN_00e21660(param_2,param_2[0xd],param_2[0xe],&local_60,&local_64,0);
  if (iVar2 < 0) {
    *param_2 = 0;
    ov_clear(param_2);
    pvVar3 = local_60;
  }
  else {
    lVar7 = (long)local_64;
    plVar4 = (long *)calloc(lVar7 + 2,8);
    pvVar3 = local_60;
    lVar6 = param_2[0x44];
    param_2[0xb] = (long)plVar4;
    *plVar4 = lVar6;
    plVar4[1] = lVar7;
    param_2[0x11] = lVar6;
    memcpy(plVar4 + 2,local_60,lVar7 << 3);
    puVar5 = (undefined8 *)calloc(1,8);
    param_2[9] = (long)puVar5;
    plVar4 = (long *)calloc(1,8);
    lVar6 = param_2[2];
    *puVar5 = 0;
    param_2[10] = (long)plVar4;
    *(undefined4 *)(param_2 + 0x10) = 1;
    *plVar4 = lVar6;
  }
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


