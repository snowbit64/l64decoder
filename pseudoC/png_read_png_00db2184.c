// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_png
// Entry Point: 00db2184
// Size: 608 bytes
// Signature: undefined png_read_png(void)


/* WARNING: Type propagation algorithm not settling */

void png_read_png(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    png_read_info(param_1,param_2);
    if (*(uint *)(param_2 + 4) >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Image is too high to process with png_read_png()");
    }
    if ((param_3 >> 0xf & 1) != 0) {
      png_set_scale_16(param_1);
    }
    if ((param_3 & 1) != 0) {
      png_set_strip_16(param_1);
    }
    if ((param_3 >> 1 & 1) != 0) {
      png_set_strip_alpha(param_1);
    }
    if ((param_3 >> 2 & 1) != 0) {
      png_set_packing(param_1);
    }
    if ((param_3 >> 3 & 1) != 0) {
      png_set_packswap(param_1);
    }
    if ((param_3 >> 4 & 1) != 0) {
      png_set_expand(param_1);
    }
    if ((param_3 >> 5 & 1) != 0) {
      png_set_invert_mono(param_1);
    }
    if (((param_3 >> 6 & 1) != 0) && ((*(byte *)(param_2 + 8) >> 1 & 1) != 0)) {
      png_set_shift(param_1,param_2 + 0xb0);
    }
    if ((param_3 >> 7 & 1) != 0) {
      png_set_bgr(param_1);
    }
    if ((param_3 >> 8 & 1) != 0) {
      png_set_swap_alpha(param_1);
    }
    if ((param_3 >> 9 & 1) != 0) {
      png_set_swap(param_1);
    }
    if ((param_3 >> 10 & 1) != 0) {
      png_set_invert_alpha(param_1);
    }
    if ((param_3 >> 0xd & 1) != 0) {
      png_set_gray_to_rgb(param_1);
    }
    if ((param_3 >> 0xe & 1) == 0) {
      png_set_interlace_handling(param_1);
      bVar2 = *(byte *)(param_1 + 0x168);
    }
    else {
      png_set_expand_16(param_1);
      png_set_interlace_handling(param_1);
      bVar2 = *(byte *)(param_1 + 0x168);
    }
    if ((bVar2 >> 6 & 1) == 0) {
      png_read_start_row(param_1);
      png_read_transform_info(param_1,param_2);
    }
    else {
      png_app_error(param_1,"png_read_update_info/png_start_read_image: duplicate call");
    }
    png_free_data(param_1,param_2,0x40,0);
    if (*(long *)(param_2 + 0x160) == 0) {
      puVar3 = (undefined8 *)png_malloc(param_1,(ulong)*(uint *)(param_2 + 4) << 3);
      uVar1 = *(uint *)(param_2 + 4);
      *(undefined8 **)(param_2 + 0x160) = puVar3;
      if (uVar1 == 0) {
        *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x40;
      }
      else {
        *puVar3 = 0;
        if (uVar1 != 1) {
          uVar5 = 1;
          do {
            *(undefined8 *)(*(long *)(param_2 + 0x160) + uVar5 * 8) = 0;
            uVar5 = uVar5 + 1;
          } while (uVar1 != uVar5);
        }
        *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x40;
        if (uVar1 != 0) {
          uVar5 = 0;
          do {
            uVar4 = png_malloc(param_1,*(undefined8 *)(param_2 + 0x10));
            uVar1 = *(uint *)(param_2 + 4);
            *(undefined8 *)(*(long *)(param_2 + 0x160) + uVar5 * 8) = uVar4;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar1);
        }
      }
    }
    png_read_image(param_1,*(undefined8 *)(param_2 + 0x160));
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    png_read_end(param_1,param_2);
    return;
  }
  return;
}


