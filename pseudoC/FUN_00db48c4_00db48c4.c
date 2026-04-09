// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db48c4
// Entry Point: 00db48c4
// Size: 1432 bytes
// Signature: undefined FUN_00db48c4(void)


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00db48c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined uVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  long **pplVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint local_78;
  ushort local_74;
  ushort local_72;
  ushort local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pplVar14 = (long **)*param_1;
  uVar3 = *(uint *)((long)pplVar14 + 0x14);
  lVar1 = **pplVar14;
  lVar2 = (*pplVar14)[1];
  png_set_expand(lVar1);
  uVar15 = *(byte *)(lVar1 + 0x29f) & 2;
  if ((*(byte *)(lVar1 + 0x29f) >> 2 & 1) == 0) {
    uVar15 = *(short *)(lVar1 + 0x298) != 0 | uVar15;
  }
  else {
    uVar15 = uVar15 | 1;
  }
  uVar18 = uVar15 | 4;
  if (*(char *)(lVar1 + 0x2a0) != '\x10') {
    uVar18 = uVar15;
  }
  uVar15 = uVar18 ^ uVar3;
  if ((uVar15 >> 1 & 1) == 0) {
joined_r0x00db49b4:
    uVar11 = 0;
    if (uVar18 >> 2 == 0) goto LAB_00db49c8;
LAB_00db49b8:
    uVar10 = 100000;
    if ((*(byte *)(pplVar14 + 3) >> 2 & 1) != 0) goto LAB_00db49c8;
  }
  else {
    if ((uVar3 >> 1 & 1) != 0) {
      png_set_gray_to_rgb(lVar1);
      uVar15 = uVar15 & 0xfffffffd;
      goto joined_r0x00db49b4;
    }
    uVar11 = uVar18 & 1;
    png_set_rgb_to_gray_fixed(lVar1,1,0xffffffff,0xffffffff);
    uVar15 = uVar15 & 0xfffffffd;
    if (uVar18 >> 2 != 0) goto LAB_00db49b8;
LAB_00db49c8:
    uVar10 = 0xffffffff;
  }
  uVar8 = 100000;
  png_set_alpha_mode_fixed(lVar1,0,uVar10);
  if ((uVar3 & 4) == 0) {
    uVar8 = 0xffffffff;
  }
  uVar21 = uVar18 & (uVar3 & 4) >> 2;
  uVar20 = uVar15 & 0xffffffbf;
  if ((uVar15 & 0x40) != 0) {
    uVar21 = 2;
  }
  uVar17 = uVar21;
  if (uVar11 != 0) {
    iVar7 = png_muldiv(&local_78,uVar8,*(undefined4 *)(lVar1 + 0x4d8),100000);
    if ((iVar7 == 0) || (iVar7 = png_gamma_significant(local_78), iVar7 != 0)) {
      uVar17 = 0;
      if (uVar21 != 1) {
        uVar17 = uVar21;
      }
      uVar11 = 1;
      if (uVar21 == 1) {
        uVar11 = 2;
      }
    }
    else {
      uVar11 = 0;
    }
  }
  if ((uVar15 >> 2 & 1) != 0) {
    if ((uVar3 >> 2 & 1) == 0) {
      png_set_scale_16();
    }
    else {
      png_set_expand_16(lVar1);
    }
    uVar20 = uVar15 & 0xffffffbb;
  }
  if ((uVar20 & 1) == 0) {
    uVar6 = false;
    png_set_alpha_mode_fixed(lVar1,uVar17,uVar8);
    uVar15 = uVar20;
  }
  else {
    if ((uVar18 & 1) == 0) {
      uVar12 = 0xff;
      if ((uVar3 & 4) != 0) {
        uVar12 = 0xffff;
      }
      if ((uVar3 & 0x20) != 0) {
        uVar20 = uVar20 & 0xffffff9f;
      }
      png_set_add_alpha(lVar1,uVar12,(uVar3 & 0x20) >> 5 ^ 1);
LAB_00db4ab0:
      uVar6 = false;
    }
    else {
      if (uVar11 == 0) {
        if ((uVar3 >> 2 & 1) == 0) {
          puVar13 = (undefined *)param_1[4];
          if (puVar13 == (undefined *)0x0) {
            uVar11 = 0;
            uVar6 = true;
            uVar17 = 2;
            goto LAB_00db4adc;
          }
          local_78 = (uint)(CONCAT12(*puVar13,(short)local_78) & 0xffff00);
          local_74 = (ushort)(byte)puVar13[1];
          local_70 = (ushort)(byte)puVar13[1];
          local_72 = (ushort)(byte)puVar13[2];
          png_set_background_fixed(lVar1,&local_78,1,0,0);
          uVar11 = 0;
        }
        else {
          png_set_strip_alpha(lVar1);
          uVar11 = 0;
        }
        goto LAB_00db4ab0;
      }
      uVar6 = false;
      uVar11 = 2;
    }
LAB_00db4adc:
    png_set_alpha_mode_fixed(lVar1,uVar17,uVar8);
    uVar15 = uVar20 & 0xfffffffe;
  }
  uVar18 = uVar3;
  uVar21 = uVar15;
  if ((uVar20 >> 4 & 1) != 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      uVar18 = uVar3 & 0xffffffef;
      uVar21 = uVar15 & 0xffffffef;
    }
    else {
      png_set_bgr(lVar1);
      uVar21 = uVar15 & 0xffffffef;
    }
  }
  if ((uVar15 >> 5 & 1) != 0) {
    if ((uVar18 & 1) == 0) {
      uVar18 = uVar18 & 0xffffffdf;
    }
    else if (uVar11 != 2) {
      png_set_swap_alpha(lVar1);
    }
    uVar21 = uVar21 & 0xffffffdf;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    png_set_swap(lVar1);
  }
  if (uVar21 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar1,"png_read_image: unsupported transformation");
  }
  png_set_keep_unknown_chunks(lVar1,1,0,0xffffffff);
  png_set_keep_unknown_chunks(lVar1,0,&DAT_00549c72,6);
  iVar7 = 0;
  if (uVar11 == 2) {
    if ((*(byte *)(lVar1 + 0x168) >> 6 & 1) != 0) goto LAB_00db4bdc;
LAB_00db4b78:
    png_read_start_row(lVar1);
    png_read_transform_info(lVar1,lVar2);
    uVar15 = *(byte *)(lVar2 + 0x25) & 2;
    if ((*(byte *)(lVar2 + 0x25) >> 2 & 1) != 0) goto LAB_00db4b98;
LAB_00db4bf8:
    if ((bool)uVar6) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar1,"png_image_read: alpha channel lost");
    }
  }
  else {
    if (!(bool)uVar6) {
      iVar7 = png_set_interlace_handling(lVar1);
    }
    if ((*(byte *)(lVar1 + 0x168) >> 6 & 1) == 0) goto LAB_00db4b78;
LAB_00db4bdc:
    png_app_error(lVar1,"png_read_update_info/png_start_read_image: duplicate call");
    uVar15 = *(byte *)(lVar2 + 0x25) & 2;
    if ((*(byte *)(lVar2 + 0x25) >> 2 & 1) == 0) goto LAB_00db4bf8;
LAB_00db4b98:
    if (!(bool)uVar6) {
      uVar15 = uVar15 | (uint)(uVar11 != 2) | uVar18 & 1;
    }
  }
  uVar15 = uVar15 | uVar18 & 0x40;
  uVar21 = *(uint *)(lVar1 + 0x16c);
  uVar20 = uVar15 | 4;
  if (*(char *)(lVar2 + 0x24) != '\x10') {
    uVar20 = uVar15;
  }
  uVar15 = uVar20 & 0xffffffe0 | uVar20 & 0xf | (uVar21 & 1) << 4;
  uVar20 = uVar15 | 0x20;
  if (uVar11 == 2 && (uVar18 & 0x20) != 0) {
    uVar15 = uVar20;
  }
  if ((uVar21 >> 0x11 & 1) == 0) {
    if ((uVar21 >> 0x18 & 1) != 0) {
      uVar21 = *(uint *)(lVar1 + 0x168) & 0x80;
      if (uVar21 == 0) {
        uVar15 = uVar20;
      }
      if (((uint)(uVar11 != 2) | uVar21 >> 7) == 0) goto LAB_00db4c58;
    }
  }
  else {
    uVar15 = uVar20;
    if (uVar11 == 2) {
LAB_00db4c58:
                    /* WARNING: Subroutine does not return */
      png_error(lVar1,"unexpected alpha swap transformation");
    }
  }
  if (uVar15 != uVar18) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar1,"png_read_image: invalid transformations");
  }
  lVar19 = param_1[1];
  lVar16 = (long)*(int *)(param_1 + 2) << (ulong)(uVar3 >> 2 & 1);
  if (lVar16 < 0) {
    lVar19 = lVar19 - lVar16 * (ulong)(*(int *)(pplVar14 + 2) - 1);
    param_1[6] = lVar19;
    param_1[7] = lVar16;
    if (!(bool)uVar6) goto LAB_00db4cd4;
LAB_00db4c98:
    uVar10 = png_get_rowbytes(lVar1,lVar2);
    uVar10 = png_malloc(lVar1,uVar10);
    pcVar9 = FUN_00db5e9c;
  }
  else {
    param_1[6] = lVar19;
    param_1[7] = lVar16;
    if ((bool)uVar6) goto LAB_00db4c98;
LAB_00db4cd4:
    if (uVar11 != 2) {
      if ((0 < iVar7) && (iVar4 = *(int *)(pplVar14 + 2), iVar4 != 0)) {
        while( true ) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            png_read_row(lVar1,lVar19,0);
            lVar19 = lVar19 + lVar16;
          }
          if (iVar7 < 2) break;
          iVar4 = *(int *)(pplVar14 + 2);
          iVar7 = iVar7 + -1;
          lVar19 = param_1[6];
        }
      }
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return 1;
      }
      goto LAB_00db4dc0;
    }
    uVar10 = png_get_rowbytes(lVar1,lVar2);
    uVar10 = png_malloc(lVar1,uVar10);
    pcVar9 = FUN_00db61ac;
  }
  param_1[5] = uVar10;
  uVar8 = png_safe_execute(pplVar14,pcVar9,param_1);
  param_1[5] = 0;
  png_free(lVar1,uVar10);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar8;
  }
LAB_00db4dc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


