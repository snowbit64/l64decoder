// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: base64Decode
// Entry Point: 00ba0e0c
// Size: 604 bytes
// Signature: undefined __cdecl base64Decode(char * param_1, bool param_2, uchar * * param_3, uint * param_4)


/* StringUtil::base64Decode(char const*, bool, unsigned char*&, unsigned int&) */

void StringUtil::base64Decode(char *param_1,bool param_2,uchar **param_3,uint *param_4)

{
  char **ppcVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  size_t sVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  char *__s;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte local_70;
  undefined local_6f [15];
  
  lVar3 = tpidr_el0;
  local_6f._7_8_ = *(long *)(lVar3 + 0x28);
  sVar5 = strlen(param_1);
  iVar18 = (int)sVar5;
  iVar19 = iVar18 + 6;
  if (-1 < iVar18 + 3) {
    iVar19 = iVar18 + 3;
  }
  pbVar6 = (byte *)operator_new__((long)((iVar19 >> 2) * 3));
  *param_3 = pbVar6;
  ppcVar1 = &s_pBase64UrlChars;
  if (!param_2) {
    ppcVar1 = &s_pBase64Chars;
  }
  if (iVar18 != 0) {
    iVar19 = 0;
    __s = *ppcVar1;
    do {
      if ((byte)*param_1 == 0x3d) break;
      pcVar7 = strchr(__s,(uint)(byte)*param_1);
      if (pcVar7 == (char *)0x0) {
        pbVar8 = pbVar6;
        if (iVar19 < 1) goto LAB_00ba0f8c;
        goto LAB_00ba0f50;
      }
      uVar2 = (int)sVar5 - 1;
      sVar5 = (size_t)uVar2;
      iVar18 = iVar19 + 1;
      local_6f[(long)iVar19 + 3] = (char)pcVar7 - (char)__s;
      pbVar8 = pbVar6;
      iVar19 = iVar18;
      if (iVar18 == 4) {
        iVar19 = 0;
        local_6f[0] = local_6f[4] << 4 | local_6f[5] >> 2 & 0xf;
        local_6f[1] = local_6f[6] + local_6f[5] * '@';
        local_70 = local_6f[3] << 2 | local_6f[4] >> 4 & 3;
        pbVar8 = pbVar6 + 3;
        pbVar6[1] = local_6f[0];
        pbVar6[2] = local_6f[1];
        *pbVar6 = local_70;
      }
      param_1 = (char *)((byte *)param_1 + 1);
      pbVar6 = pbVar8;
    } while (uVar2 != 0);
    pbVar8 = pbVar6;
    if (0 < iVar19) {
LAB_00ba0f50:
      local_70 = local_6f[3] << 2 | local_6f[4] >> 4 & 3;
      uVar2 = iVar19 - 1;
      uVar9 = (ulong)uVar2;
      local_6f[0] = local_6f[4] << 4 | local_6f[5] >> 2 & 0xf;
      local_6f[1] = local_6f[6] + local_6f[5] * '@';
      pbVar6 = pbVar8;
      if (uVar2 != 0) {
        pbVar6 = pbVar8 + 1;
        *pbVar8 = local_70;
        if (uVar2 != 1) {
          uVar13 = uVar9 - 1;
          if ((uVar13 < 0x20) ||
             ((pbVar6 < local_6f + (uVar9 - 1) && ((byte *)((ulong)&local_70 | 1) < pbVar8 + uVar9))
             )) {
            uVar11 = 1;
          }
          else {
            uVar14 = uVar13 & 0xffffffffffffffe0;
            puVar15 = (undefined8 *)(pbVar8 + 0x11);
            uVar11 = uVar14 | 1;
            pbVar6 = pbVar6 + uVar14;
            puVar16 = (undefined8 *)&stack0xffffffffffffffa1;
            uVar17 = uVar14;
            do {
              puVar4 = puVar16 + -1;
              uVar20 = puVar16[-2];
              uVar22 = puVar16[1];
              uVar21 = *puVar16;
              puVar16 = puVar16 + 4;
              uVar17 = uVar17 - 0x20;
              puVar15[-1] = *puVar4;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (uVar17 != 0);
            if (uVar13 == uVar14) goto LAB_00ba0f8c;
          }
          lVar10 = uVar9 - uVar11;
          pbVar8 = pbVar6;
          pbVar12 = local_6f + (uVar11 - 1);
          do {
            lVar10 = lVar10 + -1;
            *pbVar8 = *pbVar12;
            pbVar6 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            pbVar12 = pbVar12 + 1;
          } while (lVar10 != 0);
        }
      }
    }
  }
LAB_00ba0f8c:
  *param_4 = (int)pbVar6 - *(int *)param_3;
  if (*(long *)(lVar3 + 0x28) != local_6f._7_8_) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


