// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 00a9917c
// Size: 1180 bytes
// Signature: undefined __cdecl loadImage(char * param_1, uchar * param_2, uint param_3, ORIGIN param_4, ImageDesc * param_5)


/* PNGUtil::loadImage(char const*, unsigned char*, unsigned int, ImageDesc::ORIGIN, ImageDesc&) */

void PNGUtil::loadImage(char *param_1,uchar *param_2,uint param_3,ORIGIN param_4,ImageDesc *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  __jmp_buf_tag *__env;
  void *pvVar10;
  void *pvVar11;
  long *plVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  uchar *local_78;
  uint local_70;
  uint uStack_6c;
  long local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = 0;
  if ((HEADER_PREFIX_SIZE <= param_3) && (iVar8 = png_sig_cmp(param_2,0), iVar8 == 0)) {
    lVar9 = png_create_read_struct_2("1.6.37",0,0,0,0,malloc_fn,free_fn);
    local_60 = lVar9;
    if (lVar9 == 0) goto LAB_00a99270;
    lVar9 = png_create_info_struct();
    local_68 = lVar9;
    if (lVar9 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      __env = (__jmp_buf_tag *)png_set_longjmp_fn(local_60,longjmp,0x100);
      iVar8 = setjmp(__env);
      if (iVar8 == 0) {
        uStack_6c = HEADER_PREFIX_SIZE;
        local_78 = param_2;
        local_70 = param_3;
        png_set_read_fn(local_60,&local_78,user_read_data);
        png_set_sig_bytes(local_60,8);
        png_read_info(local_60,lVar9);
        png_get_IHDR(local_60,lVar9,&local_84,&local_88,&local_80,&local_7c,0,0);
        if ((local_7c == 0) && (local_80 < 8)) {
          png_set_expand_gray_1_2_4_to_8(local_60);
        }
        if (local_7c == 3) {
          png_set_expand(local_60);
        }
        iVar8 = png_get_valid(local_60,lVar9,0x10);
        if ((iVar8 != 0) && (iVar8 = png_get_valid(local_60,lVar9,8), iVar8 == 0)) {
          png_set_tRNS_to_alpha(local_60);
        }
        png_get_IHDR(local_60,lVar9,&local_84,&local_88,&local_80,&local_7c,0,0);
        *(undefined4 *)param_5 = local_84;
        *(undefined4 *)(param_5 + 4) = local_88;
        if (local_80 < 8) {
          local_80 = 8;
          png_set_packing(local_60);
        }
        if (local_80 == 0x10) {
          png_set_swap(local_60);
        }
        if (local_80 == 8) {
          uVar13 = 1;
        }
        else {
          if (local_80 != 0x10) goto LAB_00a9926c;
          uVar13 = 3;
        }
        *(undefined4 *)(param_5 + 0x18) = uVar13;
        png_read_update_info(local_60,lVar9);
        bVar7 = png_get_channels(local_60,lVar9);
        *(uint *)(param_5 + 0x14) = (uint)bVar7;
        if (3 < (byte)(bVar7 - 1)) goto LAB_00a9926c;
        uVar21 = *(uint *)(param_5 + 4);
        uVar16 = (ulong)uVar21;
        uVar1 = *(int *)param_5 * (uint)bVar7 * local_80 >> 3;
        *(undefined4 *)(param_5 + 0x40) =
             *(undefined4 *)(&DAT_004c4f90 + (long)(char)(bVar7 - 1) * 4);
        pvVar10 = operator_new__((ulong)(uVar1 * uVar21));
        *(uint *)(param_5 + 0x20) = uVar1 * uVar21;
        *(void **)(param_5 + 0x28) = pvVar10;
        pvVar11 = operator_new__(uVar16 << 3);
        *(ORIGIN *)(param_5 + 0x44) = param_4;
        uVar14 = (ulong)uVar21;
        if (param_4 == 0) {
          if (uVar21 != 0) {
            if (uVar21 < 4) {
              uVar15 = 0;
            }
            else {
              uVar14 = uVar16 & 0xfffffffc;
              iVar8 = 0;
              iVar17 = 1;
              uVar15 = uVar14;
              plVar12 = (long *)((long)pvVar11 + 0x10);
              do {
                iVar18 = iVar8 + 2;
                iVar20 = iVar17 + 2;
                uVar21 = uVar1 * iVar8;
                uVar22 = uVar1 * iVar17;
                iVar8 = iVar8 + 4;
                iVar17 = iVar17 + 4;
                uVar15 = uVar15 - 4;
                plVar12[-1] = (long)pvVar10 + (ulong)uVar22;
                plVar12[-2] = (long)pvVar10 + (ulong)uVar21;
                plVar12[1] = (long)pvVar10 + (ulong)(uVar1 * iVar20);
                *plVar12 = (long)pvVar10 + (ulong)(uVar1 * iVar18);
                plVar12 = plVar12 + 4;
              } while (uVar15 != 0);
              uVar15 = uVar14;
              if (uVar14 == uVar16) goto LAB_00a995e8;
            }
            uVar14 = uVar16 - uVar15;
            uVar21 = uVar1 * (int)uVar15;
            plVar12 = (long *)((long)pvVar11 + uVar15 * 8);
            do {
              uVar14 = uVar14 - 1;
              uVar16 = (ulong)uVar21;
              uVar21 = uVar21 + uVar1;
              *plVar12 = (long)pvVar10 + uVar16;
              plVar12 = plVar12 + 1;
            } while (uVar14 != 0);
          }
        }
        else if (uVar21 != 0) {
          if (uVar21 < 4) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar16 & 0xfffffffc;
            uVar19 = 0x100000000;
            uVar15 = uVar14;
            plVar12 = (long *)((long)pvVar11 + 0x10);
            do {
              iVar18 = CONCAT13(~(byte)((ulong)uVar19 >> 0x18),
                                CONCAT12(~(byte)((ulong)uVar19 >> 0x10),
                                         CONCAT11(~(byte)((ulong)uVar19 >> 8),~(byte)uVar19)));
              uVar3 = (ulong)uVar19 >> 0x20;
              uVar4 = (ulong)uVar19 >> 0x28;
              uVar5 = (ulong)uVar19 >> 0x30;
              uVar6 = (ulong)uVar19 >> 0x38;
              iVar8 = (int)uVar19;
              iVar17 = (int)((ulong)uVar19 >> 0x20);
              uVar19 = CONCAT44(iVar17 + 4,iVar8 + 4);
              uVar15 = uVar15 - 4;
              plVar12[-1] = (long)pvVar10 +
                            (ulong)((uVar21 + (int)(CONCAT17(~(byte)uVar6,
                                                             CONCAT16(~(byte)uVar5,
                                                                      CONCAT15(~(byte)uVar4,
                                                                               CONCAT14(~(byte)uVar3
                                                                                        ,iVar18))))
                                                   >> 0x20)) * uVar1);
              plVar12[-2] = (long)pvVar10 + (ulong)((uVar21 + iVar18) * uVar1);
              plVar12[1] = (long)pvVar10 + (ulong)(((uVar21 - iVar17) + -3) * uVar1);
              *plVar12 = (long)pvVar10 + (ulong)(((uVar21 - iVar8) + -3) * uVar1);
              plVar12 = plVar12 + 4;
            } while (uVar15 != 0);
            if (uVar14 == uVar16) goto LAB_00a995e8;
          }
          lVar9 = uVar16 - uVar14;
          uVar21 = uVar1 * (~(uint)uVar14 + uVar21);
          plVar12 = (long *)((long)pvVar11 + uVar14 * 8);
          do {
            uVar14 = (ulong)uVar21;
            lVar9 = lVar9 + -1;
            uVar21 = uVar21 - uVar1;
            *plVar12 = (long)pvVar10 + uVar14;
            plVar12 = plVar12 + 1;
          } while (lVar9 != 0);
          uVar14 = 0;
        }
LAB_00a995e8:
        png_read_image(uVar14,local_60,pvVar11);
        png_destroy_read_struct(&local_60,&local_68,0);
        operator_delete__(pvVar11);
        lVar9 = 1;
        goto LAB_00a99270;
      }
      plVar12 = &local_68;
    }
    png_destroy_read_struct(&local_60,plVar12,0);
  }
LAB_00a9926c:
  lVar9 = 0;
LAB_00a99270:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar9);
}


