// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luau_load
// Entry Point: 00f2508c
// Size: 2792 bytes
// Signature: undefined __cdecl luau_load(lua_State * param_1, char * param_2, char * param_3, ulong param_4, int param_5)


/* luau_load(lua_State*, char const*, char const*, unsigned long, int) */

void luau_load(lua_State *param_1,char *param_2,char *param_3,ulong param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  char cVar18;
  uint uVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  uint uVar27;
  byte *pbVar28;
  byte *pbVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  char *pcVar35;
  ulong local_1a8;
  undefined8 local_180;
  undefined4 local_178;
  lua_State *local_170;
  long local_168;
  ulong uStack_160;
  long local_70;
  byte *pbVar29;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  bVar5 = *param_3;
  if (bVar5 == 3) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40) = 0xffffffffffffffff;
    if (param_5 == 0) {
      puVar10 = (undefined8 *)(param_1 + 0x58);
    }
    else {
      puVar10 = (undefined8 *)FUN_00f02d28(param_1,param_5);
    }
    uVar20 = *puVar10;
    sVar11 = strlen(param_2);
    uVar12 = FUN_00f128c0(param_1,param_2,sVar11);
    uVar22 = 0;
    uVar31 = 0;
    lVar34 = 1;
    do {
      pbVar28 = (byte *)(param_3 + lVar34);
      lVar34 = lVar34 + 1;
      uVar19 = uVar22 & 0x1f;
      uVar22 = uVar22 + 7;
      uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar31;
      uVar31 = (ulong)uVar19;
    } while ((char)*pbVar28 < '\0');
    local_170 = param_1;
    local_168 = FUN_00f10090(param_1,uVar31 << 3,0);
    uStack_160 = uVar31;
    if (uVar19 != 0) {
      uVar32 = 0;
      do {
        lVar14 = lVar34;
        uVar22 = 0;
        uVar33 = 0;
        do {
          pbVar28 = (byte *)(param_3 + lVar14);
          lVar14 = lVar14 + 1;
          uVar19 = uVar22 & 0x1f;
          uVar22 = uVar22 + 7;
          uVar33 = (ulong)((*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar33);
        } while ((char)*pbVar28 < '\0');
                    /* try { // try from 00f25244 to 00f2524f has its CatchHandler @ 00f25b90 */
        uVar13 = FUN_00f128c0(param_1,param_3 + lVar14,uVar33);
        *(undefined8 *)(local_168 + uVar32 * 8) = uVar13;
        uVar32 = uVar32 + 1;
        lVar34 = uVar33 + lVar14;
      } while (uVar32 != uVar31);
      lVar34 = lVar14 + uVar33;
    }
    uVar22 = 0;
    uVar31 = 0;
    do {
      pbVar28 = (byte *)(param_3 + lVar34);
      lVar34 = lVar34 + 1;
      uVar19 = uVar22 & 0x1f;
      uVar22 = uVar22 + 7;
      uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar31;
      uVar31 = (ulong)uVar19;
    } while ((char)*pbVar28 < '\0');
                    /* try { // try from 00f25298 to 00f252a3 has its CatchHandler @ 00f25b80 */
    lVar14 = FUN_00f10090(param_1,uVar31 << 3,0);
    if (uVar19 != 0) {
      local_1a8 = 0;
      do {
                    /* try { // try from 00f252e4 to 00f253d7 has its CatchHandler @ 00f25bb0 */
        lVar15 = FUN_00f0b910(param_1);
        pcVar35 = param_3 + lVar34;
        uVar22 = 0;
        uVar32 = 0;
        lVar34 = lVar34 + 4;
        *(undefined8 *)(lVar15 + 0x40) = uVar12;
        *(char *)(lVar15 + 0x83) = *pcVar35;
        *(char *)(lVar15 + 0x81) = pcVar35[1];
        *(char *)(lVar15 + 0x80) = pcVar35[2];
        *(char *)(lVar15 + 0x82) = pcVar35[3];
        do {
          pbVar28 = (byte *)(param_3 + lVar34);
          lVar34 = lVar34 + 1;
          uVar19 = uVar22 & 0x1f;
          uVar22 = uVar22 + 7;
          uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar32;
          uVar32 = (ulong)uVar19;
        } while ((char)*pbVar28 < '\0');
        *(uint *)(lVar15 + 0x60) = uVar19;
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00f1007c(param_1);
        }
        lVar16 = FUN_00f10090(param_1,uVar32 << 2,*(undefined *)(lVar15 + 2));
        *(long *)(lVar15 + 0x10) = lVar16;
        if (0 < *(int *)(lVar15 + 0x60)) {
          lVar21 = 0;
          lVar24 = 0;
          do {
            lVar26 = lVar24 * 4;
            lVar24 = lVar24 + 1;
            lVar21 = lVar21 + 4;
            *(undefined4 *)(lVar16 + lVar26) = *(undefined4 *)(param_3 + lVar26 + lVar34);
          } while (lVar24 < *(int *)(lVar15 + 0x60));
          lVar34 = lVar34 + lVar21;
        }
        uVar22 = 0;
        uVar32 = 0;
        do {
          pbVar28 = (byte *)(param_3 + lVar34);
          lVar34 = lVar34 + 1;
          uVar19 = uVar22 & 0x1f;
          uVar22 = uVar22 + 7;
          uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar32;
          uVar32 = (ulong)uVar19;
        } while ((char)*pbVar28 < '\0');
        *(uint *)(lVar15 + 0x70) = uVar19;
        if ((int)uVar19 < 0) {
                    /* try { // try from 00f25b4c to 00f25b63 has its CatchHandler @ 00f25ba8 */
                    /* WARNING: Subroutine does not return */
          FUN_00f1007c(param_1);
        }
        uVar13 = FUN_00f10090(param_1,uVar32 << 4,*(undefined *)(lVar15 + 2));
        *(undefined8 *)(lVar15 + 8) = uVar13;
        if (0 < *(int *)(lVar15 + 0x70)) {
          lVar16 = 0;
          do {
            lVar24 = lVar34 + 1;
            switch(param_3[lVar34]) {
            case '\0':
              *(undefined4 *)(*(long *)(lVar15 + 8) + lVar16 * 0x10 + 0xc) = 0;
              break;
            case '\x01':
              puVar2 = (uint *)(*(long *)(lVar15 + 8) + lVar16 * 0x10);
              *puVar2 = (uint)(byte)param_3[lVar24];
              puVar2[3] = 1;
              lVar24 = lVar34 + 2;
              break;
            case '\x02':
              puVar10 = (undefined8 *)(*(long *)(lVar15 + 8) + lVar16 * 0x10);
              *puVar10 = *(undefined8 *)(param_3 + lVar24);
              *(undefined4 *)((long)puVar10 + 0xc) = 3;
              lVar24 = lVar34 + 9;
              break;
            case '\x03':
              uVar22 = 0;
              uVar19 = 0;
              do {
                pbVar28 = (byte *)(param_3 + lVar24);
                lVar24 = lVar24 + 1;
                uVar23 = uVar22 & 0x1f;
                uVar22 = uVar22 + 7;
                uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar23 | uVar19;
              } while ((char)*pbVar28 < '\0');
              if (uVar19 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined8 *)(local_168 + (ulong)(uVar19 - 1) * 8);
              }
              puVar10 = (undefined8 *)(*(long *)(lVar15 + 8) + lVar16 * 0x10);
              *puVar10 = uVar13;
              *(undefined4 *)((long)puVar10 + 0xc) = 5;
              break;
            case '\x04':
              local_178 = *(undefined4 *)(param_3 + lVar24);
              local_180 = *(undefined8 *)(lVar15 + 8);
              if (*(char *)(*(long *)(param_1 + 0x58) + 5) == '\0') {
                lVar24 = *(long *)(param_1 + 8) + 0x10;
                *(undefined4 *)(*(long *)(param_1 + 8) + 0xc) = 0;
                *(long *)(param_1 + 8) = lVar24;
              }
              else {
                    /* try { // try from 00f25470 to 00f2549b has its CatchHandler @ 00f25bac */
                lua_gettop(param_1);
                iVar8 = FUN_00f0b5c8(param_1,FUN_00f25c28,&local_180,
                                     *(long *)(param_1 + 8) - *(long *)(param_1 + 0x30),0);
                lVar24 = *(long *)(param_1 + 8);
                if (iVar8 != 0) {
                  *(undefined4 *)(lVar24 + -4) = 0;
                }
              }
              uVar13 = *(undefined8 *)(lVar24 + -0x10);
              puVar10 = (undefined8 *)(*(long *)(lVar15 + 8) + lVar16 * 0x10);
              puVar10[1] = *(undefined8 *)(lVar24 + -8);
              *puVar10 = uVar13;
              *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -0x10;
              lVar24 = lVar34 + 5;
              break;
            case '\x05':
              uVar22 = 0;
              uVar19 = 0;
              do {
                pbVar28 = (byte *)(param_3 + lVar24);
                lVar24 = lVar24 + 1;
                uVar23 = uVar22 & 0x1f;
                uVar22 = uVar22 + 7;
                uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar23 | uVar19;
              } while ((char)*pbVar28 < '\0');
                    /* try { // try from 00f25528 to 00f25537 has its CatchHandler @ 00f25ba0 */
              uVar13 = FUN_00f16e6c(param_1,0,uVar19);
              if (0 < (int)uVar19) {
                uVar22 = 0;
                do {
                  uVar23 = 0;
                  uVar27 = 0;
                  do {
                    pbVar28 = (byte *)(param_3 + lVar24);
                    lVar24 = lVar24 + 1;
                    uVar6 = uVar23 & 0x1f;
                    uVar23 = uVar23 + 7;
                    uVar27 = (*pbVar28 & 0x7f) << (ulong)uVar6 | uVar27;
                  } while ((char)*pbVar28 < '\0');
                    /* try { // try from 00f25574 to 00f2557f has its CatchHandler @ 00f25bb4 */
                  puVar10 = (undefined8 *)
                            FUN_00f1750c(param_1,uVar13,
                                         *(long *)(lVar15 + 8) + (long)(int)uVar27 * 0x10);
                  uVar22 = uVar22 + 1;
                  *puVar10 = 0;
                  *(undefined4 *)((long)puVar10 + 0xc) = 3;
                } while (uVar22 != uVar19);
              }
              puVar10 = (undefined8 *)(*(long *)(lVar15 + 8) + lVar16 * 0x10);
              *puVar10 = uVar13;
              *(undefined4 *)((long)puVar10 + 0xc) = 6;
              break;
            case '\x06':
              uVar22 = 0;
              uVar32 = 0;
              do {
                pbVar28 = (byte *)(param_3 + lVar24);
                lVar24 = lVar24 + 1;
                uVar19 = uVar22 & 0x1f;
                uVar22 = uVar22 + 7;
                uVar32 = (ulong)((*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar32);
              } while ((char)*pbVar28 < '\0');
                    /* try { // try from 00f255dc to 00f255e7 has its CatchHandler @ 00f25ba4 */
              lVar34 = FUN_00f0b980(param_1,*(undefined *)(*(long *)(lVar14 + uVar32 * 8) + 0x80),
                                    uVar20);
              *(bool *)(lVar34 + 6) = *(char *)(lVar34 + 4) != '\0';
              plVar3 = (long *)(*(long *)(lVar15 + 8) + lVar16 * 0x10);
              *plVar3 = lVar34;
              *(undefined4 *)((long)plVar3 + 0xc) = 7;
            }
            lVar34 = lVar24;
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(lVar15 + 0x70));
        }
        uVar22 = 0;
        uVar32 = 0;
        do {
          pbVar28 = (byte *)(param_3 + lVar34);
          lVar34 = lVar34 + 1;
          uVar19 = uVar22 & 0x1f;
          uVar22 = uVar22 + 7;
          uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar32;
          uVar32 = (ulong)uVar19;
        } while ((char)*pbVar28 < '\0');
        *(uint *)(lVar15 + 100) = uVar19;
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00f1007c(param_1);
        }
                    /* try { // try from 00f25698 to 00f2569f has its CatchHandler @ 00f25bb0 */
        uVar13 = FUN_00f10090(param_1,uVar32 << 3,*(undefined *)(lVar15 + 2));
        uVar22 = *(uint *)(lVar15 + 100);
        *(undefined8 *)(lVar15 + 0x18) = uVar13;
        if (0 < (int)uVar22) {
          uVar32 = 0;
          do {
            uVar19 = 0;
            uVar23 = 0;
            do {
              pbVar28 = (byte *)(param_3 + lVar34);
              lVar34 = lVar34 + 1;
              uVar27 = uVar19 & 0x1f;
              uVar19 = uVar19 + 7;
              uVar23 = (*pbVar28 & 0x7f) << (ulong)uVar27 | uVar23;
            } while ((char)*pbVar28 < '\0');
            *(undefined8 *)(*(long *)(lVar15 + 0x18) + uVar32 * 8) =
                 *(undefined8 *)(lVar14 + (ulong)uVar23 * 8);
            uVar32 = uVar32 + 1;
          } while (uVar32 != uVar22);
        }
        uVar22 = 0;
        uVar19 = 0;
        lVar16 = lVar34 + 2;
        pcVar35 = param_3 + lVar34 + 5;
        do {
          pcVar17 = pcVar35;
          lVar24 = lVar16;
          pbVar28 = (byte *)(param_3 + lVar34);
          lVar34 = lVar34 + 1;
          uVar23 = uVar22 & 0x1f;
          uVar22 = uVar22 + 7;
          uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar23 | uVar19;
          lVar16 = lVar24 + 1;
          pcVar35 = pcVar17 + 1;
        } while ((char)*pbVar28 < '\0');
        uVar22 = 0;
        uVar23 = 0;
        *(uint *)(lVar15 + 0x7c) = uVar19;
        do {
          lVar34 = lVar24;
          pcVar35 = pcVar17;
          lVar24 = lVar34 + 1;
          uVar19 = uVar22 & 0x1f;
          uVar22 = uVar22 + 7;
          uVar23 = ((byte)param_3[lVar34 + -1] & 0x7f) << (ulong)uVar19 | uVar23;
          pcVar17 = pcVar35 + 1;
        } while (param_3[lVar34 + -1] < '\0');
        if (uVar23 == 0) {
          *(undefined8 *)(lVar15 + 0x48) = 0;
          if (param_3[lVar34] != '\0') goto LAB_00f257a4;
LAB_00f2585c:
          cVar18 = param_3[lVar24];
        }
        else {
          *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(local_168 + (ulong)(uVar23 - 1) * 8);
          if (param_3[lVar34] == '\0') goto LAB_00f2585c;
LAB_00f257a4:
          bVar5 = param_3[lVar24];
          iVar4 = *(int *)(lVar15 + 0x60) + -1 >> (bVar5 & 0x1f);
          uVar32 = (long)*(int *)(lVar15 + 0x60) + 3U & 0xfffffffffffffffc;
          iVar8 = (int)uVar32 + iVar4 * 4 + 4;
          *(int *)(lVar15 + 0x74) = iVar8;
          *(uint *)(lVar15 + 0x78) = (uint)bVar5;
                    /* try { // try from 00f257d0 to 00f257d7 has its CatchHandler @ 00f25b8c */
          pcVar17 = (char *)FUN_00f10090(param_1,(long)iVar8,*(undefined *)(lVar15 + 2));
          *(char **)(lVar15 + 0x20) = pcVar17;
          *(char **)(lVar15 + 0x28) = pcVar17 + uVar32;
          if (*(int *)(lVar15 + 0x60) < 1) {
            lVar24 = lVar34 + 2;
          }
          else {
            lVar24 = lVar34 + 3;
            cVar18 = param_3[lVar34 + 2];
            *pcVar17 = cVar18;
            if (1 < *(int *)(lVar15 + 0x60)) {
              lVar34 = 1;
              do {
                lVar24 = lVar24 + 1;
                cVar18 = *pcVar35 + cVar18;
                *(char *)(*(long *)(lVar15 + 0x20) + lVar34) = cVar18;
                lVar34 = lVar34 + 1;
                pcVar35 = pcVar35 + 1;
              } while (lVar34 < *(int *)(lVar15 + 0x60));
            }
          }
          if (-1 < iVar4) {
            iVar8 = 0;
            uVar32 = (ulong)(iVar4 + 1);
            piVar25 = *(int **)(lVar15 + 0x28);
            do {
              piVar1 = (int *)(param_3 + lVar24);
              lVar24 = lVar24 + 4;
              uVar32 = uVar32 - 1;
              iVar8 = *piVar1 + iVar8;
              *piVar25 = iVar8;
              piVar25 = piVar25 + 1;
            } while (uVar32 != 0);
            goto LAB_00f2585c;
          }
          cVar18 = param_3[lVar24];
        }
        lVar34 = lVar24 + 1;
        if (cVar18 != '\0') {
          uVar22 = 0;
          uVar32 = 0;
          do {
            pbVar28 = (byte *)(param_3 + lVar34);
            lVar34 = lVar34 + 1;
            uVar19 = uVar22 & 0x1f;
            uVar22 = uVar22 + 7;
            uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar32;
            uVar32 = (ulong)uVar19;
          } while ((char)*pbVar28 < '\0');
          *(uint *)(lVar15 + 0x68) = uVar19;
          if ((int)uVar19 < 0) {
                    /* try { // try from 00f25b64 to 00f25b73 has its CatchHandler @ 00f25b9c */
                    /* WARNING: Subroutine does not return */
            FUN_00f1007c(param_1);
          }
                    /* try { // try from 00f2589c to 00f259cf has its CatchHandler @ 00f25b98 */
          lVar16 = FUN_00f10090(param_1,uVar32 * 0x18,*(undefined *)(lVar15 + 2));
          uVar22 = *(uint *)(lVar15 + 0x68);
          *(long *)(lVar15 + 0x30) = lVar16;
          if (0 < (int)uVar22) {
            uVar32 = 0;
            lVar24 = lVar34;
            do {
              uVar19 = 0;
              uVar23 = 0;
              lVar34 = lVar24 + 3;
              pbVar28 = (byte *)(param_3 + lVar24 + 2);
              do {
                pbVar30 = pbVar28;
                lVar21 = lVar34;
                pbVar29 = (byte *)(param_3 + lVar24);
                lVar24 = lVar24 + 1;
                uVar27 = uVar19 & 0x1f;
                uVar19 = uVar19 + 7;
                uVar23 = (*pbVar29 & 0x7f) << (ulong)uVar27 | uVar23;
                lVar34 = lVar21 + 1;
                pbVar28 = pbVar30 + 1;
              } while ((char)*pbVar29 < '\0');
              if (uVar23 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined8 *)(local_168 + (ulong)(uVar23 - 1) * 8);
              }
              uVar19 = 0;
              uVar23 = 0;
              *(undefined8 *)(lVar16 + uVar32 * 0x18) = uVar13;
              do {
                pbVar29 = pbVar30;
                lVar34 = lVar21;
                pbVar28 = (byte *)(param_3 + lVar24);
                lVar24 = lVar24 + 1;
                uVar27 = uVar19 & 0x1f;
                uVar19 = uVar19 + 7;
                uVar23 = (*pbVar28 & 0x7f) << (ulong)uVar27 | uVar23;
                lVar21 = lVar34 + 1;
                pbVar30 = pbVar29 + 1;
              } while ((char)*pbVar28 < '\0');
              uVar19 = 0;
              uVar27 = 0;
              *(uint *)(lVar16 + uVar32 * 0x18 + 8) = uVar23;
              do {
                pbVar28 = pbVar29 + 1;
                bVar5 = *pbVar29;
                lVar34 = lVar34 + 1;
                uVar23 = uVar19 & 0x1f;
                uVar19 = uVar19 + 7;
                uVar27 = (bVar5 & 0x7f) << (ulong)uVar23 | uVar27;
                pbVar29 = pbVar28;
              } while ((char)bVar5 < '\0');
              lVar24 = lVar16 + uVar32 * 0x18;
              uVar32 = uVar32 + 1;
              *(uint *)(lVar24 + 0xc) = uVar27;
              *(byte *)(lVar24 + 0x10) = *pbVar28;
              lVar24 = lVar34;
            } while (uVar32 != uVar22);
          }
          uVar22 = 0;
          uVar32 = 0;
          do {
            pbVar28 = (byte *)(param_3 + lVar34);
            lVar34 = lVar34 + 1;
            uVar19 = uVar22 & 0x1f;
            uVar22 = uVar22 + 7;
            uVar19 = (*pbVar28 & 0x7f) << (ulong)uVar19 | (uint)uVar32;
            uVar32 = (ulong)uVar19;
          } while ((char)*pbVar28 < '\0');
          *(uint *)(lVar15 + 0x6c) = uVar19;
          if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00f1007c(param_1);
          }
          uVar13 = FUN_00f10090(param_1,uVar32 << 3,*(undefined *)(lVar15 + 2));
          uVar22 = *(uint *)(lVar15 + 0x6c);
          *(undefined8 *)(lVar15 + 0x38) = uVar13;
          if (0 < (int)uVar22) {
            uVar32 = 0;
            do {
              while( true ) {
                uVar19 = 0;
                uVar23 = 0;
                do {
                  pbVar28 = (byte *)(param_3 + lVar34);
                  lVar34 = lVar34 + 1;
                  uVar27 = uVar19 & 0x1f;
                  uVar19 = uVar19 + 7;
                  uVar23 = (*pbVar28 & 0x7f) << (ulong)uVar27 | uVar23;
                } while ((char)*pbVar28 < '\0');
                if (uVar23 == 0) break;
                *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar32 * 8) =
                     *(undefined8 *)(local_168 + (ulong)(uVar23 - 1) * 8);
                uVar32 = uVar32 + 1;
                if (uVar32 == uVar22) goto LAB_00f252c8;
              }
              *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar32 * 8) = 0;
              uVar32 = uVar32 + 1;
            } while (uVar32 != uVar22);
          }
        }
