// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_destroy_read_struct
// Entry Point: 00db2030
// Size: 328 bytes
// Signature: undefined png_destroy_read_struct(void)


void png_destroy_read_struct(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if ((param_1 != (long *)0x0) && (lVar3 = *param_1, lVar3 != 0)) {
    png_destroy_info_struct(lVar3,param_3);
    png_destroy_info_struct(lVar3,param_2);
    *param_1 = 0;
    png_destroy_gamma_table(lVar3);
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x438));
    *(undefined8 *)(lVar3 + 0x438) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x4b0));
    *(undefined8 *)(lVar3 + 0x4b0) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x498));
    *(undefined8 *)(lVar3 + 0x498) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x3b0));
    *(undefined8 *)(lVar3 + 0x3b0) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x3b8));
    uVar1 = *(uint *)(lVar3 + 0x3e4);
    *(undefined8 *)(lVar3 + 0x3b8) = 0;
    if ((uVar1 >> 0xc & 1) != 0) {
      png_zfree(lVar3,*(undefined8 *)(lVar3 + 0x288));
      uVar1 = *(uint *)(lVar3 + 0x3e4);
      *(undefined8 *)(lVar3 + 0x288) = 0;
    }
    uVar2 = uVar1 & 0xffffefff;
    *(uint *)(lVar3 + 0x3e4) = uVar2;
    if ((uVar1 >> 0xd & 1) != 0) {
      png_free(lVar3,*(undefined8 *)(lVar3 + 800));
      uVar2 = *(uint *)(lVar3 + 0x3e4);
      *(undefined8 *)(lVar3 + 800) = 0;
    }
    *(uint *)(lVar3 + 0x3e4) = uVar2 & 0xffffdfff;
    inflateEnd(lVar3 + 0x178);
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x368));
    *(undefined8 *)(lVar3 + 0x368) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x478));
    *(undefined8 *)(lVar3 + 0x478) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x400));
    *(undefined8 *)(lVar3 + 0x400) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x410));
    *(undefined8 *)(lVar3 + 0x410) = 0;
    png_destroy_png_struct(lVar3);
    return;
  }
  return;
}


