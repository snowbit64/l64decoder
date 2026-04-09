// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db5a08
// Entry Point: 00db5a08
// Size: 1172 bytes
// Signature: undefined FUN_00db5a08(void)


undefined8 FUN_00db5a08(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  long **pplVar14;
  long lVar15;
  char *pcVar16;
  char cVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  char *pcVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint local_80;
  uint local_7c;
  
  pplVar14 = (long **)*param_1;
  local_80 = 1;
  lVar18 = **pplVar14;
  cVar17 = *(char *)(lVar18 + 0x29c);
  if (cVar17 != '\0') {
    if (cVar17 != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(lVar18,"unknown interlace type");
    }
    local_80 = 7;
  }
  uVar5 = *(uint *)((long)pplVar14 + 0xc);
  uVar6 = (ulong)uVar5;
  uVar7 = *(uint *)(pplVar14 + 2);
  iVar10 = *(int *)(param_1 + 9);
  lVar8 = param_1[6];
  lVar9 = param_1[7];
  local_7c = 0;
  if (cVar17 != '\x01') goto LAB_00db5b18;
  do {
    uVar24 = 7 - local_7c >> 1;
    uVar23 = uVar24;
    if (local_7c == 0 || local_7c - 1 == 0) {
      uVar23 = 3;
    }
    uVar12 = (local_7c & 1) << (ulong)(3 - (local_7c + 1 >> 1) & 0x1f) & 7;
    if ((uVar5 + ~(-1 << (ulong)(uVar23 & 0x1f))) - uVar12 >> (ulong)(uVar23 & 0x1f) != 0) {
      uVar13 = 1 << (ulong)(uVar24 & 0x1f);
      uVar24 = 8 >> (ulong)((int)(local_7c - 1) >> 1 & 0x1f);
      uVar23 = (local_7c & 1 ^ 1) << (ulong)(3 - (local_7c >> 1) & 0x1f) & 7;
      if (local_7c < 3) {
        uVar24 = 8;
      }
      if (uVar23 < uVar7) goto LAB_00db5b30;
    }
    while( true ) {
      local_7c = local_7c + 1;
      if (local_7c == local_80) {
        return 1;
      }
      if (*(char *)(lVar18 + 0x29c) == '\x01') break;
LAB_00db5b18:
      uVar23 = 0;
      uVar12 = 0;
      uVar24 = 1;
      uVar13 = 1;
      if (uVar7 != 0) {
LAB_00db5b30:
        if (iVar10 - 1U < 4) {
          uVar22 = (ulong)uVar12;
          switch(iVar10) {
          case 1:
            do {
              pbVar19 = (byte *)param_1[5];
              png_read_row(lVar18,pbVar19,0);
              if (uVar12 < uVar5) {
                lVar20 = lVar8 + lVar9 * (ulong)uVar23;
                pcVar21 = (char *)(lVar20 + uVar22);
                do {
                  bVar11 = pbVar19[1];
                  if (bVar11 < 0xe6) {
                    if (bVar11 < 0x1a) {
                      cVar17 = -0x19;
                    }
                    else {
                      cVar17 = (char)((uint)bVar11 * 5 + 0x82 >> 8) * '\x06' +
                               (char)((uint)*pbVar19 * 5 + 0x82 >> 8) + -0x1e;
                    }
                  }
                  else {
                    cVar17 = (char)((uint)*pbVar19 * 0xe7 + 0x80 >> 8);
                  }
                  *pcVar21 = cVar17;
                  pcVar21 = pcVar21 + uVar13;
                  pbVar19 = pbVar19 + 2;
                } while (pcVar21 < (char *)(lVar20 + uVar6));
              }
              uVar23 = uVar23 + uVar24;
            } while (uVar23 < uVar7);
            break;
          case 2:
            do {
              pcVar21 = (char *)param_1[5];
              png_read_row(lVar18,pcVar21,0);
              if (uVar12 < uVar5) {
                lVar20 = lVar8 + lVar9 * (ulong)uVar23;
                pcVar16 = (char *)(lVar20 + uVar22);
                do {
                  cVar17 = *pcVar21;
                  pcVar3 = pcVar21 + 1;
                  pcVar21 = pcVar21 + 2;
                  if (cVar17 == -2) {
                    cVar17 = -1;
                  }
                  cVar4 = -2;
                  if (*pcVar3 != '\0') {
                    cVar4 = cVar17;
                  }
                  *pcVar16 = cVar4;
                  pcVar16 = pcVar16 + uVar13;
                } while (pcVar16 < (char *)(lVar20 + uVar6));
              }
              uVar23 = uVar23 + uVar24;
            } while (uVar23 < uVar7);
            break;
          case 3:
            do {
              pbVar19 = (byte *)param_1[5];
              png_read_row(lVar18,pbVar19,0);
              if (uVar12 < uVar5) {
                lVar20 = lVar8 + lVar9 * (ulong)uVar23;
                pcVar21 = (char *)(lVar20 + uVar22);
                do {
                  bVar11 = *pbVar19;
                  pbVar1 = pbVar19 + 1;
                  pbVar2 = pbVar19 + 2;
                  pbVar19 = pbVar19 + 3;
                  *pcVar21 = ((char)((uint)bVar11 * 5 + 0x82 >> 8) * '\x06' +
                             (char)((uint)*pbVar1 * 5 + 0x82 >> 8)) * '\x06' +
                             (char)((uint)*pbVar2 * 5 + 0x82 >> 8);
                  pcVar21 = pcVar21 + uVar13;
                } while (pcVar21 < (char *)(lVar20 + uVar6));
              }
              uVar23 = uVar23 + uVar24;
            } while (uVar23 < uVar7);
            break;
          case 4:
            do {
              lVar20 = param_1[5];
              png_read_row(lVar18,lVar20,0);
              if (uVar12 < uVar5) {
                lVar15 = lVar8 + lVar9 * (ulong)uVar23;
                pbVar19 = (byte *)(lVar20 + 1);
                pcVar21 = (char *)(lVar15 + uVar22);
                do {
                  if (pbVar19[2] < 0xc4) {
                    if (pbVar19[2] < 0x40) {
                      cVar17 = -0x28;
                    }
                    else {
                      bVar11 = pbVar19[-1];
                      cVar17 = -0x27;
                      if ((char)bVar11 < '\0') {
                        cVar17 = -0x1e;
                      }
                      if ((bVar11 & 0x40) != 0) {
                        cVar17 = cVar17 + '\t';
                      }
                      if ((char)bVar11 < '\0') {
                        cVar17 = cVar17 + '\x03';
                      }
                      if ((bVar11 & 0x40) != 0) {
                        cVar17 = cVar17 + '\x03';
                      }
                      cVar17 = ((char)((bVar11 & 0x40) >> 6) - ((char)bVar11 >> 7)) + cVar17;
                    }
                  }
                  else {
                    cVar17 = ((char)((uint)pbVar19[-1] * 5 + 0x82 >> 8) * '\x06' +
                             (char)((uint)*pbVar19 * 5 + 0x82 >> 8)) * '\x06' +
                             (char)((uint)pbVar19[1] * 5 + 0x82 >> 8);
                  }
                  *pcVar21 = cVar17;
                  pcVar21 = pcVar21 + uVar13;
                  pbVar19 = pbVar19 + 4;
                } while (pcVar21 < (char *)(lVar15 + uVar6));
              }
              uVar23 = uVar23 + uVar24;
            } while (uVar23 < uVar7);
          }
        }
        else {
          do {
            png_read_row(lVar18,param_1[5],0);
            uVar23 = uVar23 + uVar24;
          } while (uVar23 < uVar7);
        }
      }
    }
  } while( true );
}