LAB_00f252c8:
        *(long *)(lVar14 + local_1a8 * 8) = lVar15;
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 != uVar31);
    }
    uVar22 = 0;
    uVar19 = 0;
    pbVar28 = (byte *)(param_3 + lVar34);
    do {
      bVar5 = *pbVar28;
      uVar23 = uVar22 & 0x1f;
      uVar22 = uVar22 + 7;
      uVar19 = (bVar5 & 0x7f) << (ulong)uVar23 | uVar19;
      pbVar28 = pbVar28 + 1;
    } while ((char)bVar5 < '\0');
    uVar12 = *(undefined8 *)(lVar14 + (ulong)uVar19 * 8);
    if (((byte)param_1[1] >> 2 & 1) != 0) {
                    /* try { // try from 00f25aa4 to 00f25aaf has its CatchHandler @ 00f25b74 */
      FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
    }
                    /* try { // try from 00f25ab0 to 00f25af3 has its CatchHandler @ 00f25b88 */
    uVar12 = FUN_00f0b980(param_1,0,uVar20,uVar12);
    puVar10 = *(undefined8 **)(param_1 + 8);
    *puVar10 = uVar12;
    *(undefined4 *)((long)puVar10 + 0xc) = 7;
    lVar34 = *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x28) - lVar34 < 0x11) {
      FUN_00f0ab24(param_1,1);
      lVar34 = *(long *)(param_1 + 8);
    }
    *(long *)(param_1 + 8) = lVar34 + 0x10;
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40) = uVar9;
                    /* try { // try from 00f25b18 to 00f25b1f has its CatchHandler @ 00f25b7c */
    FUN_00f1043c(param_1,lVar14,uVar31 << 3,0);
                    /* try { // try from 00f25b2c to 00f25b33 has its CatchHandler @ 00f25b78 */
    FUN_00f1043c(local_170,local_168,uStack_160 << 3,0);
    uVar9 = 0;
    if (*(long *)(lVar7 + 0x28) == local_70) {
      return;
    }
  }
  else if (bVar5 == 0) {
    FUN_00f11458(&local_170,param_2,0x100);
    lua_pushfstringL(param_1,"%s%.*s",&local_170,(ulong)((int)param_4 - 1),param_3 + 1);
    uVar9 = 1;
    if (*(long *)(lVar7 + 0x28) == local_70) {
      return;
    }
  }
  else {
    FUN_00f11458(&local_170,param_2,0x100);
    lua_pushfstringL(param_1,"%s: bytecode version mismatch (expected [%d..%d], got %d)",&local_170,
                     3,3,(ulong)bVar5);
    uVar9 = 1;
    if (*(long *)(lVar7 + 0x28) == local_70) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


