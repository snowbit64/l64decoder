// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseBCP47LanguageTag
// Entry Point: 00c5dd30
// Size: 1944 bytes
// Signature: undefined __cdecl parseBCP47LanguageTag(char * param_1, LANGUAGE_TYPE * param_2, DATE_FORMAT * param_3, TIME_FORMAT * param_4)


/* LanguageUtil::parseBCP47LanguageTag(char const*, LanguageUtil::LANGUAGE_TYPE&,
   LanguageUtil::DATE_FORMAT&, LanguageUtil::TIME_FORMAT&) */

void LanguageUtil::parseBCP47LanguageTag
               (char *param_1,LANGUAGE_TYPE *param_2,DATE_FORMAT *param_3,TIME_FORMAT *param_4)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  uint7 uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  LANGUAGE_TYPE LVar12;
  LANGUAGE_TYPE LVar13;
  undefined8 local_48;
  undefined4 local_40;
  undefined local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48 = 0;
  local_3c = 0;
  local_40 = 0;
  if ((byte)*param_1 == 0) {
LAB_00c5e048:
    uVar7 = 0;
    goto LAB_00c5e04c;
  }
  uVar10 = ((byte)*param_1 & 0xffffffdf) - 0x5b;
  if ((((uVar10 < 0xffffffe6) || ((byte)param_1[1] == 0)) ||
      (((byte)param_1[1] & 0xffffffdf) - 0x5b < 0xffffffe6)) ||
     ((cVar1 = param_1[2], cVar1 != '-' && (cVar1 != '\0')))) {
    if ((((uVar10 < 0xffffffe6) || ((byte)param_1[1] == 0)) ||
        ((((byte)param_1[1] & 0xffffffdf) - 0x5b < 0xffffffe6 ||
         (((byte)param_1[2] == 0 || (((byte)param_1[2] & 0xffffffdf) - 0x5b < 0xffffffe6)))))) ||
       ((cVar1 = param_1[3], cVar1 != '-' && (cVar1 != '\0')))) goto LAB_00c5e048;
    lVar8 = 3;
    if (cVar1 != '\0') {
      lVar8 = 4;
    }
    uVar4 = (uint7)CONCAT12(param_1[2],*(undefined2 *)param_1);
  }
  else {
    lVar8 = 2;
    if (cVar1 != '\0') {
      lVar8 = 3;
    }
    uVar4 = (uint7)*(ushort *)param_1;
  }
  local_48 = (ulong)(uVar4 << 0x20);
  puVar9 = (undefined4 *)(param_1 + lVar8);
  bVar2 = *(byte *)puVar9;
  uVar10 = (uint)bVar2;
  if (bVar2 != 0) {
    if ((((0xffffffe5 < (bVar2 & 0xffffffdf) - 0x5b) && (*(byte *)((long)puVar9 + 1) != 0)) &&
        (0xffffffe5 < (*(byte *)((long)puVar9 + 1) & 0xffffffdf) - 0x5b)) &&
       (((*(byte *)((long)puVar9 + 2) != 0 &&
         (0xffffffe5 < (*(byte *)((long)puVar9 + 2) & 0xffffffdf) - 0x5b)) &&
        ((cVar1 = *(char *)((long)puVar9 + 3), cVar1 == '-' || (cVar1 == '\0')))))) {
      lVar8 = 3;
      if (cVar1 != '\0') {
        lVar8 = 4;
      }
      puVar9 = (undefined4 *)((long)puVar9 + lVar8);
      uVar10 = (uint)*(byte *)puVar9;
      if (*(byte *)puVar9 == 0) goto LAB_00c5e07c;
    }
    if ((((0xffffffe5 < (uVar10 & 0xffffffdf) - 0x5b) && (*(byte *)((long)puVar9 + 1) != 0)) &&
        ((0xffffffe5 < (*(byte *)((long)puVar9 + 1) & 0xffffffdf) - 0x5b &&
         ((*(byte *)((long)puVar9 + 2) != 0 &&
          (0xffffffe5 < (*(byte *)((long)puVar9 + 2) & 0xffffffdf) - 0x5b)))))) &&
       ((cVar1 = *(char *)((long)puVar9 + 3), cVar1 == '-' || (cVar1 == '\0')))) {
      lVar8 = 3;
      if (cVar1 != '\0') {
        lVar8 = 4;
      }
      puVar9 = (undefined4 *)((long)puVar9 + lVar8);
      uVar10 = (uint)*(byte *)puVar9;
      if (uVar10 == 0) goto LAB_00c5e07c;
    }
    if (((((0xffffffe5 < (uVar10 & 0xffffffdf) - 0x5b) && (*(byte *)((long)puVar9 + 1) != 0)) &&
         (0xffffffe5 < (*(byte *)((long)puVar9 + 1) & 0xffffffdf) - 0x5b)) &&
        ((*(byte *)((long)puVar9 + 2) != 0 &&
         (0xffffffe5 < (*(byte *)((long)puVar9 + 2) & 0xffffffdf) - 0x5b)))) &&
       ((cVar1 = *(char *)((long)puVar9 + 3), cVar1 == '-' || (cVar1 == '\0')))) {
      lVar8 = 3;
      if (cVar1 != '\0') {
        lVar8 = 4;
      }
      puVar9 = (undefined4 *)((long)puVar9 + lVar8);
      uVar10 = (uint)*(byte *)puVar9;
      if (uVar10 == 0) goto LAB_00c5e07c;
    }
    if (((0xffffffe5 < (uVar10 & 0xffffffdf) - 0x5b) && (*(byte *)((long)puVar9 + 1) != 0)) &&
       ((((0xffffffe5 < (*(byte *)((long)puVar9 + 1) & 0xffffffdf) - 0x5b &&
          (((*(byte *)((long)puVar9 + 2) != 0 &&
            (0xffffffe5 < (*(byte *)((long)puVar9 + 2) & 0xffffffdf) - 0x5b)) &&
           (*(byte *)((long)puVar9 + 3) != 0)))) &&
         (0xffffffe5 < (*(byte *)((long)puVar9 + 3) & 0xffffffdf) - 0x5b)) &&
        ((*(char *)(puVar9 + 1) == '-' || (*(char *)(puVar9 + 1) == '\0')))))) {
      local_40 = *puVar9;
      lVar8 = 4;
      if (*(char *)(puVar9 + 1) != '\0') {
        lVar8 = 5;
      }
      puVar9 = (undefined4 *)((long)puVar9 + lVar8);
      uVar10 = (uint)*(byte *)puVar9;
      if (uVar10 == 0) goto LAB_00c5e07c;
    }
    if ((((uVar10 & 0xffffffdf) - 0x5b < 0xffffffe6) || (*(byte *)((long)puVar9 + 1) == 0)) ||
       (((*(byte *)((long)puVar9 + 1) & 0xffffffdf) - 0x5b < 0xffffffe6 ||
        ((*(char *)((long)puVar9 + 2) != '-' && (*(char *)((long)puVar9 + 2) != '\0')))))) {
      if (((0xfffffff5 < uVar10 - 0x3a) &&
          (((*(byte *)((long)puVar9 + 1) != 0 && (0xfffffff5 < *(byte *)((long)puVar9 + 1) - 0x3a))
           && (*(byte *)((long)puVar9 + 2) != 0)))) &&
         ((0xfffffff5 < *(byte *)((long)puVar9 + 2) - 0x3a &&
          ((*(char *)((long)puVar9 + 3) == '-' || (*(char *)((long)puVar9 + 3) == '\0')))))) {
        local_48 = (ulong)CONCAT52(CONCAT41((int)((uVar4 << 0x20) >> 0x18),
                                            *(undefined *)((long)puVar9 + 2)),*(undefined2 *)puVar9)
        ;
      }
    }
    else {
      local_48 = (ulong)CONCAT52((int5)((uVar4 << 0x20) >> 0x10),*(undefined2 *)puVar9);
    }
  }
