// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_IDAT_data
// Entry Point: 00dc089c
// Size: 800 bytes
// Signature: undefined png_read_IDAT_data(void)


void png_read_IDAT_data(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  void *__s;
  ulong uVar6;
  uint local_474;
  undefined auStack_470 [1024];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = param_3;
  }
  *(long *)(param_1 + 400) = param_2;
  *(undefined4 *)(param_1 + 0x198) = 0;
  do {
    uVar2 = *(uint *)(param_1 + 0x180);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x280);
      while (uVar2 == 0) {
        uVar2 = *(uint *)(param_1 + 0x168);
        if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x4ac) = 0x81;
          png_read_data(param_1,&local_474,4);
          if ((uVar2 >> 0xb & 1) == 0) {
LAB_00dc09b0:
            uVar2 = (local_474 & 0xff00ff00) >> 8 | (local_474 & 0xff00ff) << 8;
            if ((uVar2 >> 0x10 | uVar2 << 0x10) != *(uint *)(param_1 + 0x284)) {
              if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
                if ((*(uint *)(param_1 + 0x168) >> 10 & 1) == 0) goto LAB_00dc0b90;
              }
              else if ((*(uint *)(param_1 + 0x168) >> 9 & 1) != 0) {
LAB_00dc0b90:
                    /* WARNING: Subroutine does not return */
                png_chunk_error(param_1,"CRC error");
              }
              png_chunk_warning(param_1,"CRC error");
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x4ac) = 0x81;
          png_read_data(param_1,&local_474,4);
          if ((~uVar2 & 0x300) != 0) goto LAB_00dc09b0;
        }
        uVar2 = png_read_chunk_header(param_1);
        *(uint *)(param_1 + 0x280) = uVar2;
        if (*(int *)(param_1 + 0x250) != 0x49444154) goto LAB_00dc0b80;
      }
      __s = *(void **)(param_1 + 0x498);
      if (*(uint *)(param_1 + 0x4a8) <= uVar2) {
        uVar2 = *(uint *)(param_1 + 0x4a8);
      }
      uVar5 = (ulong)uVar2;
      if (__s == (void *)0x0) {
LAB_00dc0a0c:
        __s = (void *)png_malloc_base(param_1,uVar5);
        if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          png_chunk_error(param_1,"insufficient memory to read chunk");
        }
        memset(__s,0,uVar5);
        *(void **)(param_1 + 0x498) = __s;
        *(ulong *)(param_1 + 0x4a0) = uVar5;
      }
      else if (*(ulong *)(param_1 + 0x4a0) < uVar5) {
        *(undefined8 *)(param_1 + 0x498) = 0;
        *(undefined8 *)(param_1 + 0x4a0) = 0;
        png_free(param_1,__s);
        goto LAB_00dc0a0c;
      }
      png_read_data(param_1,__s,uVar5);
      png_calculate_crc(param_1,__s,uVar5);
      *(void **)(param_1 + 0x178) = __s;
      *(uint *)(param_1 + 0x180) = uVar2;
      *(uint *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) - uVar2;
      if (param_2 != 0) goto LAB_00dc0918;
LAB_00dc0a70:
      *(undefined **)(param_1 + 400) = auStack_470;
      *(undefined4 *)(param_1 + 0x198) = 0x400;
      if (*(char *)(param_1 + 0x2a8) == '\0') goto LAB_00dc0a9c;
LAB_00dc0a88:
      if (uVar2 == 0) goto LAB_00dc0a9c;
      if (-1 < **(char **)(param_1 + 0x178)) {
        *(undefined *)(param_1 + 0x2a8) = 0;
        goto LAB_00dc0a9c;
      }
      iVar3 = -3;
      *(char **)(param_1 + 0x1a8) = "invalid window size (libpng)";
    }
    else {
      if (param_2 == 0) goto LAB_00dc0a70;
LAB_00dc0918:
      uVar5 = uVar6;
      if (0xfffffffe < uVar6) {
        uVar5 = 0xffffffff;
      }
      uVar6 = uVar6 - uVar5;
      *(int *)(param_1 + 0x198) = (int)uVar5;
      if (*(char *)(param_1 + 0x2a8) != '\0') goto LAB_00dc0a88;
LAB_00dc0a9c:
      iVar3 = inflate(param_1 + 0x178,0);
    }
    uVar2 = *(uint *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x198) = 0;
    uVar5 = 0x400 - (ulong)uVar2;
    if (param_2 != 0) {
      uVar5 = (ulong)uVar2;
    }
    uVar6 = uVar5 + uVar6;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        *(undefined8 *)(param_1 + 400) = 0;
        *(ulong *)(param_1 + 0x164) = *(ulong *)(param_1 + 0x164) | 0x800000008;
        if ((*(int *)(param_1 + 0x180) != 0) || (*(int *)(param_1 + 0x280) != 0)) {
          png_chunk_benign_error(param_1,"Extra compressed data");
        }
        if (uVar6 == 0) goto LAB_00dc0b4c;
        if (param_2 != 0) {
LAB_00dc0b80:
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"Not enough image data");
        }
        pcVar4 = "Too much image data";
      }
      else {
        png_zstream_error(param_1);
        pcVar4 = *(char **)(param_1 + 0x1a8);
        if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
          png_chunk_error(param_1,pcVar4);
        }
      }
      png_chunk_benign_error(param_1,pcVar4);
      goto LAB_00dc0b4c;
    }
    if (uVar6 == 0) {
LAB_00dc0b4c:
      if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


