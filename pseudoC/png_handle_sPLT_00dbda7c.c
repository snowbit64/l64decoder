// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_sPLT
// Entry Point: 00dbda7c
// Size: 800 bytes
// Signature: undefined png_handle_sPLT(void)


void png_handle_sPLT(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  char *local_88;
  char local_80;
  long local_78;
  uint local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  uVar11 = (ulong)param_3;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(int *)(param_1 + 0x464) != 0) {
    iVar6 = *(int *)(param_1 + 0x464) + -1;
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x464) = iVar6;
      if (iVar6 != 1) goto LAB_00dbdaf0;
      png_warning(param_1,"No space in chunk cache for sPLT");
    }
    png_crc_finish(param_1,uVar11);
    goto LAB_00dbdc1c;
  }
LAB_00dbdaf0:
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) == 0) {
    pcVar10 = *(char **)(param_1 + 0x498);
    uVar12 = (ulong)(param_3 + 1);
    if (pcVar10 == (char *)0x0) {
LAB_00dbdb28:
      pcVar10 = (char *)png_malloc_base(param_1,uVar12);
      if (pcVar10 == (char *)0x0) {
        png_crc_finish(param_1,uVar11);
        pcVar10 = "out of memory";
        goto LAB_00dbdc14;
      }
      memset(pcVar10,0,uVar12);
      *(char **)(param_1 + 0x498) = pcVar10;
      *(ulong *)(param_1 + 0x4a0) = uVar12;
    }
    else if (*(ulong *)(param_1 + 0x4a0) < uVar12) {
      *(undefined8 *)(param_1 + 0x498) = 0;
      *(undefined8 *)(param_1 + 0x4a0) = 0;
      png_free(param_1,pcVar10);
      goto LAB_00dbdb28;
    }
    png_read_data(param_1,pcVar10,uVar11);
    png_calculate_crc(param_1,pcVar10,uVar11);
    iVar6 = png_crc_finish(param_1,0);
    if (iVar6 == 0) {
      pcVar10[uVar11] = '\0';
      pcVar14 = pcVar10;
      do {
        pcVar13 = pcVar14;
        pcVar14 = pcVar13 + 1;
      } while (*pcVar13 != '\0');
      if ((param_3 < 2) || (pcVar10 + (param_3 - 2) < pcVar14)) {
        pcVar10 = "malformed sPLT chunk";
      }
      else {
        cVar2 = pcVar13[1];
        uVar3 = (((int)pcVar10 - (int)pcVar13) + param_3) - 2;
        uVar7 = 6;
        if (cVar2 != '\b') {
          uVar7 = 10;
        }
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar3 / uVar7;
        }
        uVar11 = (ulong)uVar4;
        local_80 = cVar2;
        if (uVar3 == uVar4 * uVar7) {
          local_70 = uVar4;
          local_78 = png_malloc_warn(param_1,(uVar11 + (ulong)uVar4 * 4) * 2);
          if (local_78 != 0) {
            if (uVar7 <= uVar3) {
              if (cVar2 == '\b') {
                uVar12 = 0;
                puVar8 = (ushort *)(local_78 + 4);
                lVar9 = 1;
                do {
                  pbVar1 = (byte *)(pcVar14 + lVar9);
                  uVar12 = uVar12 + 1;
                  lVar9 = lVar9 + 6;
                  puVar8[-2] = (ushort)*pbVar1;
                  puVar8[-1] = (ushort)pbVar1[1];
                  *puVar8 = (ushort)pbVar1[2];
                  puVar8[1] = (ushort)pbVar1[3];
                  puVar8[2] = *(ushort *)(pbVar1 + 4) >> 8 |
                              (ushort)((*(ushort *)(pbVar1 + 4) & 0xff00ff) << 8);
                  puVar8 = puVar8 + 5;
                } while (uVar12 != uVar11);
              }
              else {
                uVar12 = 0;
                lVar9 = 0;
                do {
                  puVar8 = (ushort *)(local_78 + lVar9);
                  uVar12 = uVar12 + 1;
                  *puVar8 = *(ushort *)(pcVar14 + lVar9 + 1) >> 8 |
                            (ushort)((*(ushort *)(pcVar14 + lVar9 + 1) & 0xff00ff) << 8);
                  puVar8[1] = *(ushort *)(pcVar14 + lVar9 + 3) >> 8 |
                              (ushort)((*(ushort *)(pcVar14 + lVar9 + 3) & 0xff00ff) << 8);
                  puVar8[2] = *(ushort *)(pcVar14 + lVar9 + 5) >> 8 |
                              (ushort)((*(ushort *)(pcVar14 + lVar9 + 5) & 0xff00ff) << 8);
                  puVar8[3] = *(ushort *)(pcVar14 + lVar9 + 7) >> 8 |
                              (ushort)((*(ushort *)(pcVar14 + lVar9 + 7) & 0xff00ff) << 8);
                  puVar8[4] = *(ushort *)(pcVar14 + lVar9 + 9) >> 8 |
                              (ushort)((*(ushort *)(pcVar14 + lVar9 + 9) & 0xff00ff) << 8);
                  lVar9 = lVar9 + 10;
                } while (uVar12 != uVar11);
              }
            }
            local_88 = pcVar10;
            png_set_sPLT(param_1,param_2,&local_88,1);
            png_free(param_1,local_78);
            goto LAB_00dbdc1c;
          }
          pcVar10 = "sPLT chunk requires too much memory";
        }
        else {
          pcVar10 = "sPLT chunk has bad length";
        }
      }
      png_warning(param_1,pcVar10);
    }
  }
  else {
    png_crc_finish(param_1,uVar11);
    pcVar10 = "out of place";
LAB_00dbdc14:
    png_chunk_benign_error(param_1,pcVar10);
  }
LAB_00dbdc1c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


