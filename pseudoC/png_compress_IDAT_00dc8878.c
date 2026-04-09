// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_compress_IDAT
// Entry Point: 00dc8878
// Size: 872 bytes
// Signature: undefined png_compress_IDAT(void)


void png_compress_IDAT(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  char cVar9;
  long **pplVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  
  if (*(int *)(param_1 + 0x170) != 0x49444154) {
    pplVar10 = *(long ***)(param_1 + 0x1e8);
    if (pplVar10 == (long **)0x0) {
      puVar5 = (undefined8 *)png_malloc(param_1,(ulong)*(uint *)(param_1 + 0x1f0) + 8);
      *(undefined8 **)(param_1 + 0x1e8) = puVar5;
      *puVar5 = 0;
    }
    else {
      plVar8 = *pplVar10;
      if (plVar8 != (long *)0x0) {
        *pplVar10 = (long *)0x0;
        do {
          plVar8 = (long *)*plVar8;
          png_free(param_1);
        } while (plVar8 != (long *)0x0);
      }
    }
    uVar6 = FUN_00dc8e74(param_1);
    iVar3 = FUN_00dc8be0(param_1,0x49444154,uVar6);
    if (iVar3 != 0) {
LAB_00dc8bc4:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
    }
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1f0);
    *(long *)(param_1 + 400) = *(long *)(param_1 + 0x1e8) + 8;
  }
  *(undefined8 *)(param_1 + 0x178) = param_2;
LAB_00dc8940:
  do {
    uVar7 = param_3;
    if (0xfffffffe < param_3) {
      uVar7 = 0xffffffff;
    }
    iVar3 = param_4;
    if (param_3 - uVar7 != 0) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x180) = (int)uVar7;
    iVar4 = deflate(param_1 + 0x178,iVar3);
    uVar11 = *(uint *)(param_1 + 0x180);
    iVar3 = *(int *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x180) = 0;
    param_3 = (param_3 - uVar7) + (ulong)uVar11;
    if (iVar3 == 0) {
      lVar14 = *(long *)(param_1 + 0x1e8);
      iVar3 = *(int *)(param_1 + 0x1f0);
      pbVar1 = (byte *)(lVar14 + 8);
      if (((((*(byte *)(param_1 + 0x164) >> 2 & 1) == 0) && (*(char *)(param_1 + 0x458) == '\0')) &&
          (uVar7 = FUN_00dc8e74(param_1), uVar7 < 0x4001)) &&
         ((bVar2 = *pbVar1, (bVar2 & 0xf) == 8 && ((bVar2 & 0xf0) < 0x71)))) {
        uVar13 = 0x80L << (ulong)(bVar2 >> 4);
        if (uVar7 <= uVar13) {
          cVar9 = (bVar2 & 0xf0) + 8;
          uVar12 = (uint)(bVar2 >> 4);
          uVar11 = uVar12 << 0xc | 0x800;
          do {
            uVar12 = uVar12 - 1;
            uVar11 = uVar11 - 0x1000;
            cVar9 = cVar9 + -0x10;
            if (uVar12 == 0) break;
            uVar13 = uVar13 >> 1 & 0x7fffffff;
          } while (uVar7 <= uVar13);
          *(char *)(lVar14 + 8) = cVar9;
          uVar12 = *(byte *)(lVar14 + 9) & 0xe0;
          bVar2 = (byte)uVar12;
          *(byte *)(lVar14 + 9) = (bVar2 | bVar2 + (char)((uVar11 | uVar12) / 0x1f) * -0x1f) ^ 0x1f;
        }
      }
      if (iVar3 != 0) {
        FUN_00dc8238(param_1,0x49444154,pbVar1,iVar3);
      }
      *(byte **)(param_1 + 400) = pbVar1;
      *(int *)(param_1 + 0x198) = iVar3;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 4;
      if ((param_4 != 0) && (iVar4 == 0)) goto LAB_00dc8940;
    }
    if (iVar4 != 0) {
      if ((param_4 != 4) || (iVar4 != 1)) {
        png_zstream_error(param_1,iVar4);
        goto LAB_00dc8bc4;
      }
      lVar14 = *(long *)(param_1 + 0x1e8);
      iVar3 = *(int *)(param_1 + 0x1f0) - iVar3;
      if (((((*(byte *)(param_1 + 0x164) >> 2 & 1) != 0) || (*(char *)(param_1 + 0x458) != '\0')) ||
          (uVar7 = FUN_00dc8e74(param_1), 0x4000 < uVar7)) ||
         ((bVar2 = *(byte *)(lVar14 + 8), (bVar2 & 0xf) != 8 || (0x70 < (bVar2 & 0xf0)))))
      goto LAB_00dc8b5c;
      uVar13 = 0x80L << (ulong)(bVar2 >> 4);
      if (uVar13 < uVar7) goto LAB_00dc8b5c;
      cVar9 = (bVar2 & 0xf0) + 8;
      uVar12 = (uint)(bVar2 >> 4);
      uVar11 = uVar12 << 0xc | 0x800;
      break;
    }
    if (param_3 == 0) {
      if (param_4 != 4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Z_OK on Z_FINISH with output space");
    }
  } while( true );
  while (uVar13 = uVar13 >> 1 & 0x7fffffff, uVar7 <= uVar13) {
    uVar12 = uVar12 - 1;
    uVar11 = uVar11 - 0x1000;
    cVar9 = cVar9 + -0x10;
    if (uVar12 == 0) break;
  }
  *(char *)(lVar14 + 8) = cVar9;
  uVar12 = *(byte *)(lVar14 + 9) & 0xe0;
  bVar2 = (byte)uVar12;
  *(byte *)(lVar14 + 9) = (bVar2 | bVar2 + (char)((uVar11 | uVar12) / 0x1f) * -0x1f) ^ 0x1f;
LAB_00dc8b5c:
  if (iVar3 != 0) {
    FUN_00dc8238(param_1,0x49444154,(byte *)(lVar14 + 8),iVar3);
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0xc;
  return;
}


