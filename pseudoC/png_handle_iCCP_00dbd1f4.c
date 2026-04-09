// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_iCCP
// Entry Point: 00dbd1f4
// Size: 1208 bytes
// Signature: undefined png_handle_iCCP(void)


void png_handle_iCCP(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  void *__dest;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_550;
  uint local_544;
  undefined auStack_540 [1024];
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  uint local_c0;
  char local_bc [84];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_544 = param_3;
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 < 0xe) {
LAB_00dbd264:
      png_crc_finish(param_1,local_544);
      pcVar10 = "too short";
    }
    else {
      if ((short)*(ushort *)(param_1 + 0x522) < 0) {
        png_crc_finish(param_1,param_3);
        goto LAB_00dbd278;
      }
      if ((*(ushort *)(param_1 + 0x522) >> 2 & 1) != 0) {
        pcVar10 = "too many profiles";
        goto LAB_00dbd388;
      }
      uVar8 = param_3;
      if (0x50 < param_3) {
        uVar8 = 0x51;
      }
      uVar11 = (ulong)uVar8;
      png_read_data(param_1,local_bc,uVar11);
      png_calculate_crc(param_1,local_bc,uVar11);
      local_544 = param_3 - uVar8;
      if (local_544 < 0xb) goto LAB_00dbd264;
      lVar2 = param_1 + 0x4d8;
      uVar9 = 0;
      do {
        uVar12 = uVar9;
        if ((local_bc[uVar9] == '\0') || (uVar12 = uVar9 + 1, 0x4e < uVar9)) break;
        uVar9 = uVar12;
      } while (uVar12 < uVar11);
      if ((int)uVar12 - 1U < 0x4f) {
        __n = (uVar12 & 0xffffffff) + 1;
        if ((uVar8 <= (uint)__n) || (local_bc[(uVar12 & 0xffffffff) + 1] != '\0')) {
          pcVar10 = "bad compression method";
          goto LAB_00dbd388;
        }
        iVar6 = FUN_00dbd6ac(param_1,0x69434350);
        if (iVar6 != 0) {
          pcVar10 = *(char **)(param_1 + 0x1a8);
          goto LAB_00dbd388;
        }
        uVar1 = (int)uVar12 + 2;
        local_c0 = 0;
        lStack_d8 = 0;
        local_e0 = 0;
        lStack_c8 = 0;
        lStack_d0 = 0;
        lStack_f8 = 0;
        local_100 = 0;
        lStack_e8 = 0;
        local_f0 = 0;
        lStack_118 = 0;
        local_120 = 0;
        lStack_108 = 0;
        local_110 = 0;
        lStack_138 = 0;
        local_140 = 0;
        lStack_128 = 0;
        local_130 = 0;
        local_550 = 0x84;
        *(char **)(param_1 + 0x178) = local_bc + uVar1;
        *(uint *)(param_1 + 0x180) = uVar8 - uVar1;
        FUN_00dbd818(param_1,auStack_540,&local_544,&local_140,&local_550,0);
        if (local_550 != 0) {
          pcVar10 = *(char **)(param_1 + 0x1a8);
LAB_00dbd52c:
          *(undefined4 *)(param_1 + 0x170) = 0;
          goto LAB_00dbd388;
        }
        uVar11 = (local_140 << 0x20 & 0xff00ff00ff00ff00U) >> 8 |
                 (local_140 << 0x20 & 0xff00ff00ff00ffU) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | uVar11 << 0x10;
        uVar9 = uVar11 >> 0x20;
        iVar6 = png_icc_check_length(param_1,lVar2,local_bc,uVar9);
        if ((iVar6 == 0) ||
           (iVar6 = png_icc_check_header
                              (param_1,lVar2,local_bc,uVar9,&local_140,
                               *(undefined *)(param_1 + 0x29f)), uVar8 = local_c0, iVar6 == 0)) {
          pcVar10 = (char *)0x0;
          goto LAB_00dbd52c;
        }
        uVar1 = local_c0 >> 8;
        uVar4 = local_c0 >> 0x10;
        uVar5 = local_c0 >> 0x18;
        plVar7 = (long *)FUN_00dbd9c4(param_1,uVar9,2);
        if (plVar7 == (long *)0x0) {
          pcVar10 = "out of memory";
LAB_00dbd53c:
          *(undefined4 *)(param_1 + 0x170) = 0;
          goto LAB_00dbd388;
        }
        plVar7[1] = lStack_138;
        *plVar7 = local_140;
        uVar12 = (ulong)((uVar8 << 0x18 | (uVar1 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 | uVar5) *
                        0xc);
        plVar7[7] = lStack_108;
        plVar7[6] = local_110;
        plVar7[9] = lStack_f8;
        plVar7[8] = local_100;
        plVar7[3] = lStack_128;
        plVar7[2] = local_130;
        plVar7[5] = lStack_118;
        plVar7[4] = local_120;
        plVar7[0xd] = lStack_d8;
        plVar7[0xc] = local_e0;
        plVar7[0xf] = lStack_c8;
        plVar7[0xe] = lStack_d0;
        *(uint *)(plVar7 + 0x10) = local_c0;
        plVar7[0xb] = lStack_e8;
        plVar7[10] = local_f0;
        local_550 = uVar12;
        FUN_00dbd818(param_1,auStack_540,&local_544,(long)plVar7 + 0x84,&local_550,0);
        if (local_550 != 0) {
LAB_00dbd520:
          pcVar10 = *(char **)(param_1 + 0x1a8);
          goto LAB_00dbd53c;
        }
        iVar6 = png_icc_check_tag_table(param_1,lVar2,local_bc,uVar9,plVar7);
        if (iVar6 == 0) {
          pcVar10 = (char *)0x0;
          goto LAB_00dbd53c;
        }
        local_550 = (uVar9 - uVar12) - 0x84;
        FUN_00dbd818(param_1,auStack_540,&local_544,(long)plVar7 + 0x84 + uVar12,&local_550,1);
        uVar8 = local_544;
        if (local_544 == 0) {
          if (local_550 != 0) goto LAB_00dbd520;
        }
        else {
          if ((*(byte *)(param_1 + 0x16a) >> 4 & 1) == 0) {
            pcVar10 = "extra compressed data";
            goto LAB_00dbd53c;
          }
          if (local_550 != 0) goto LAB_00dbd520;
          png_chunk_warning(param_1,"extra compressed data");
        }
        png_crc_finish(param_1,uVar8);
        png_icc_set_sRGB(param_1,lVar2,plVar7,*(undefined8 *)(param_1 + 0x1d8));
        if (param_2 == 0) {
LAB_00dbd660:
          *(undefined4 *)(param_1 + 0x170) = 0;
          goto LAB_00dbd278;
        }
        png_free_data(param_1,param_2,0x10,0);
        __dest = (void *)png_malloc_base(param_1,__n);
        *(void **)(param_2 + 0x80) = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,local_bc,__n);
          uVar8 = *(uint *)(param_2 + 300);
          uVar1 = *(uint *)(param_2 + 8);
          *(int *)(param_2 + 0x90) = (int)(uVar11 >> 0x20);
          *(undefined8 *)(param_1 + 0x498) = 0;
          *(long **)(param_2 + 0x88) = plVar7;
          *(uint *)(param_2 + 300) = uVar8 | 0x10;
          *(uint *)(param_2 + 8) = uVar1 | 0x1000;
          png_colorspace_sync(param_1,param_2);
          goto LAB_00dbd660;
        }
        *(ushort *)(param_1 + 0x522) = *(ushort *)(param_1 + 0x522) | 0x8000;
        png_colorspace_sync(param_1,param_2);
        *(undefined4 *)(param_1 + 0x170) = 0;
        pcVar10 = "out of memory";
      }
      else {
        pcVar10 = "bad keyword";
LAB_00dbd388:
        png_crc_finish(param_1,local_544);
      }
      *(ushort *)(param_1 + 0x522) = *(ushort *)(param_1 + 0x522) | 0x8000;
      png_colorspace_sync(param_1,param_2);
      if (pcVar10 == (char *)0x0) goto LAB_00dbd278;
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar10 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar10);
LAB_00dbd278:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


