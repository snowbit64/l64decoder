// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetStr
// Entry Point: 00df9d88
// Size: 928 bytes
// Signature: undefined GetStr(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::StrPair::GetStr() */

void tinyxml2::StrPair::GetStr(void)

{
  char cVar1;
  long lVar2;
  char *__dest;
  int iVar3;
  uint *in_x0;
  char *pcVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  char *pcVar12;
  char *__s1;
  size_t __n;
  int local_7c;
  undefined8 local_78;
  undefined2 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)((long)in_x0 + 1) & 1) != 0) {
    **(undefined **)(in_x0 + 4) = 0;
    uVar11 = *in_x0 ^ 0x100;
    *in_x0 = uVar11;
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      pcVar12 = *(char **)(in_x0 + 2);
      __dest = pcVar12;
      if (pcVar12 < *(char **)(in_x0 + 4)) {
        do {
          if ((uVar11 >> 1 & 1) == 0) {
LAB_00df9e5c:
            cVar1 = *pcVar12;
            if (((uVar11 & 1) == 0) || (cVar1 != '&')) {
              __s1 = pcVar12 + 1;
              pcVar12 = __dest + 1;
              *__dest = cVar1;
              if (*(char **)(in_x0 + 4) <= __s1) break;
            }
            else {
              __s1 = pcVar12 + 1;
              if (*__s1 == '#') {
                local_70 = 0;
                local_78 = 0;
                local_7c = 0;
                pcVar4 = (char *)XMLUtil::GetCharacterRef(pcVar12,(char *)&local_78,&local_7c);
                if (pcVar4 == (char *)0x0) {
                  *__dest = *pcVar12;
                  pcVar4 = *(char **)(in_x0 + 4);
joined_r0x00dfa000:
                  pcVar12 = __dest + 1;
                  if (pcVar4 <= __s1) break;
                }
                else {
                  __n = (size_t)local_7c;
                  memcpy(__dest,&local_78,__n);
                  pcVar12 = __dest + __n;
                  __s1 = pcVar4;
                  if (*(char **)(in_x0 + 4) <= pcVar4) break;
                }
              }
              else {
                iVar3 = strncmp(__s1,"quot",4);
                if ((iVar3 == 0) && (pcVar12[5] == ';')) {
                  lVar5 = 0;
                  lVar8 = 6;
                }
                else {
                  iVar3 = strncmp(__s1,"amp",3);
                  if ((iVar3 == 0) && (pcVar12[4] == ';')) {
                    lVar5 = 1;
                    lVar8 = 5;
                  }
                  else {
                    iVar3 = strncmp(__s1,"apos",4);
                    if ((iVar3 == 0) && (pcVar12[5] == ';')) {
                      lVar5 = 2;
                      lVar8 = 6;
                    }
                    else {
                      iVar3 = strncmp(__s1,"lt",2);
                      if ((iVar3 == 0) && (pcVar12[3] == ';')) {
                        lVar5 = 3;
                      }
                      else {
                        iVar3 = strncmp(__s1,"gt",2);
                        if ((iVar3 != 0) || (pcVar12[3] != ';')) {
                          pcVar4 = *(char **)(in_x0 + 4);
                          goto joined_r0x00dfa000;
                        }
                        lVar5 = 4;
                      }
                      lVar8 = 4;
                    }
                  }
                }
                __s1 = pcVar12 + lVar8;
                pcVar12 = __dest + 1;
                *__dest = (&DAT_01013234)[lVar5 * 0x10];
                if (*(char **)(in_x0 + 4) <= __s1) break;
              }
            }
          }
          else if (*pcVar12 == '\n') {
            __s1 = pcVar12 + 1;
            if (*__s1 == '\r') {
              __s1 = pcVar12 + 2;
            }
            pcVar12 = __dest + 1;
            *__dest = '\n';
            if (*(char **)(in_x0 + 4) <= __s1) break;
          }
          else {
            if (*pcVar12 != '\r') goto LAB_00df9e5c;
            __s1 = pcVar12 + 1;
            if (*__s1 == '\n') {
              __s1 = pcVar12 + 2;
            }
            pcVar12 = __dest + 1;
            *__dest = '\n';
            if (*(char **)(in_x0 + 4) <= __s1) break;
          }
          uVar11 = *in_x0;
          __dest = pcVar12;
          pcVar12 = __s1;
        } while( true );
      }
      *pcVar12 = '\0';
      uVar11 = *in_x0;
      if ((uVar11 >> 2 & 1) != 0) {
        pbVar6 = *(byte **)(in_x0 + 2);
        bVar10 = *pbVar6;
        while ((-1 < (char)bVar10 && ((bVar10 == 0x20 || (bVar10 - 9 < 5))))) {
          pbVar6 = pbVar6 + 1;
          bVar10 = *pbVar6;
        }
        *(byte **)(in_x0 + 2) = pbVar6;
        bVar10 = *pbVar6;
        pbVar9 = pbVar6;
        if (bVar10 != 0) {
          do {
            uVar11 = (uint)bVar10;
            pbVar7 = pbVar6;
            if ((-1 < (char)bVar10) && ((uVar11 == 0x20 || (uVar11 - 9 < 5)))) {
              do {
                if ((uVar11 != 0x20) && (4 < uVar11 - 9)) {
                  if (uVar11 == 0) goto LAB_00dfa0e0;
                  break;
                }
                pbVar9 = pbVar9 + 1;
                uVar11 = (uint)*pbVar9;
              } while (-1 < (char)*pbVar9);
              pbVar7 = pbVar6 + 1;
              *pbVar6 = 0x20;
              bVar10 = *pbVar9;
            }
            pbVar6 = pbVar7 + 1;
            *pbVar7 = bVar10;
            bVar10 = pbVar9[1];
            pbVar9 = pbVar9 + 1;
          } while (bVar10 != 0);
LAB_00dfa0e0:
          *pbVar6 = 0;
          uVar11 = *in_x0;
        }
      }
    }
    *in_x0 = uVar11 & 0x200;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(in_x0 + 2));
}