LAB_00c5e07c:
  local_3c = 0;
  iVar6 = strcasecmp((char *)((long)&local_48 + 4),"de");
  if (iVar6 == 0) {
    iVar6 = 0;
    uVar11 = 0;
    LVar12 = 1;
  }
  else {
    iVar6 = strcasecmp((char *)((long)&local_48 + 4),"en");
    if (iVar6 == 0) {
      iVar6 = strcasecmp((char *)&local_48,"US");
      if (iVar6 == 0) {
        iVar6 = 1;
        uVar11 = 1;
        LVar12 = 0;
      }
      else {
        iVar6 = strcasecmp((char *)&local_48,"CA");
        uVar11 = 0;
        iVar6 = (uint)(iVar6 == 0) << 1;
        LVar12 = 0;
      }
    }
    else {
      iVar6 = strcasecmp((char *)((long)&local_48 + 4),"ja");
      if (iVar6 == 0) {
        uVar11 = 0;
        iVar6 = 2;
        LVar12 = 2;
      }
      else {
        iVar6 = strcasecmp((char *)((long)&local_48 + 4),"pl");
        if (iVar6 == 0) {
          iVar6 = 0;
          uVar11 = 0;
          LVar12 = 3;
        }
        else {
          iVar6 = strcasecmp((char *)((long)&local_48 + 4),"cs");
          if (iVar6 == 0) {
            iVar6 = 0;
            uVar11 = 0;
            LVar12 = 4;
          }
          else {
            iVar6 = strcasecmp((char *)((long)&local_48 + 4),"fr");
            if (iVar6 == 0) {
              iVar6 = strcasecmp((char *)&local_48,"CA");
              bVar5 = iVar6 == 0;
              LVar13 = 5;
              LVar12 = 0x17;
            }
            else {
              iVar6 = strcasecmp((char *)((long)&local_48 + 4),"es");
              if (iVar6 != 0) {
                iVar6 = strcasecmp((char *)((long)&local_48 + 4),"ru");
                if (iVar6 == 0) {
                  iVar6 = 0;
                  uVar11 = 0;
                  LVar12 = 7;
                }
                else {
                  iVar6 = strcasecmp((char *)((long)&local_48 + 4),"it");
                  if (iVar6 == 0) {
                    iVar6 = 0;
                    uVar11 = 0;
                    LVar12 = 8;
                  }
                  else {
                    iVar6 = strcasecmp((char *)((long)&local_48 + 4),"pt");
                    if (iVar6 == 0) {
                      iVar6 = strcasecmp((char *)&local_48,"BR");
                      bVar5 = iVar6 == 0;
                      LVar13 = 9;
                      LVar12 = 0xe;
                      goto LAB_00c5e360;
                    }
                    iVar6 = strcasecmp((char *)((long)&local_48 + 4),"hu");
                    if (iVar6 == 0) {
                      iVar6 = 0;
                      uVar11 = 0;
                      LVar12 = 10;
                    }
                    else {
                      iVar6 = strcasecmp((char *)((long)&local_48 + 4),"nl");
                      if (iVar6 == 0) {
                        iVar6 = 0;
                        uVar11 = 0;
                        LVar12 = 0xb;
                      }
                      else {
                        iVar6 = strcasecmp((char *)((long)&local_48 + 4),"zh");
                        if (iVar6 == 0) {
                          iVar6 = strcasecmp((char *)&local_40,"Hant");
                          if ((iVar6 == 0) ||
                             ((((iVar6 = strcasecmp((char *)&local_48,"HK"), iVar6 == 0 ||
                                (iVar6 = strcasecmp((char *)&local_48,"MO"), iVar6 == 0)) ||
                               (iVar6 = strcasecmp((char *)&local_48,"TW"), iVar6 == 0)) &&
                              (iVar6 = strcasecmp((char *)&local_40,"Hans"), iVar6 != 0)))) {
                            iVar6 = 0;
                            uVar11 = 0;
                            LVar12 = 0xd;
                          }
                          else {
                            iVar6 = 0;
                            uVar11 = 0;
                            LVar12 = 0xc;
                          }
                        }
                        else {
                          iVar6 = strcasecmp((char *)((long)&local_48 + 4),"tr");
                          if (iVar6 == 0) {
                            iVar6 = 0;
                            uVar11 = 0;
                            LVar12 = 0xf;
                          }
                          else {
                            iVar6 = strcasecmp((char *)((long)&local_48 + 4),"ro");
                            if (iVar6 == 0) {
                              iVar6 = 0;
                              uVar11 = 0;
                              LVar12 = 0x10;
                            }
                            else {
                              iVar6 = strcasecmp((char *)((long)&local_48 + 4),"ko");
                              if (iVar6 == 0) {
                                iVar6 = 0;
                                uVar11 = 0;
                                LVar12 = 0x11;
                              }
                              else {
                                iVar6 = strcasecmp((char *)((long)&local_48 + 4),"da");
                                if (iVar6 == 0) {
                                  iVar6 = 0;
                                  uVar11 = 0;
                                  LVar12 = 0x13;
                                }
                                else {
                                  iVar6 = strcasecmp((char *)((long)&local_48 + 4),"fi");
                                  if (iVar6 == 0) {
                                    iVar6 = 0;
                                    uVar11 = 0;
                                    LVar12 = 0x14;
                                  }
                                  else {
                                    iVar6 = strcasecmp((char *)((long)&local_48 + 4),"no");
                                    if (((iVar6 == 0) ||
                                        (iVar6 = strcasecmp((char *)((long)&local_48 + 4),"nb"),
                                        iVar6 == 0)) ||
                                       (iVar6 = strcasecmp((char *)((long)&local_48 + 4),"nn"),
                                       iVar6 == 0)) {
                                      iVar6 = 0;
                                      uVar11 = 0;
                                      LVar12 = 0x15;
                                    }
                                    else {
                                      iVar6 = strcasecmp((char *)((long)&local_48 + 4),"sv");
                                      uVar7 = 0;
                                      if (iVar6 != 0) goto LAB_00c5e04c;
                                      uVar11 = 0;
                                      iVar6 = 0;
                                      LVar12 = 0x16;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_00c5e36c;
              }
              iVar6 = strcasecmp((char *)&local_48,"ES");
              bVar5 = iVar6 == 0;
              LVar13 = 0x12;
              LVar12 = 6;
            }
LAB_00c5e360:
            iVar6 = 0;
            uVar11 = 0;
            if (!bVar5) {
              LVar12 = LVar13;
            }
          }
        }
      }
    }
  }
LAB_00c5e36c:
  uVar7 = 1;
  *param_2 = LVar12;
  *(int *)param_3 = iVar6;
  *(undefined4 *)param_4 = uVar11;
LAB_00c5e04c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


