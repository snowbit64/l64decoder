// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_end
// Entry Point: 00dc4fc8
// Size: 544 bytes
// Signature: undefined png_write_end(void)


void png_write_end(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x164) >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"No IDATs written into file");
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x290) < *(int *)(param_1 + 0x294)) {
    png_benign_error(param_1,"Wrote palette index exceeding num_palette");
  }
  if (param_2 != 0) {
    if (((*(byte *)(param_2 + 9) >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x165) >> 1 & 1) == 0)) {
      png_write_tIME(param_1,param_2 + 0xa8);
    }
    if (0 < *(int *)(param_2 + 0x94)) {
      lVar5 = 0;
      lVar6 = 0;
      lVar3 = *(long *)(param_2 + 0xa0);
      do {
        iVar2 = *(int *)(lVar3 + lVar5);
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            if (iVar2 == -1) {
              png_write_tEXt(param_1,*(undefined8 *)(lVar3 + lVar5 + 8),
                             *(undefined8 *)(lVar3 + lVar5 + 0x10),0);
              lVar3 = *(long *)(param_2 + 0xa0);
              goto LAB_00dc5054;
            }
          }
          else {
            png_write_zTXt(param_1,*(undefined8 *)(lVar3 + lVar5 + 8),
                           *(undefined8 *)(lVar3 + lVar5 + 0x10),0);
            lVar3 = *(long *)(param_2 + 0xa0);
            *(undefined4 *)(lVar3 + lVar5) = 0xfffffffe;
          }
        }
        else {
          lVar3 = lVar3 + lVar5;
          png_write_iTXt(param_1,iVar2,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x28),
                         *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x10));
          lVar3 = *(long *)(param_2 + 0xa0);
          if (*(int *)(lVar3 + lVar5) == -1) {
LAB_00dc5054:
            *(undefined4 *)(lVar3 + lVar5) = 0xfffffffd;
          }
          else {
            *(undefined4 *)(lVar3 + lVar5) = 0xfffffffe;
          }
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x38;
      } while (lVar6 < *(int *)(param_2 + 0x94));
    }
    if ((*(byte *)(param_2 + 10) & 1) != 0) {
      png_write_eXIf(param_1,*(undefined8 *)(param_2 + 0xf0),*(undefined4 *)(param_2 + 0xec));
    }
    iVar2 = *(int *)(param_2 + 0x138);
    if ((iVar2 != 0) && (0 < iVar2)) {
      uVar4 = *(ulong *)(param_2 + 0x130);
      uVar1 = uVar4 + (long)iVar2 * 0x20;
      do {
        if ((((*(byte *)(uVar4 + 0x18) >> 3 & 1) != 0) &&
            (iVar2 = png_handle_as_unknown(param_1,uVar4), iVar2 != 1)) &&
           ((((*(byte *)(uVar4 + 3) >> 5 & 1) != 0 || (iVar2 == 3)) ||
            ((iVar2 == 0 && (*(int *)(param_1 + 0x3f8) == 3)))))) {
          lVar6 = *(long *)(uVar4 + 0x10);
          if (lVar6 == 0) {
            png_warning(param_1,"Writing zero-length unknown chunk");
            lVar6 = *(long *)(uVar4 + 0x10);
          }
          png_write_chunk(param_1,uVar4,*(undefined8 *)(uVar4 + 8),lVar6);
        }
        uVar4 = uVar4 + 0x20;
      } while (uVar4 < uVar1);
    }
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 8;
  png_write_IEND(param_1);
  return;
}


