// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetCharacterRef
// Entry Point: 00dfa128
// Size: 564 bytes
// Signature: undefined __cdecl GetCharacterRef(char * param_1, char * param_2, int * param_3)


/* tinyxml2::XMLUtil::GetCharacterRef(char const*, char*, int*) */

void tinyxml2::XMLUtil::GetCharacterRef(char *param_1,char *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 local_70 [4];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  *param_3 = 0;
  pcVar5 = param_1 + 1;
  if (*pcVar5 == '#') {
    cVar1 = param_1[2];
    if (cVar1 != '\0') {
      if (cVar1 == 'x') {
        if (param_1[3] == '\0') {
LAB_00dfa294:
          pcVar5 = (char *)0x0;
          if (*(long *)(lVar4 + 0x28) == local_38) {
            return;
          }
          goto LAB_00dfa2a8;
        }
        pcVar5 = strchr(param_1 + 3,0x3b);
        if (pcVar5 != (char *)0x0) {
          bVar2 = pcVar5[-1];
          lVar6 = (long)pcVar5 - (long)param_1;
          if (bVar2 == 0x78) goto LAB_00dfa224;
          uVar7 = 0;
          iVar11 = 1;
          pbVar9 = (byte *)(pcVar5 + -2);
          do {
            uVar8 = (uint)bVar2;
            if (uVar8 - 0x30 < 10) {
              iVar12 = -0x30;
            }
            else if (uVar8 - 0x61 < 6) {
              iVar12 = -0x57;
            }
            else {
              if (5 < uVar8 - 0x41) goto LAB_00dfa294;
              iVar12 = -0x37;
            }
            bVar2 = *pbVar9;
            uVar8 = (iVar12 + uVar8) * iVar11;
            iVar11 = iVar11 << 4;
            uVar7 = uVar7 + uVar8;
            pbVar9 = pbVar9 + -1;
          } while (bVar2 != 0x78);
          goto LAB_00dfa260;
        }
      }
      else {
        pcVar5 = strchr(param_1 + 2,0x3b);
        if (pcVar5 != (char *)0x0) {
          uVar8 = (uint)(byte)pcVar5[-1];
          lVar6 = (long)pcVar5 - (long)param_1;
          if (pcVar5[-1] == 0x23) {
LAB_00dfa224:
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            iVar11 = 1;
            pbVar9 = (byte *)(pcVar5 + -2);
            do {
              uVar3 = uVar8 - 0x30;
              if (9 < uVar3) goto LAB_00dfa294;
              uVar8 = (uint)*pbVar9;
              uVar7 = uVar7 + uVar3 * iVar11;
              iVar11 = iVar11 * 10;
              pbVar9 = pbVar9 + -1;
            } while (uVar8 != 0x23);
          }
LAB_00dfa260:
          local_70[0] = 0;
          local_70[1] = 0;
          local_40 = 0xfc;
          local_70[3] = 0xe0;
          local_70[2] = 0xc0;
          uStack_48 = 0xf8;
          uStack_50 = 0xf0;
          if (uVar7 < 0x80) {
            lVar10 = 1;
            *param_3 = 1;
LAB_00dfa318:
            *param_2 = (byte)local_70[lVar10] | (byte)uVar7;
          }
          else {
            if (uVar7 < 0x800) {
              *param_3 = 2;
LAB_00dfa304:
              bVar2 = (byte)uVar7;
              uVar7 = uVar7 >> 6;
              param_2[1] = bVar2 & 0x3f | 0x80;
              lVar10 = (long)*param_3;
              goto LAB_00dfa318;
            }
            if (uVar7 >> 0x10 == 0) {
              *param_3 = 3;
LAB_00dfa2f4:
              bVar2 = (byte)uVar7;
              uVar7 = uVar7 >> 6;
              param_2[2] = bVar2 & 0x3f | 0x80;
              goto LAB_00dfa304;
            }
            if (uVar7 < 0x200000) {
              bVar2 = (byte)uVar7;
              uVar7 = uVar7 >> 6;
              *param_3 = 4;
              param_2[3] = bVar2 & 0x3f | 0x80;
              goto LAB_00dfa2f4;
            }
            *param_3 = 0;
          }
          pcVar5 = param_1 + lVar6 + 1;
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
LAB_00dfa2a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar5);
}


