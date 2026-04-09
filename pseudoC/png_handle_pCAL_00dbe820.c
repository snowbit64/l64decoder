// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_pCAL
// Entry Point: 00dbe820
// Size: 904 bytes
// Signature: undefined png_handle_pCAL(void)


void png_handle_pCAL(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  void *__s;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  uVar10 = (ulong)param_3;
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) != 0) {
    png_crc_finish(param_1,uVar10);
    pcVar5 = "out of place";
    goto LAB_00dbea90;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 9) >> 2 & 1) != 0)) {
    png_crc_finish(param_1,uVar10);
    pcVar5 = "duplicate";
    goto LAB_00dbea90;
  }
  __s = *(void **)(param_1 + 0x498);
  uVar12 = (ulong)(param_3 + 1);
  if (__s == (void *)0x0) {
LAB_00dbe890:
    __s = (void *)png_malloc_base(param_1,uVar12);
    if (__s != (void *)0x0) {
      memset(__s,0,uVar12);
      *(void **)(param_1 + 0x498) = __s;
      *(ulong *)(param_1 + 0x4a0) = uVar12;
      goto LAB_00dbe8b8;
    }
    png_crc_finish(param_1,param_3);
  }
  else {
    if (*(ulong *)(param_1 + 0x4a0) < uVar12) {
      *(undefined8 *)(param_1 + 0x498) = 0;
      *(undefined8 *)(param_1 + 0x4a0) = 0;
      png_free(param_1,__s);
      goto LAB_00dbe890;
    }
LAB_00dbe8b8:
    png_read_data(param_1,__s,uVar10);
    png_calculate_crc(param_1,__s,uVar10);
    iVar3 = png_crc_finish(param_1,0);
    if (iVar3 != 0) {
      return;
    }
    *(byte *)((long)__s + uVar10) = 0;
    lVar4 = 0;
    do {
      lVar7 = lVar4;
      lVar4 = lVar7 + 1;
    } while (*(char *)((long)__s + lVar7) != '\0');
    if ((long)((uVar10 - lVar4) + 1) < 0xd) {
      pcVar5 = "invalid";
      goto LAB_00dbea90;
    }
    bVar1 = *(byte *)((long)__s + lVar4);
    if ((char)bVar1 < '\0') {
      uVar9 = -(-((uint)*(byte *)((long)__s + lVar7 + 2) << 0x10 | (uint)bVar1 << 0x18 |
                  (uint)*(byte *)((long)__s + lVar7 + 3) << 8 |
                 (uint)*(byte *)((long)__s + lVar7 + 4)) & 0x7fffffff);
      bVar1 = *(byte *)((long)__s + lVar7 + 5);
      uVar11 = (uint)bVar1;
      uVar8 = (uint)bVar1;
      if (-1 < (char)bVar1) goto LAB_00dbea24;
LAB_00dbe9c0:
      uVar11 = -(-((uint)*(byte *)((long)__s + lVar7 + 6) << 0x10 | uVar8 << 0x18 |
                   (uint)*(byte *)((long)__s + lVar7 + 7) << 8 |
                  (uint)*(byte *)((long)__s + lVar7 + 8)) & 0x7fffffff);
    }
    else {
      uVar9 = (uint)bVar1 << 0x18 | (uint)*(byte *)((long)__s + lVar7 + 2) << 0x10 |
              (uint)*(byte *)((long)__s + lVar7 + 3) << 8 | (uint)*(byte *)((long)__s + lVar7 + 4);
      bVar1 = *(byte *)((long)__s + lVar7 + 5);
      uVar8 = (uint)bVar1;
      uVar11 = uVar8;
      if ((char)bVar1 < '\0') goto LAB_00dbe9c0;
LAB_00dbea24:
      uVar11 = uVar11 << 0x18 | (uint)*(byte *)((long)__s + lVar7 + 6) << 0x10 |
               (uint)*(byte *)((long)__s + lVar7 + 7) << 8 | (uint)*(byte *)((long)__s + lVar7 + 8);
    }
    bVar1 = *(byte *)((long)__s + lVar7 + 9);
    bVar2 = *(byte *)((long)__s + lVar7 + 10);
    uVar12 = (ulong)bVar2;
    if (((((bVar1 == 0) && (bVar2 != 2)) || ((bVar1 == 1 && (bVar2 != 3)))) ||
        ((bVar1 == 2 && (bVar2 != 3)))) || ((bVar1 == 3 && (bVar2 != 4)))) {
      pcVar5 = "invalid parameter count";
      goto LAB_00dbea90;
    }
    pbVar13 = (byte *)((long)__s + lVar4) + 9;
    if (3 < bVar1) {
      png_chunk_benign_error(param_1,"unrecognized equation type");
    }
    do {
      pbVar13 = pbVar13 + 1;
    } while (*pbVar13 != 0);
    lVar4 = png_malloc_warn(param_1,uVar12 << 3);
    if (lVar4 != 0) {
      if (bVar2 != 0) {
        uVar6 = 0;
        do {
          pbVar13 = pbVar13 + 1;
          *(byte **)(lVar4 + uVar6 * 8) = pbVar13;
          while( true ) {
            if ((byte *)((long)__s + uVar10) < pbVar13) {
              png_free(param_1,lVar4);
              pcVar5 = "invalid data";
              goto LAB_00dbea90;
            }
            if (*pbVar13 == 0) break;
            pbVar13 = pbVar13 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar12);
      }
      png_set_pCAL(param_1,param_2,__s,uVar9,uVar11,bVar1,uVar12,(long)__s + lVar7 + 0xb,lVar4);
      png_free(param_1,lVar4);
      return;
    }
  }
  pcVar5 = "out of memory";
LAB_00dbea90:
  png_chunk_benign_error(param_1,pcVar5);
  return;
}


