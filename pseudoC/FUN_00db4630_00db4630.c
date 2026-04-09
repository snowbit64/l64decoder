// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db4630
// Entry Point: 00db4630
// Size: 660 bytes
// Signature: undefined FUN_00db4630(void)


undefined4 FUN_00db4630(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long **pplVar7;
  long lVar8;
  long lVar9;
  
  pplVar7 = (long **)*param_1;
  lVar1 = **pplVar7;
  lVar2 = (*pplVar7)[1];
  png_set_keep_unknown_chunks(lVar1,1,0,0xffffffff);
  png_set_keep_unknown_chunks(lVar1,0,&DAT_00549c72,6);
  iVar4 = 0;
  if (*(int *)(param_1 + 9) == 0) {
    iVar4 = png_set_interlace_handling(lVar1);
  }
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x168) >> 6 & 1) == 0) {
      png_read_start_row(lVar1);
      png_read_transform_info(lVar1,lVar2);
    }
    else {
      png_app_error(lVar1,"png_read_update_info/png_start_read_image: duplicate call");
    }
  }
  switch(*(undefined4 *)(param_1 + 9)) {
  case 0:
    if (((*(char *)(lVar2 + 0x25) == '\x03') || (*(char *)(lVar2 + 0x25) == '\0')) &&
       (*(char *)(lVar2 + 0x24) == '\b')) {
LAB_00db47c4:
      lVar9 = (long)*(int *)(param_1 + 2);
      lVar8 = param_1[1];
      if (*(int *)(param_1 + 2) < 0) {
        lVar8 = lVar8 - lVar9 * (ulong)(*(int *)(pplVar7 + 2) - 1);
        param_1[6] = lVar8;
        param_1[7] = lVar9;
      }
      else {
        param_1[6] = lVar8;
        param_1[7] = lVar9;
      }
      if (iVar4 != 0) {
        if ((0 < iVar4) && (iVar3 = *(int *)(pplVar7 + 2), iVar3 != 0)) {
          while( true ) {
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              png_read_row(lVar1,lVar8,0);
              lVar8 = lVar8 + lVar9;
            }
            if (iVar4 < 2) break;
            iVar3 = *(int *)(pplVar7 + 2);
            iVar4 = iVar4 + -1;
            lVar8 = param_1[6];
          }
        }
        return 1;
      }
      uVar6 = png_get_rowbytes(lVar1,lVar2);
      uVar6 = png_malloc(lVar1,uVar6);
      param_1[5] = uVar6;
      uVar5 = png_safe_execute(pplVar7,FUN_00db5a08,param_1);
      param_1[5] = 0;
      png_free(lVar1,uVar6);
      return uVar5;
    }
    break;
  case 1:
  case 2:
    if (((*(char *)(lVar2 + 0x25) == '\x04') && (*(char *)(lVar2 + 0x24) == '\b')) &&
       ((*(int *)(lVar1 + 0x2dc) == 220000 && (*(int *)((long)pplVar7 + 0x1c) == 0x100))))
    goto LAB_00db47c4;
    break;
  case 3:
    if (((*(char *)(lVar2 + 0x25) == '\x02') && (*(char *)(lVar2 + 0x24) == '\b')) &&
       ((*(int *)(lVar1 + 0x2dc) == 220000 && (*(int *)((long)pplVar7 + 0x1c) == 0xd8))))
    goto LAB_00db47c4;
    break;
  case 4:
    if ((((*(char *)(lVar2 + 0x25) == '\x06') && (*(char *)(lVar2 + 0x24) == '\b')) &&
        (*(int *)(lVar1 + 0x2dc) == 220000)) && (*(int *)((long)pplVar7 + 0x1c) == 0xf4))
    goto LAB_00db47c4;
  }
                    /* WARNING: Subroutine does not return */
  png_error(lVar1,"bad color-map processing (internal error)");
}


