// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_unknown
// Entry Point: 00dbfa90
// Size: 416 bytes
// Signature: undefined png_handle_unknown(void)


void png_handle_unknown(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x3f0) == 0) {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x3f8);
      if (param_4 != 3) goto LAB_00dbfb30;
    }
    else if (param_4 != 3) {
LAB_00dbfb30:
      if ((param_4 != 2) || ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0)) {
        png_crc_finish(param_1,param_3);
        goto LAB_00dbfb60;
      }
    }
    iVar2 = FUN_00dbfc30(param_1,param_3);
    if (iVar2 != 0) {
LAB_00dbfb60:
      if (param_4 == 3) {
LAB_00dbfb78:
        iVar2 = *(int *)(param_1 + 0x464);
        if (iVar2 != 0) {
          if (iVar2 + -1 == 0) goto LAB_00dbfbb4;
          if (iVar2 == 2) {
            bVar1 = true;
            *(undefined4 *)(param_1 + 0x464) = 1;
            png_chunk_benign_error(param_1,"no space in chunk cache");
            lVar3 = *(long *)(param_1 + 0x478);
            goto joined_r0x00dbfbbc;
          }
          *(int *)(param_1 + 0x464) = iVar2 + -1;
        }
        png_set_unknown_chunks(param_1,param_2,param_1 + 0x470,1);
LAB_00dbfc00:
        bVar1 = false;
        lVar3 = *(long *)(param_1 + 0x478);
        goto joined_r0x00dbfbbc;
      }
      if (param_4 == 2) goto LAB_00dbfb70;
    }
  }
  else {
    iVar2 = FUN_00dbfc30(param_1,param_3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(param_1 + 0x3f0))(param_1,param_1 + 0x470);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        png_chunk_error(param_1,"error in user chunk");
      }
      if (iVar2 != 0) goto LAB_00dbfc00;
      if (1 < param_4) goto LAB_00dbfb60;
      if (*(int *)(param_1 + 0x3f8) < 2) {
        png_chunk_warning(param_1,"Saving unknown chunk:");
        png_app_warning(param_1,
                        "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks"
                       );
      }
LAB_00dbfb70:
      if ((*(byte *)(param_1 + 0x253) >> 5 & 1) != 0) goto LAB_00dbfb78;
    }
  }
LAB_00dbfbb4:
  bVar1 = true;
  lVar3 = *(long *)(param_1 + 0x478);
joined_r0x00dbfbbc:
  if (lVar3 != 0) {
    png_free(param_1);
  }
  *(undefined8 *)(param_1 + 0x478) = 0;
  if ((bVar1) && ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"unhandled critical chunk");
  }
  return;
}


