// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_chunk_header
// Entry Point: 00dbc1a0
// Size: 508 bytes
// Signature: undefined png_read_chunk_header(void)


ulong png_read_chunk_header(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  *(undefined4 *)(param_1 + 0x4ac) = 0x21;
  png_read_data(param_1,&local_40,8);
  uVar4 = ((ulong)local_40 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
          ((ulong)local_40 << 0x20 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | uVar4 << 0x10;
  if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG unsigned integer out of range");
  }
  uVar3 = (local_3c & 0xff00ff00) >> 8 | (local_3c & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x250) = uVar3 >> 0x10 | uVar3 << 0x10;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,&local_3c,4);
  uVar3 = *(uint *)(param_1 + 0x250);
  if (((((0xffffffc5 < (uVar3 & 0xff) - 0x7b) && (5 < (uVar3 & 0xff) - 0x5b)) &&
       (uVar5 = uVar3 >> 8 & 0xff, 0xffffffc5 < uVar5 - 0x7b)) &&
      ((5 < uVar5 - 0x5b && (uVar5 = uVar3 >> 0x10 & 0xff, 0xffffffc5 < uVar5 - 0x7b)))) &&
     ((5 < uVar5 - 0x5b && ((0xffffffc5 < (uVar3 >> 0x18) - 0x7b && (5 < (uVar3 >> 0x18) - 0x5b)))))
     ) {
    uVar9 = *(ulong *)(param_1 + 0x468);
    if (0x7ffffffd < uVar9 - 1) {
      uVar9 = 0x7fffffff;
    }
    uVar10 = uVar9;
    if (uVar3 == 0x49444154) {
      lVar1 = 1;
      if (8 < *(byte *)(param_1 + 0x2a0)) {
        lVar1 = 2;
      }
      lVar8 = 0;
      if (*(char *)(param_1 + 0x29c) != '\0') {
        lVar8 = 6;
      }
      lVar8 = lVar8 + (ulong)*(byte *)(param_1 + 0x2a3) * (ulong)*(uint *)(param_1 + 0x230) * lVar1;
      uVar10 = lVar8 + 1;
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = 0xffffffff / uVar10;
      }
      uVar2 = 0x7fffffff;
      if (*(uint *)(param_1 + 0x234) <= uVar6) {
        uVar2 = uVar10 * *(uint *)(param_1 + 0x234);
      }
      uVar6 = 0x7f36;
      if (uVar10 < 0x7f36) {
        uVar6 = lVar8 + 1;
      }
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar2 / uVar6;
      }
      uVar10 = uVar10 * 5 + uVar2 + 0xb;
      if (0x7ffffffe < uVar10) {
        uVar10 = 0x7fffffff;
      }
      if (uVar10 <= uVar9) {
        uVar10 = uVar9;
      }
    }
    if (uVar10 < uVar4 >> 0x20) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"chunk data is too large");
    }
    *(undefined4 *)(param_1 + 0x4ac) = 0x41;
    if (*(long *)(lVar7 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar4 >> 0x20;
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid chunk type");
}


