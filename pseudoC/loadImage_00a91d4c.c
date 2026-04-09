// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 00a91d4c
// Size: 1180 bytes
// Signature: undefined __cdecl loadImage(char * param_1, uchar * param_2, uint param_3, ORIGIN param_4, ImageDesc * param_5)


/* HDRUtil::loadImage(char const*, unsigned char*, unsigned int, ImageDesc::ORIGIN, ImageDesc&) */

char * HDRUtil::loadImage(char *param_1,uchar *param_2,uint param_3,ORIGIN param_4,
                         ImageDesc *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *__haystack;
  void *pvVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  
  __haystack = strstr((char *)param_2,"-Y ");
  if (__haystack != (char *)0x0) {
    iVar5 = atoi(__haystack + 3);
    *(int *)(param_5 + 4) = iVar5;
    __haystack = strstr(__haystack,"+X ");
    if (__haystack != (char *)0x0) {
      pbVar13 = (byte *)(__haystack + 3);
      uVar6 = atoi((char *)pbVar13);
      uVar15 = (long)pbVar13 - (long)param_2;
      *(uint *)param_5 = uVar6;
      do {
        bVar3 = *pbVar13;
        uVar15 = uVar15 + 1;
        pbVar13 = pbVar13 + 1;
      } while (bVar3 - 0x30 < 10);
      uVar14 = uVar6 * iVar5;
      *(undefined4 *)(param_5 + 0x40) = 3;
      *(ORIGIN *)(param_5 + 0x44) = param_4;
      *(undefined4 *)(param_5 + 0x18) = 8;
      *(undefined8 *)(param_5 + 0x10) = 0x300000001;
      *(undefined8 *)(param_5 + 8) = 0x100000001;
      *(uint *)(param_5 + 0x20) = uVar14 * 3;
      pvVar7 = operator_new__((ulong)(uVar14 * 3) << 2);
      pbVar13 = param_2 + (uVar15 & 0xffffffff);
      *(void **)(param_5 + 0x28) = pvVar7;
      if (uVar6 - 0x8000 < 0xffff8008) {
        if (uVar14 != 0) {
          uVar15 = 0;
          while( true ) {
            pbVar8 = pbVar13 + (uint)((int)uVar15 << 2);
            puVar1 = (undefined8 *)((long)pvVar7 + (ulong)(uint)((int)uVar15 * 3));
            if (pbVar8[3] == 0) {
              fVar18 = 0.0;
              *puVar1 = 0;
            }
            else {
              fVar18 = ldexpf(1.0,pbVar8[3] - 0x88);
              fVar19 = (float)NEON_ucvtf((uint)*pbVar8);
              *(float *)puVar1 = fVar18 * fVar19;
              fVar19 = (float)NEON_ucvtf((uint)pbVar8[1]);
              *(float *)((long)puVar1 + 4) = fVar18 * fVar19;
              fVar19 = (float)NEON_ucvtf((uint)pbVar8[2]);
              fVar18 = fVar18 * fVar19;
            }
            uVar15 = uVar15 + 1;
            *(float *)(puVar1 + 1) = fVar18;
            if (uVar15 == uVar14) break;
            pvVar7 = *(void **)(param_5 + 0x28);
          }
        }
      }
      else {
        pbVar8 = (byte *)operator_new__((ulong)(uVar6 << 2));
        if (iVar5 != 0) {
          uVar14 = 0;
          uVar15 = 0;
          pbVar2 = pbVar8 + (uVar6 << 2);
          while ((((*pbVar13 == 2 && (pbVar13[1] == 2)) && (-1 < (char)pbVar13[2])) &&
                 (CONCAT11(pbVar13[2],pbVar13[3]) == uVar6))) {
            lVar17 = (ulong)uVar14 << 2;
            pbVar9 = pbVar8;
            pbVar13 = pbVar13 + 4;
            do {
              pbVar12 = pbVar13 + 1;
              bVar3 = *pbVar13;
              uVar11 = (ulong)bVar3;
              if (bVar3 < 0x81) {
                if ((bVar3 == 0) || ((long)pbVar2 - (long)pbVar9 < (long)uVar11)) goto LAB_00a921ac;
                do {
                  pbVar10 = pbVar12 + 1;
                  uVar4 = (int)uVar11 - 1;
                  uVar11 = (ulong)uVar4;
                  pbVar13 = pbVar9 + 4;
                  *pbVar9 = *pbVar12;
                  pbVar9 = pbVar13;
                  pbVar12 = pbVar10;
                } while (uVar4 != 0);
              }
              else {
                uVar11 = (ulong)(bVar3 ^ 0x80);
                if ((long)pbVar2 - (long)pbVar9 < (long)uVar11) goto LAB_00a921ac;
                pbVar10 = pbVar13 + 2;
                if ((bVar3 ^ 0x80) != 0) {
                  bVar3 = pbVar13[1];
                  pbVar13 = pbVar9;
                  do {
                    uVar4 = (int)uVar11 - 1;
                    uVar11 = (ulong)uVar4;
                    pbVar9 = pbVar13 + 4;
                    *pbVar13 = bVar3;
                    pbVar13 = pbVar9;
                  } while (uVar4 != 0);
                }
              }
              pbVar12 = pbVar8 + 1;
              pbVar13 = pbVar10;
            } while (pbVar9 < pbVar2);
            do {
              pbVar13 = pbVar10 + 1;
              bVar3 = *pbVar10;
              uVar11 = (ulong)bVar3;
              if (bVar3 < 0x81) {
                if ((bVar3 == 0) || ((long)pbVar2 - (long)pbVar12 < (long)uVar11))
                goto LAB_00a921ac;
                do {
                  pbVar9 = pbVar13 + 1;
                  uVar4 = (int)uVar11 - 1;
                  uVar11 = (ulong)uVar4;
                  pbVar10 = pbVar12 + 4;
                  *pbVar12 = *pbVar13;
                  pbVar12 = pbVar10;
                  pbVar13 = pbVar9;
                } while (uVar4 != 0);
              }
              else {
                uVar4 = bVar3 ^ 0x80;
                uVar11 = (ulong)uVar4;
                if ((long)pbVar2 - (long)pbVar12 < (long)uVar11) goto LAB_00a921ac;
                pbVar9 = pbVar10 + 2;
                if (uVar4 != 0) {
                  bVar3 = pbVar10[1];
                  pbVar13 = pbVar12;
                  do {
                    uVar4 = (int)uVar11 - 1;
                    uVar11 = (ulong)uVar4;
                    pbVar12 = pbVar13 + 4;
                    *pbVar13 = bVar3;
                    pbVar13 = pbVar12;
                  } while (uVar4 != 0);
                }
              }
              pbVar13 = pbVar8 + 2;
              pbVar10 = pbVar9;
            } while (pbVar12 < pbVar2);
            do {
              pbVar12 = pbVar9 + 1;
              bVar3 = *pbVar9;
              uVar11 = (ulong)bVar3;
              if (bVar3 < 0x81) {
                if ((bVar3 == 0) || ((long)pbVar2 - (long)pbVar13 < (long)uVar11))
                goto LAB_00a921ac;
                do {
                  pbVar10 = pbVar12 + 1;
                  uVar4 = (int)uVar11 - 1;
                  uVar11 = (ulong)uVar4;
                  pbVar9 = pbVar13 + 4;
                  *pbVar13 = *pbVar12;
                  pbVar13 = pbVar9;
                  pbVar12 = pbVar10;
                } while (uVar4 != 0);
              }
              else {
                uVar4 = bVar3 ^ 0x80;
                uVar11 = (ulong)uVar4;
                if ((long)pbVar2 - (long)pbVar13 < (long)uVar11) goto LAB_00a921ac;
                pbVar10 = pbVar9 + 2;
                if (uVar4 != 0) {
                  bVar3 = pbVar9[1];
                  pbVar9 = pbVar13;
                  do {
                    uVar4 = (int)uVar11 - 1;
                    uVar11 = (ulong)uVar4;
                    pbVar13 = pbVar9 + 4;
                    *pbVar9 = bVar3;
                    pbVar9 = pbVar13;
                  } while (uVar4 != 0);
                }
              }
              pbVar12 = pbVar8 + 3;
              pbVar9 = pbVar10;
            } while (pbVar13 < pbVar2);
            do {
              pbVar9 = pbVar10 + 1;
              bVar3 = *pbVar10;
              uVar11 = (ulong)bVar3;
              if (bVar3 < 0x81) {
                if ((bVar3 == 0) || ((long)pbVar2 - (long)pbVar12 < (long)uVar11))
                goto LAB_00a921ac;
                do {
                  pbVar13 = pbVar9 + 1;
                  uVar4 = (int)uVar11 - 1;
                  uVar11 = (ulong)uVar4;
                  pbVar10 = pbVar12 + 4;
                  *pbVar12 = *pbVar9;
                  pbVar12 = pbVar10;
                  pbVar9 = pbVar13;
                } while (uVar4 != 0);
              }
              else {
                uVar4 = bVar3 ^ 0x80;
                uVar11 = (ulong)uVar4;
                if ((long)pbVar2 - (long)pbVar12 < (long)uVar11) goto LAB_00a921ac;
                pbVar13 = pbVar10 + 2;
                if (uVar4 != 0) {
                  bVar3 = pbVar10[1];
                  pbVar9 = pbVar12;
                  do {
                    uVar4 = (int)uVar11 - 1;
                    uVar11 = (ulong)uVar4;
                    pbVar12 = pbVar9 + 4;
                    *pbVar9 = bVar3;
                    pbVar9 = pbVar12;
                  } while (uVar4 != 0);
                }
              }
              uVar11 = (ulong)uVar6;
              pbVar9 = pbVar8 + 3;
              pbVar10 = pbVar13;
            } while (pbVar12 < pbVar2);
            do {
              lVar16 = *(long *)(param_5 + 0x28);
              if (*pbVar9 == 0) {
                fVar18 = 0.0;
                *(undefined8 *)(lVar16 + lVar17) = 0;
              }
              else {
                fVar18 = ldexpf(1.0,*pbVar9 - 0x88);
                fVar19 = (float)NEON_ucvtf((uint)pbVar9[-3]);
                *(float *)(lVar16 + lVar17) = fVar18 * fVar19;
                fVar19 = (float)NEON_ucvtf((uint)pbVar9[-2]);
                ((float *)(lVar16 + lVar17))[1] = fVar18 * fVar19;
                fVar19 = (float)NEON_ucvtf((uint)pbVar9[-1]);
                fVar18 = fVar18 * fVar19;
              }
              lVar16 = lVar16 + lVar17;
              lVar17 = lVar17 + 0xc;
              uVar11 = uVar11 - 1;
              *(float *)(lVar16 + 8) = fVar18;
              pbVar9 = pbVar9 + 4;
            } while (uVar11 != 0);
            uVar15 = uVar15 + 1;
            uVar14 = uVar14 + uVar6 * 3;
            if (*(uint *)(param_5 + 4) <= uVar15) {
              return (char *)0x1;
            }
          }
LAB_00a921ac:
          operator_delete__(pbVar8);
          if (*(void **)(param_5 + 0x28) != (void *)0x0) {
            operator_delete__(*(void **)(param_5 + 0x28));
          }
          *(undefined8 *)(param_5 + 0x28) = 0;
          return (char *)0x0;
        }
      }
      __haystack = (char *)0x1;
    }
  }
  return __haystack;
}


