// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df3f7c
// Entry Point: 00df3f7c
// Size: 688 bytes
// Signature: undefined FUN_00df3f7c(void)


ulong FUN_00df3f7c(undefined8 param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  
  if (0 < param_3) {
    iVar6 = oc_pack_read1();
    lVar7 = oc_pack_bytes_left(param_1);
    if (-1 < lVar7) {
      if (iVar6 == 0) {
        *param_2 = 1;
        param_2[2] = 1;
        *(undefined **)(param_2 + 8) = param_2 + 0x18;
        uVar9 = FUN_00df3f7c(param_1,param_2 + 0x18,param_3 + -1);
        if (-1 < (int)uVar9) {
          uVar11 = (int)uVar9 + 1;
          *(undefined **)(param_2 + 0x10) = param_2 + (ulong)uVar11 * 0x18;
          uVar9 = FUN_00df3f7c(param_1,param_2 + (ulong)uVar11 * 0x18,param_3 - uVar11);
          if (-1 < (int)uVar9) {
            return (ulong)((int)uVar9 + uVar11);
          }
        }
      }
      else {
        uVar8 = oc_pack_read(param_1,5);
        lVar7 = oc_pack_bytes_left(param_1);
        if (lVar7 < 0) {
          return 0xffffffec;
        }
        if (param_3 < (int)((uint)(byte)(&DAT_00517620)[uVar8] * 2 + -1)) {
          uVar9 = 0xffffffec;
        }
        else {
          uVar11 = (uint)(byte)(&DAT_00517620)[uVar8];
          if ((0xffffe098UL >> (uVar8 & 0x3f) & 1) == 0) {
            uVar9 = 0;
          }
          else {
            uVar14 = 1;
            iVar6 = 0;
            do {
              iVar1 = uVar14 + iVar6;
              uVar9 = (ulong)iVar1;
              if (0 < (int)uVar14) {
                uVar12 = (ulong)uVar14;
                if (uVar14 == 1) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = uVar12 & 0xfffffffe;
                  lVar7 = (long)iVar6 * 0x18;
                  lVar10 = uVar9 * 0x18;
                  uVar13 = uVar16;
                  do {
                    puVar15 = param_2 + lVar10;
                    puVar2 = param_2 + lVar7;
                    lVar7 = lVar7 + 0x30;
                    uVar13 = uVar13 - 2;
                    lVar10 = lVar10 + 0x60;
                    *puVar2 = 1;
                    *(undefined **)(puVar2 + 8) = puVar15;
                    *(undefined **)(puVar2 + 0x10) = puVar15 + 0x18;
                    puVar2[0x18] = 1;
                    puVar2[2] = 1;
                    puVar2[0x1a] = 1;
                    *(undefined **)(puVar2 + 0x20) = puVar15 + 0x30;
                    *(undefined **)(puVar2 + 0x28) = puVar15 + 0x48;
                  } while (uVar13 != 0);
                  if (uVar16 == uVar12) goto LAB_00df4158;
                }
                lVar7 = uVar12 - uVar16;
                puVar15 = param_2 + (uVar16 * 2 + uVar9) * 0x18;
                puVar17 = (undefined8 *)(param_2 + (uVar16 * 3 + (long)iVar6 * 3) * 8 + 8);
                do {
                  *(undefined *)(puVar17 + -1) = 1;
                  *(undefined *)((long)puVar17 + -6) = 1;
                  lVar7 = lVar7 + -1;
                  *puVar17 = puVar15;
                  puVar17[1] = puVar15 + 0x18;
                  puVar15 = puVar15 + 0x30;
                  puVar17 = puVar17 + 3;
                } while (lVar7 != 0);
              }
LAB_00df4158:
              uVar14 = uVar14 * 2;
              iVar6 = iVar1;
            } while ((int)uVar14 < (int)uVar11);
          }
          if (uVar11 < 2) {
            uVar11 = 1;
          }
          uVar12 = (ulong)(uVar11 - 1);
          cVar3 = (&DAT_005175c0)[uVar8];
          if (uVar11 - 1 != 0) {
            uVar8 = uVar12 + 1;
            uVar12 = uVar8 & 0x1fffffffe;
            uVar13 = 0;
            lVar7 = uVar9 * 0x18;
            uVar9 = uVar9 + uVar12;
            puVar15 = param_2 + lVar7 + 0x1a;
            do {
              bVar4 = (byte)uVar13;
              puVar15[-0x1a] = 0;
              puVar15[-2] = 0;
              uVar13 = uVar13 + 2;
              puVar15[-0x18] = 1;
              *puVar15 = 1;
              puVar15[-0x19] = cVar3 + bVar4;
              puVar15[-1] = cVar3 + (bVar4 | 1);
              puVar15 = puVar15 + 0x30;
            } while (uVar12 != uVar13);
            if (uVar8 == uVar12) {
              return uVar9;
            }
          }
          param_2 = param_2 + uVar9 * 0x18 + 2;
          do {
            cVar5 = (char)uVar12;
            param_2[-2] = 0;
            *param_2 = 1;
            uVar9 = uVar9 + 1;
            uVar14 = (int)uVar12 + 1;
            uVar12 = (ulong)uVar14;
            param_2[-1] = cVar3 + cVar5;
            param_2 = param_2 + 0x18;
          } while (uVar11 != uVar14);
        }
      }
      return uVar9;
    }
  }
  return 0xffffffec;
}


