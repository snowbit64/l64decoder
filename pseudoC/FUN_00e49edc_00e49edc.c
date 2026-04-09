// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e49edc
// Entry Point: 00e49edc
// Size: 1212 bytes
// Signature: undefined FUN_00e49edc(void)


void FUN_00e49edc(long param_1,undefined4 *param_2,uint *param_3)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  undefined4 local_84;
  byte local_80 [18];
  uint local_6e;
  byte local_6a;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  piVar16 = (int *)(param_1 + 0x98);
  iVar4 = *piVar16;
  while (iVar4 == 0) {
    pcVar10 = *(char **)(param_1 + 0x40);
    if (pcVar10 == (char *)0x0) {
      uVar3 = fgetc(*(FILE **)(param_1 + 0x30));
      if (uVar3 == 0xffffffff) goto LAB_00e4a33c;
      if ((uVar3 & 0xff) == 0x4f) goto LAB_00e49fbc;
    }
    else {
      if (*(char **)(param_1 + 0x50) <= pcVar10) {
LAB_00e4a33c:
        uVar7 = 0;
        *piVar16 = 1;
        goto LAB_00e49f18;
      }
      *(char **)(param_1 + 0x40) = pcVar10 + 1;
      if (*pcVar10 != 'O') goto LAB_00e49f6c;
LAB_00e49fbc:
      if (*(char *)(param_1 + 0x5c) == '\0') {
        if (*(long *)(param_1 + 0x40) == 0) {
          lVar13 = ftell(*(FILE **)(param_1 + 0x30));
          uVar3 = (int)lVar13 - *(int *)(param_1 + 0x38);
        }
        else {
          uVar3 = (int)*(long *)(param_1 + 0x40) - *(int *)(param_1 + 0x48);
        }
      }
      else {
        uVar3 = 0;
      }
      if (*(uint *)(param_1 + 0x58) < uVar3 - 0x19) break;
      pbVar11 = *(byte **)(param_1 + 0x40);
      if (pbVar11 == (byte *)0x0) {
        uVar9 = fgetc(*(FILE **)(param_1 + 0x30));
        if (uVar9 == 0xffffffff) goto LAB_00e4a03c;
        uVar9 = uVar9 & 0xff;
      }
      else if (pbVar11 < *(byte **)(param_1 + 0x50)) {
        *(byte **)(param_1 + 0x40) = pbVar11 + 1;
        uVar9 = (uint)*pbVar11;
      }
      else {
LAB_00e4a03c:
        uVar9 = 0;
        *piVar16 = 1;
      }
      if (uVar9 == ((uint)s_OggSvorbis_010484d8._0_4_ >> 8 & 0xff)) {
        pbVar11 = *(byte **)(param_1 + 0x40);
        if (pbVar11 == (byte *)0x0) {
          uVar9 = fgetc(*(FILE **)(param_1 + 0x30));
          if (uVar9 == 0xffffffff) goto LAB_00e4a08c;
          uVar9 = uVar9 & 0xff;
        }
        else if (pbVar11 < *(byte **)(param_1 + 0x50)) {
          *(byte **)(param_1 + 0x40) = pbVar11 + 1;
          uVar9 = (uint)*pbVar11;
        }
        else {
LAB_00e4a08c:
          uVar9 = 0;
          *piVar16 = 1;
        }
        if (uVar9 != ((uint)s_OggSvorbis_010484d8._0_4_ >> 0x10 & 0xff)) goto LAB_00e4a164;
        pbVar11 = *(byte **)(param_1 + 0x40);
        if (pbVar11 == (byte *)0x0) {
          uVar9 = fgetc(*(FILE **)(param_1 + 0x30));
          if (uVar9 == 0xffffffff) goto LAB_00e4a0e0;
          uVar9 = uVar9 & 0xff;
        }
        else if (pbVar11 < *(byte **)(param_1 + 0x50)) {
          *(byte **)(param_1 + 0x40) = pbVar11 + 1;
          uVar9 = (uint)*pbVar11;
        }
        else {
LAB_00e4a0e0:
          uVar9 = 0;
          *piVar16 = 1;
        }
        if (uVar9 != (uint)s_OggSvorbis_010484d8._0_4_ >> 0x18) goto LAB_00e4a164;
        if (*piVar16 != 0) break;
        lVar13 = 4;
        local_84._0_1_ = s_OggSvorbis_010484d8[0];
        local_84._1_1_ = s_OggSvorbis_010484d8[1];
        local_84._2_1_ = s_OggSvorbis_010484d8[2];
        local_84._3_1_ = s_OggSvorbis_010484d8[3];
        do {
          pbVar11 = *(byte **)(param_1 + 0x40);
          if (pbVar11 == (byte *)0x0) {
            uVar9 = fgetc(*(FILE **)(param_1 + 0x30));
            if (uVar9 == 0xffffffff) goto LAB_00e4a114;
          }
          else if (pbVar11 < *(byte **)(param_1 + 0x50)) {
            *(byte **)(param_1 + 0x40) = pbVar11 + 1;
            uVar9 = (uint)*pbVar11;
          }
          else {
LAB_00e4a114:
            uVar9 = 0;
            *piVar16 = 1;
          }
          *(byte *)((long)&local_84 + lVar13) = (byte)uVar9;
          uVar9 = local_6e;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x1b);
        if (*piVar16 != 0) break;
        if (local_80[0] == '\0') {
          lVar13 = 0;
          uVar12 = 0;
          local_6e = 0;
          do {
            pbVar11 = (byte *)((long)&local_84 + lVar13);
            lVar13 = lVar13 + 1;
            uVar12 = *(uint *)(&DAT_02122f7c + (ulong)((uint)*pbVar11 ^ uVar12 >> 0x18) * 4) ^
                     uVar12 << 8;
          } while (lVar13 != 0x1b);
          uVar14 = (uint)local_6a;
          if (local_6a != 0) {
            iVar4 = 0;
            do {
              iVar15 = iVar4;
              pbVar11 = *(byte **)(param_1 + 0x40);
              if (pbVar11 == (byte *)0x0) {
                uVar5 = fgetc(*(FILE **)(param_1 + 0x30));
                if (uVar5 == 0xffffffff) goto LAB_00e4a244;
              }
              else if (pbVar11 < *(byte **)(param_1 + 0x50)) {
                *(byte **)(param_1 + 0x40) = pbVar11 + 1;
                uVar5 = (uint)*pbVar11;
              }
              else {
LAB_00e4a244:
                uVar5 = 0;
                *piVar16 = 1;
              }
              uVar14 = uVar14 - 1;
              iVar4 = iVar15 + (uVar5 & 0xff);
              uVar12 = *(uint *)(&DAT_02122f7c + (ulong)(uVar5 & 0xff ^ uVar12 >> 0x18) * 4) ^
                       uVar12 << 8;
            } while (uVar14 != 0);
            if (iVar4 != 0) {
              if (*piVar16 != 0) break;
              iVar15 = iVar15 + (uVar5 & 0xff);
              do {
                pbVar11 = *(byte **)(param_1 + 0x40);
                if (pbVar11 == (byte *)0x0) {
                  uVar14 = fgetc(*(FILE **)(param_1 + 0x30));
                  if (uVar14 == 0xffffffff) goto LAB_00e4a2bc;
                }
                else if (pbVar11 < *(byte **)(param_1 + 0x50)) {
                  *(byte **)(param_1 + 0x40) = pbVar11 + 1;
                  uVar14 = (uint)*pbVar11;
                }
                else {
LAB_00e4a2bc:
                  uVar14 = 0;
                  *piVar16 = 1;
                }
                iVar15 = iVar15 + -1;
                uVar12 = *(uint *)(&DAT_02122f7c + (ulong)(uVar14 & 0xff ^ uVar12 >> 0x18) * 4) ^
                         uVar12 << 8;
              } while (iVar15 != 0);
            }
          }
          if (uVar12 == uVar9) {
            if (param_2 != (undefined4 *)0x0) {
              uVar6 = stb_vorbis_get_file_offset(param_1);
              *param_2 = uVar6;
            }
            if (param_3 != (uint *)0x0) {
              *param_3 = local_80[1] >> 2 & 1;
            }
            FUN_00e499e0(param_1,uVar3 - 1);
            uVar7 = 1;
            goto LAB_00e49f18;
          }
        }
        cVar1 = *(char *)(param_1 + 0x5c);
      }
      else {
LAB_00e4a164:
        if (*piVar16 != 0) break;
        cVar1 = *(char *)(param_1 + 0x5c);
      }
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(long *)(param_1 + 0x40) == 0) {
          uVar8 = (ulong)(*(uint *)(param_1 + 0x38) + uVar3);
          if (((int)uVar3 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),uVar3) != false)) {
            uVar8 = 0x7fffffff;
            *piVar16 = 1;
          }
          iVar4 = fseek(*(FILE **)(param_1 + 0x30),uVar8,0);
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x98) = 1;
            fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
          }
        }
        else {
          uVar8 = *(long *)(param_1 + 0x48) + (ulong)uVar3;
          if (*(ulong *)(param_1 + 0x50) <= uVar8) {
            uVar7 = 0;
            *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x50);
            *(undefined4 *)(param_1 + 0x98) = 1;
            goto LAB_00e49f18;
          }
          *(ulong *)(param_1 + 0x40) = uVar8;
        }
      }
    }
LAB_00e49f6c:
    iVar4 = *piVar16;
  }
  uVar7 = 0;
LAB_00e49f18:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


