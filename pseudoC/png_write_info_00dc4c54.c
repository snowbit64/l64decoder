// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_info
// Entry Point: 00dc4c54
// Size: 884 bytes
// Signature: undefined png_write_info(void)


/* WARNING: Type propagation algorithm not settling */

void png_write_info(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    png_write_info_before_PLTE(param_1,param_2);
    uVar3 = *(uint *)(param_2 + 8);
    if ((uVar3 >> 3 & 1) == 0) {
      if (*(char *)(param_2 + 0x25) == '\x03') {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Valid palette required for paletted images");
      }
    }
    else {
      png_write_PLTE(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined2 *)(param_2 + 0x20));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      if (((*(byte *)(param_1 + 0x16e) >> 3 & 1) != 0) && (*(char *)(param_2 + 0x25) == '\x03')) {
        uVar3 = (uint)*(ushort *)(param_2 + 0x22);
        if (0xff < uVar3) {
          uVar3 = 0x100;
        }
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            *(byte *)(*(long *)(param_2 + 0xb8) + uVar5) =
                 ~*(byte *)(*(long *)(param_2 + 0xb8) + uVar5);
            uVar5 = uVar5 + 1;
          } while (uVar3 != uVar5);
        }
      }
      png_write_tRNS(param_1,*(undefined8 *)(param_2 + 0xb8),param_2 + 0xc0,
                     *(undefined2 *)(param_2 + 0x22),*(undefined *)(param_2 + 0x25));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      png_write_bKGD(param_1,param_2 + 0xca,*(undefined *)(param_2 + 0x25));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 0x10 & 1) != 0) {
      png_write_eXIf(param_1,*(undefined8 *)(param_2 + 0xf0),*(undefined4 *)(param_2 + 0xec));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 6 & 1) != 0) {
      png_write_hIST(param_1,*(undefined8 *)(param_2 + 0x100),*(undefined2 *)(param_2 + 0x20));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 8 & 1) != 0) {
      png_write_oFFs(param_1,*(undefined4 *)(param_2 + 0xd4),*(undefined4 *)(param_2 + 0xd8),
                     *(undefined *)(param_2 + 0xdc));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      png_write_pCAL(param_1,*(undefined8 *)(param_2 + 0x108),*(undefined4 *)(param_2 + 0x110),
                     *(undefined4 *)(param_2 + 0x114),*(undefined *)(param_2 + 0x128),
                     *(undefined *)(param_2 + 0x129),*(undefined8 *)(param_2 + 0x118),
                     *(undefined8 *)(param_2 + 0x120));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 0xe & 1) != 0) {
      png_write_sCAL_s(param_1,*(undefined *)(param_2 + 0x14c),*(undefined8 *)(param_2 + 0x150),
                       *(undefined8 *)(param_2 + 0x158));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 7 & 1) != 0) {
      png_write_pHYs(param_1,*(undefined4 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0xe4),
                     *(undefined *)(param_2 + 0xe8));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 9 & 1) != 0) {
      png_write_tIME(param_1,param_2 + 0xa8);
      uVar3 = *(uint *)(param_2 + 8);
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x200;
    }
    if (((uVar3 >> 0xd & 1) != 0) && (0 < *(int *)(param_2 + 0x148))) {
      lVar6 = 0;
      lVar7 = 0;
      do {
        png_write_sPLT(param_1,*(long *)(param_2 + 0x140) + lVar6);
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x20;
      } while (lVar7 < *(int *)(param_2 + 0x148));
    }
    if (0 < *(int *)(param_2 + 0x94)) {
      lVar6 = 0;
      lVar7 = 0;
      lVar4 = *(long *)(param_2 + 0xa0);
      do {
        iVar2 = *(int *)(lVar4 + lVar6);
        if (iVar2 < 1) {
          if (iVar2 == -1) {
            png_write_tEXt(param_1,*(undefined8 *)(lVar4 + lVar6 + 8),
                           *(undefined8 *)(lVar4 + lVar6 + 0x10),0);
            lVar4 = *(long *)(param_2 + 0xa0);
            goto LAB_00dc4e8c;
          }
          if (iVar2 == 0) {
            png_write_zTXt(param_1,*(undefined8 *)(lVar4 + lVar6 + 8),
                           *(undefined8 *)(lVar4 + lVar6 + 0x10),0);
            lVar4 = *(long *)(param_2 + 0xa0);
            *(undefined4 *)(lVar4 + lVar6) = 0xfffffffe;
          }
        }
        else {
          lVar4 = lVar4 + lVar6;
          png_write_iTXt(param_1,iVar2,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x28),
                         *(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x10));
          lVar4 = *(long *)(param_2 + 0xa0);
          if (*(int *)(lVar4 + lVar6) == -1) {
LAB_00dc4e8c:
            *(undefined4 *)(lVar4 + lVar6) = 0xfffffffd;
          }
          else {
            *(undefined4 *)(lVar4 + lVar6) = 0xfffffffe;
          }
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x38;
      } while (lVar7 < *(int *)(param_2 + 0x94));
    }
    iVar2 = *(int *)(param_2 + 0x138);
    if ((iVar2 != 0) && (0 < iVar2)) {
      uVar5 = *(ulong *)(param_2 + 0x130);
      uVar1 = uVar5 + (long)iVar2 * 0x20;
      do {
        if ((((*(byte *)(uVar5 + 0x18) >> 1 & 1) != 0) &&
            (iVar2 = png_handle_as_unknown(param_1,uVar5), iVar2 != 1)) &&
           ((((*(byte *)(uVar5 + 3) >> 5 & 1) != 0 || (iVar2 == 3)) ||
            ((iVar2 == 0 && (*(int *)(param_1 + 0x3f8) == 3)))))) {
          lVar7 = *(long *)(uVar5 + 0x10);
          if (lVar7 == 0) {
            png_warning(param_1,"Writing zero-length unknown chunk");
            lVar7 = *(long *)(uVar5 + 0x10);
          }
          png_write_chunk(param_1,uVar5,*(undefined8 *)(uVar5 + 8),lVar7);
        }
        uVar5 = uVar5 + 0x20;
      } while (uVar5 < uVar1);
    }
  }
  return;
}


