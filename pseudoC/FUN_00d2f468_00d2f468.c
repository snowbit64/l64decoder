// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2f468
// Entry Point: 00d2f468
// Size: 8968 bytes
// Signature: undefined FUN_00d2f468(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined1 param_9)


/* WARNING: Removing unreachable block (ram,0x00d30454) */
/* WARNING: Removing unreachable block (ram,0x00d304b4) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00d2f468(long param_1,code **param_2,char *param_3,char *param_4,int param_5,char *param_6,
                char **param_7,uint param_8,char param_9)

{
  code **ppcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **ppcVar4;
  char **ppcVar5;
  long lVar6;
  int *piVar7;
  undefined uVar8;
  long lVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  undefined4 *puVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  char **ppcVar22;
  undefined8 uVar23;
  long lVar24;
  void *__src;
  char **ppcVar25;
  ulong uVar26;
  long lVar27;
  long **pplVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  undefined8 *puVar32;
  code *pcVar33;
  long **pplVar34;
  long **pplVar35;
  undefined8 uVar36;
  void *__dest;
  undefined4 uVar37;
  long lVar38;
  long lVar39;
  long *plVar40;
  char **ppcVar41;
  char **local_a0;
  char *local_88;
  long local_80;
  char *local_78;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  lVar39 = *(long *)(param_1 + 0x2a0);
  if (*(code ***)(param_1 + 0x120) == param_2) {
    local_a0 = (char **)(param_1 + 0x220);
    ppcVar25 = (char **)(param_1 + 0x228);
  }
  else {
    local_a0 = *(char ***)(param_1 + 0x238);
    ppcVar25 = local_a0 + 1;
  }
  lVar24 = lVar39 + 0xa0;
  lVar38 = lVar39 + 0x108;
  ppcVar1 = (code **)(param_1 + 0x1f0);
  ppcVar2 = (char **)(lVar39 + 0xb8);
  ppcVar3 = (char **)(param_1 + 0x328);
  ppcVar4 = (char **)(lVar39 + 0xc0);
  plVar40 = (long *)(param_1 + 0x278);
  ppcVar5 = (char **)(param_1 + 800);
  lVar6 = param_1 + 0x310;
  local_88 = param_6;
LAB_00d2f530:
  *local_a0 = param_3;
  *ppcVar25 = local_88;
  iVar15 = param_5;
  if (0 < param_5) goto switchD_00d2f58c_caseD_fffffff1;
  if (((param_8 & 0xff) != 0) && (param_5 != 0)) {
LAB_00d314e4:
    *param_7 = param_3;
    iVar14 = 0;
    goto switchD_00d2f58c_caseD_ffffffff;
  }
  iVar15 = 0xf;
  iVar14 = 5;
  switch(param_5) {
  case 0:
    *local_a0 = local_88;
    iVar14 = 4;
    goto switchD_00d2f58c_caseD_ffffffff;
  default:
    local_88 = param_4;
    iVar15 = -param_5;
  case -0xf:
switchD_00d2f58c_caseD_fffffff1:
    iVar12 = (**ppcVar1)(ppcVar1,iVar15,param_3,local_88,param_2);
    pcVar29 = local_88;
    if (0x3d < iVar12 + 1U) goto LAB_00d312c8;
    break;
  case -4:
    if (param_2 == *(code ***)(param_1 + 0x120)) {
      if (*(char *)(param_1 + 0x390) == '\0') {
        iVar14 = 3;
        goto switchD_00d2f58c_caseD_ffffffff;
      }
    }
    else if (*(char *)(*(long *)(param_1 + 0x238) + 0x24) == '\0') goto LAB_00d314e4;
    iVar15 = (**ppcVar1)(ppcVar1,0xfffffffc,param_4,param_4,param_2);
    if (iVar15 != -1) goto LAB_00d314e4;
    iVar14 = 0x1d;
    goto switchD_00d2f58c_caseD_ffffffff;
  case -2:
    iVar14 = 6;
  case -1:
    goto switchD_00d2f58c_caseD_ffffffff;
  }
  uVar37 = 0;
  uVar16 = 1;
  switch(iVar12) {
  case 0:
    if (iVar15 != 0xe) goto LAB_00d312c8;
    break;
  case 1:
    iVar14 = FUN_00d31770(param_1,0,param_3,local_88);
    goto joined_r0x00d2fa74;
  case 2:
    if (*(char *)(param_1 + 0x391) != '\0') {
      uVar8 = *(undefined *)(lVar39 + 0x101);
      *(undefined *)(lVar39 + 0x101) = 1;
      if ((*(int *)(param_1 + 0x394) != 0) && (*(long *)(param_1 + 0xe0) != 0)) {
        lVar24 = FUN_00d31dd4(param_1,lVar38,&DAT_005465fe,0x40);
        if (lVar24 == 0) goto LAB_00d31730;
        uVar23 = *(undefined8 *)(param_1 + 0x2a8);
        *(undefined8 *)(lVar24 + 0x20) = uVar23;
        *(undefined *)(lVar39 + 0x103) = 0;
        iVar15 = (**(code **)(param_1 + 0xe0))
                           (*(undefined8 *)(param_1 + 0xe8),0,uVar23,*(undefined8 *)(lVar24 + 0x18),
                            *(undefined8 *)(lVar24 + 0x28));
        if (iVar15 == 0) {
LAB_00d315ec:
          iVar14 = 0x15;
          goto switchD_00d2f58c_caseD_ffffffff;
        }
        if (*(char *)(lVar39 + 0x103) == '\0') {
          *(undefined *)(lVar39 + 0x101) = uVar8;
        }
        else if (((*(char *)(lVar39 + 0x102) == '\0') && (*(code **)(param_1 + 0xd8) != (code *)0x0)
                 ) && (iVar15 = (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8)),
                      iVar15 == 0)) goto LAB_00d315a0;
      }
    }
    *(code **)(param_1 + 0x210) = FUN_00d32358;
    iVar14 = FUN_00d33dfc(param_1,0,*(undefined8 *)(param_1 + 0x120),param_3,param_4,param_7,
                          *(char *)(param_1 + 0x38c) == '\0');
    if (iVar14 != 0) goto switchD_00d2f58c_caseD_ffffffff;
    plVar40 = *(long **)(param_1 + 0x2b0);
    if (plVar40 != (long *)0x0) goto LAB_00d316bc;
    goto LAB_00d31684;
  case 3:
    lVar20 = *(long *)(param_1 + 0xa8);
    goto joined_r0x00d2fb0c;
  case 4:
    if (*(long *)(param_1 + 0xa8) == 0) {
      *(undefined8 *)(param_1 + 0x260) = 0;
      goto LAB_00d312c8;
    }
    local_78 = param_3;
    if (*ppcVar3 != (char *)0x0) goto LAB_00d3104c;
    do {
      cVar11 = FUN_00d328e8(lVar6);
      if (cVar11 == '\0') goto LAB_00d31478;
LAB_00d3104c:
      uVar16 = (*param_2[0xe])(param_2,&local_78,pcVar29,ppcVar3,*ppcVar5);
    } while (1 < uVar16);
    if (*(long *)(param_1 + 0x330) == 0) {
LAB_00d31478:
      *(undefined8 *)(param_1 + 600) = 0;
      iVar14 = 1;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    pcVar29 = *ppcVar3;
    if (pcVar29 == *ppcVar5) {
      cVar11 = FUN_00d328e8(lVar6);
      if (cVar11 == '\0') goto LAB_00d31478;
      pcVar29 = *ppcVar3;
    }
    *(char **)(param_1 + 0x328) = pcVar29 + 1;
    *pcVar29 = '\0';
    *(long *)(param_1 + 600) = *(long *)(param_1 + 0x330);
    if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d31730;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
    break;
  case 5:
    *(undefined *)(param_1 + 0x391) = 0;
    *(undefined *)(lVar39 + 0x101) = 1;
    if (*(long *)(param_1 + 0xa8) != 0) {
      iVar15 = *(int *)(param_2 + 0x10);
      local_78 = param_3 + iVar15;
      if ((*ppcVar3 != (char *)0x0) || (cVar11 = FUN_00d328e8(lVar6), cVar11 != '\0')) {
        while (uVar16 = (*param_2[0xe])(param_2,&local_78,(long)pcVar29 - (long)iVar15,ppcVar3,
                                        *ppcVar5), 1 < uVar16) {
          cVar11 = FUN_00d328e8(lVar6);
          if (cVar11 == '\0') goto LAB_00d31494;
        }
        if (*(long *)(param_1 + 0x330) != 0) {
          pcVar29 = *ppcVar3;
          if (pcVar29 == *ppcVar5) {
            cVar11 = FUN_00d328e8(lVar6);
            if (cVar11 == '\0') goto LAB_00d31494;
            pcVar29 = *ppcVar3;
          }
          *(char **)(param_1 + 0x328) = pcVar29 + 1;
          *pcVar29 = '\0';
          *(long *)(param_1 + 0x260) = *(long *)(param_1 + 0x330);
          if (*(long *)(param_1 + 0x330) != 0) {
            uVar16 = 0;
            *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
            cVar11 = *(char *)(lVar39 + 0x102);
            goto joined_r0x00d3051c;
          }
          goto LAB_00d31730;
        }
      }
LAB_00d31494:
      *(undefined8 *)(param_1 + 0x260) = 0;
      iVar14 = 1;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    uVar16 = 1;
    *(undefined **)(param_1 + 0x260) = &DAT_005465fe;
    cVar11 = *(char *)(lVar39 + 0x102);
joined_r0x00d3051c:
    if ((((cVar11 == '\0') && (*(int *)(param_1 + 0x394) == 0)) &&
        (*(code **)(param_1 + 0xd8) != (code *)0x0)) &&
       (iVar15 = (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8)), iVar15 == 0)) {
LAB_00d315a0:
      iVar14 = 0x16;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    if (*(long *)(param_1 + 0x250) != 0) goto switchD_00d2f5e4_caseD_d;
    lVar20 = FUN_00d31dd4(param_1,lVar38,&DAT_005465fe,0x40);
    *(long *)(param_1 + 0x250) = lVar20;
    if (lVar20 == 0) goto LAB_00d31730;
    *(undefined8 *)(lVar20 + 0x28) = 0;
  case 0xd:
switchD_00d2f5e4_caseD_d:
    pcVar29 = local_88;
    if ((*(char *)(lVar39 + 0x100) == '\0') || (*(long *)(param_1 + 0x250) == 0)) goto LAB_00d30f28;
    iVar15 = *(int *)(param_2 + 0x10);
    local_78 = param_3 + iVar15;
    if ((*ppcVar2 != (char *)0x0) || (cVar11 = FUN_00d328e8(lVar24), cVar11 != '\0')) {
      while (uVar13 = (*param_2[0xe])(param_2,&local_78,(long)pcVar29 - (long)iVar15,ppcVar2,
                                      *(undefined8 *)(lVar39 + 0xb0)), 1 < uVar13) {
        cVar11 = FUN_00d328e8(lVar24);
        if (cVar11 == '\0') goto LAB_00d31468;
      }
      if (*ppcVar4 != (char *)0x0) {
        pcVar29 = *(char **)(lVar39 + 0xb8);
        if (pcVar29 == *(char **)(lVar39 + 0xb0)) {
          cVar11 = FUN_00d328e8(lVar24);
          if (cVar11 == '\0') goto LAB_00d31468;
          pcVar29 = *ppcVar2;
        }
        *ppcVar2 = pcVar29 + 1;
        *pcVar29 = '\0';
        pcVar29 = *ppcVar4;
        lVar20 = *(long *)(param_1 + 0x250);
        *(char **)(lVar20 + 0x18) = pcVar29;
        if (pcVar29 != (char *)0x0) {
          *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(param_1 + 0x2a8);
          *ppcVar4 = *ppcVar2;
          if ((*(long *)(param_1 + 0x110) != 0) && (iVar12 == 0xd)) break;
          goto LAB_00d30f28;
        }
        goto LAB_00d31730;
      }
    }
LAB_00d31468:
    *(undefined8 *)(*(long *)(param_1 + 0x250) + 0x18) = 0;
    iVar14 = 1;
    goto switchD_00d2f58c_caseD_ffffffff;
  case 6:
    *(undefined *)(param_1 + 0x391) = 0;
    lVar20 = FUN_00d31dd4(param_1,lVar38,&DAT_005465fe,0x40);
    *(long *)(param_1 + 0x250) = lVar20;
    iVar14 = 1;
    if (lVar20 == 0) goto switchD_00d2f58c_caseD_ffffffff;
    *(undefined *)(lVar39 + 0x101) = 1;
    if (*(long *)(param_1 + 0xa8) == 0) goto switchD_00d2f5e4_caseD_e;
    iVar15 = (*param_2[0xd])(param_2,param_3,local_88,local_a0);
    pcVar29 = local_88;
    if (iVar15 != 0) {
      iVar15 = *(int *)(param_2 + 0x10);
      local_78 = param_3 + iVar15;
      if ((*ppcVar3 != (char *)0x0) || (cVar11 = FUN_00d328e8(lVar6), cVar11 != '\0')) {
        while (uVar16 = (*param_2[0xe])(param_2,&local_78,(long)pcVar29 - (long)iVar15,ppcVar3,
                                        *ppcVar5), 1 < uVar16) {
          cVar11 = FUN_00d328e8(lVar6);
          if (cVar11 == '\0') goto LAB_00d31730;
        }
        if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d31730;
        pcVar29 = *ppcVar3;
        if (pcVar29 == *ppcVar5) {
          cVar11 = FUN_00d328e8(lVar6);
          if (cVar11 == '\0') goto LAB_00d31730;
          pcVar29 = *ppcVar3;
        }
        *(char **)(param_1 + 0x328) = pcVar29 + 1;
        *pcVar29 = '\0';
        pcVar30 = *(char **)(param_1 + 0x330);
        pcVar29 = pcVar30;
        pcVar31 = pcVar30;
        if (pcVar30 != (char *)0x0) {
          do {
            cVar11 = *pcVar31;
            switch(cVar11) {
            case '\0':
              goto switchD_00d30820_caseD_0;
            default:
switchD_00d30820_caseD_1:
              *pcVar29 = cVar11;
              pcVar21 = pcVar29 + 1;
              break;
            case '\n':
            case '\r':
            case ' ':
              pcVar21 = pcVar30;
              if ((pcVar29 != pcVar30) && (pcVar21 = pcVar29, pcVar29[-1] != ' ')) {
                cVar11 = ' ';
                goto switchD_00d30820_caseD_1;
              }
            }
            pcVar29 = pcVar21;
            pcVar31 = pcVar31 + 1;
          } while( true );
        }
      }
      goto LAB_00d31730;
    }
LAB_00d314f4:
    iVar14 = 0x20;
    goto switchD_00d2f58c_caseD_ffffffff;
  case 7:
    if (*(code **)(param_1 + 0xa8) == (code *)0x0) goto LAB_00d312c8;
    (**(code **)(param_1 + 0xa8))
              (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 600),
               *(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268),1);
    *(undefined8 *)(param_1 + 600) = 0;
    pplVar34 = *(long ***)(param_1 + 0x310);
    if (*(long ***)(param_1 + 0x318) == (long **)0x0) {
LAB_00d309d0:
      *(long ***)(param_1 + 0x318) = pplVar34;
    }
    else {
      pplVar28 = *(long ***)(param_1 + 0x318);
      pplVar35 = pplVar34;
      if (pplVar34 != (long **)0x0) {
        do {
          pplVar34 = pplVar35;
          pplVar35 = (long **)*pplVar34;
          *pplVar34 = (long *)pplVar28;
          pplVar28 = pplVar34;
        } while (pplVar35 != (long **)0x0);
        goto LAB_00d309d0;
      }
    }
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *ppcVar5 = (char *)0x0;
    break;
  case 8:
    if (param_9 != '\x01') {
      iVar14 = 4;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    if (*(long *)(param_1 + 600) == 0) {
      uVar16 = 1;
      if (*(long *)(param_1 + 0x260) == 0) goto LAB_00d30a08;
LAB_00d30a10:
      uVar8 = *(undefined *)(lVar39 + 0x101);
      *(undefined *)(lVar39 + 0x101) = 1;
      if ((*(int *)(param_1 + 0x394) != 0) && (*(long *)(param_1 + 0xe0) != 0)) {
        lVar20 = FUN_00d31dd4(param_1,lVar38,&DAT_005465fe,0x40);
        if (lVar20 == 0) goto LAB_00d31730;
        if (*(char *)(param_1 + 0x391) == '\0') {
          uVar23 = *(undefined8 *)(lVar20 + 0x20);
        }
        else {
          uVar23 = *(undefined8 *)(param_1 + 0x2a8);
          *(undefined8 *)(lVar20 + 0x20) = uVar23;
        }
        *(undefined *)(lVar39 + 0x103) = 0;
        iVar15 = (**(code **)(param_1 + 0xe0))
                           (*(undefined8 *)(param_1 + 0xe8),0,uVar23,*(undefined8 *)(lVar20 + 0x18),
                            *(undefined8 *)(lVar20 + 0x28));
        if (iVar15 == 0) goto LAB_00d315ec;
        if (*(char *)(lVar39 + 0x103) == '\0') {
          if (*(long *)(param_1 + 0x260) == 0) {
            *(undefined *)(lVar39 + 0x101) = uVar8;
          }
        }
        else if (((*(char *)(lVar39 + 0x102) == '\0') && (*(code **)(param_1 + 0xd8) != (code *)0x0)
                 ) && (iVar15 = (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8)),
                      iVar15 == 0)) goto LAB_00d315a0;
      }
      *(undefined *)(param_1 + 0x391) = 0;
    }
    else {
      (**(code **)(param_1 + 0xa8))
                (*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 600),
                 *(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268),0);
      pplVar34 = *(long ***)(param_1 + 0x310);
      if (*(long ***)(param_1 + 0x318) == (long **)0x0) {
LAB_00d309e8:
        *(long ***)(param_1 + 0x318) = pplVar34;
      }
      else {
        pplVar28 = *(long ***)(param_1 + 0x318);
        pplVar35 = pplVar34;
        if (pplVar34 != (long **)0x0) {
          do {
            pplVar34 = pplVar35;
            pplVar35 = (long **)*pplVar34;
            *pplVar34 = (long *)pplVar28;
            pplVar28 = pplVar34;
          } while (pplVar35 != (long **)0x0);
          goto LAB_00d309e8;
        }
      }
      uVar16 = 0;
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined8 *)(param_1 + 0x328) = 0;
      *(undefined8 *)(param_1 + 0x330) = 0;
      *ppcVar5 = (char *)0x0;
      if (*(long *)(param_1 + 0x260) != 0) goto LAB_00d30a10;
LAB_00d30a08:
      if (*(char *)(param_1 + 0x391) != '\0') goto LAB_00d30a10;
    }
    if (*(code **)(param_1 + 0xb0) == (code *)0x0) goto LAB_00d30f28;
    (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 8));
    break;
  case 9:
    iVar15 = (*param_2[0xb])(param_2,param_3,local_88);
    pcVar29 = local_88;
    if (iVar15 != 0) goto LAB_00d312c4;
    if (*(char *)(lVar39 + 0x100) == '\0') goto LAB_00d3042c;
    local_78 = param_3;
    if (*ppcVar2 != (char *)0x0) goto LAB_00d31164;
    do {
      cVar11 = FUN_00d328e8(lVar24);
      if (cVar11 == '\0') goto LAB_00d31730;
LAB_00d31164:
      uVar16 = (*param_2[0xe])(param_2,&local_78,pcVar29,ppcVar2,*(undefined8 *)(lVar39 + 0xb0));
    } while (1 < uVar16);
    if (*ppcVar4 == (char *)0x0) goto LAB_00d31730;
    pcVar29 = *(char **)(lVar39 + 0xb8);
    if (pcVar29 == *(char **)(lVar39 + 0xb0)) {
      cVar11 = FUN_00d328e8(lVar24);
      if (cVar11 == '\0') goto LAB_00d31730;
      pcVar29 = *ppcVar2;
    }
    *ppcVar2 = pcVar29 + 1;
    *pcVar29 = '\0';
    pcVar29 = *ppcVar4;
    if (pcVar29 != (char *)0x0) {
      ppcVar22 = (char **)FUN_00d31dd4(param_1,lVar39,pcVar29,0x40);
      *(char ***)(param_1 + 0x250) = ppcVar22;
      if (ppcVar22 != (char **)0x0) {
        if (*ppcVar22 != pcVar29) goto LAB_00d312b8;
        *ppcVar4 = *ppcVar2;
        ppcVar22[5] = (char *)0x0;
        *(undefined *)((long)ppcVar22 + 0x39) = 0;
        if (*(long *)(param_1 + 0x380) == 0) goto LAB_00d313b4;
        bVar10 = true;
LAB_00d313c0:
        *(byte *)((long)ppcVar22 + 0x3a) = bVar10 ^ 1;
        lVar20 = *(long *)(param_1 + 0x110);
        goto joined_r0x00d2fb0c;
      }
    }
    goto LAB_00d31730;
  case 10:
    if (*(char *)(lVar39 + 0x100) == '\0') {
LAB_00d3042c:
      *ppcVar2 = *ppcVar4;
    }
    else {
      local_78 = param_3;
      if (*ppcVar2 != (char *)0x0) goto LAB_00d31228;
      do {
        cVar11 = FUN_00d328e8(lVar24);
        if (cVar11 == '\0') goto LAB_00d31730;
LAB_00d31228:
        uVar16 = (*param_2[0xe])(param_2,&local_78,pcVar29,ppcVar2,*(undefined8 *)(lVar39 + 0xb0));
      } while (1 < uVar16);
      if (*ppcVar4 == (char *)0x0) goto LAB_00d31730;
      pcVar29 = *(char **)(lVar39 + 0xb8);
      if (pcVar29 == *(char **)(lVar39 + 0xb0)) {
        cVar11 = FUN_00d328e8(lVar24);
        if (cVar11 == '\0') goto LAB_00d31730;
        pcVar29 = *ppcVar2;
      }
      *ppcVar2 = pcVar29 + 1;
      *pcVar29 = '\0';
      pcVar29 = *ppcVar4;
      if (pcVar29 == (char *)0x0) goto LAB_00d31730;
      ppcVar22 = (char **)FUN_00d31dd4(param_1,lVar38,pcVar29,0x40);
      *(char ***)(param_1 + 0x250) = ppcVar22;
      if (ppcVar22 == (char **)0x0) goto LAB_00d31730;
      if (*ppcVar22 == pcVar29) {
        bVar10 = true;
        *ppcVar4 = *ppcVar2;
        ppcVar22[5] = (char *)0x0;
        *(undefined *)((long)ppcVar22 + 0x39) = 1;
        if (*(long *)(param_1 + 0x380) == 0) {
LAB_00d313b4:
          bVar10 = *(long *)(param_1 + 0x238) != 0;
        }
        goto LAB_00d313c0;
      }
LAB_00d312b8:
      *ppcVar2 = *ppcVar4;
    }
LAB_00d312c4:
    *(undefined8 *)(param_1 + 0x250) = 0;
    goto LAB_00d312c8;
  case 0xb:
    if (*(char *)(lVar39 + 0x100) != '\0') {
      lVar20 = *(long *)(param_1 + 0x110);
      goto joined_r0x00d2fb0c;
    }
    goto LAB_00d312c8;
  case 0xc:
    if (*(char *)(lVar39 + 0x100) == '\0') goto LAB_00d312c8;
    iVar14 = FUN_00d32af4(param_1,param_2,param_3 + *(int *)(param_2 + 0x10),
                          (long)local_88 - (long)*(int *)(param_2 + 0x10));
    lVar20 = *(long *)(param_1 + 0x250);
    uVar23 = *(undefined8 *)(lVar39 + 0xf0);
    if (lVar20 == 0) {
      *(undefined8 *)(lVar39 + 0xe8) = uVar23;
joined_r0x00d309c0:
      uVar16 = 1;
    }
    else {
      *(undefined8 *)(lVar20 + 8) = uVar23;
      uVar36 = *(undefined8 *)(lVar39 + 0xe8);
      *(int *)(lVar20 + 0x10) = (int)uVar36 - (int)uVar23;
      *(undefined8 *)(lVar39 + 0xf0) = uVar36;
      if (*(long *)(param_1 + 0x110) == 0) goto joined_r0x00d309c0;
      *ppcVar25 = param_3;
      puVar32 = *(undefined8 **)(param_1 + 0x250);
      (**(code **)(param_1 + 0x110))
                (*(undefined8 *)(param_1 + 8),*puVar32,*(undefined *)((long)puVar32 + 0x39),
                 puVar32[1],*(undefined4 *)(puVar32 + 2),*(undefined8 *)(param_1 + 0x2a8),0,0,0);
      uVar16 = 0;
    }
    if (iVar14 == 0) goto LAB_00d30f28;
    goto switchD_00d2f58c_caseD_ffffffff;
  case 0xe:
switchD_00d2f5e4_caseD_e:
    iVar15 = (*param_2[0xd])(param_2,param_3,local_88,local_a0);
    if (iVar15 == 0) goto LAB_00d314f4;
    uVar16 = 1;
    uVar13 = uVar16;
    if (*(char *)(lVar39 + 0x100) == '\0') goto LAB_00d30f28;
    goto LAB_00d30028;
  case 0xf:
    if (((*(char *)(lVar39 + 0x100) == '\0') || (*(long *)(param_1 + 0x250) == 0)) ||
       (*(long *)(param_1 + 0x110) == 0)) goto LAB_00d312c8;
    *ppcVar25 = param_3;
    puVar32 = *(undefined8 **)(param_1 + 0x250);
    (**(code **)(param_1 + 0x110))
              (*(undefined8 *)(param_1 + 8),*puVar32,*(undefined *)((long)puVar32 + 0x39),0,0,
               puVar32[4],puVar32[3],puVar32[5],0);
    break;
  case 0x10:
    if ((*(char *)(lVar39 + 0x100) == '\0') || (*(long *)(param_1 + 0x250) == 0)) goto LAB_00d312c8;
    local_78 = param_3;
    if (*ppcVar2 != (char *)0x0) goto LAB_00d30f54;
    do {
      cVar11 = FUN_00d328e8(lVar24);
      if (cVar11 == '\0') goto LAB_00d314a0;
LAB_00d30f54:
      uVar16 = (*param_2[0xe])(param_2,&local_78,pcVar29,ppcVar2,*(undefined8 *)(lVar39 + 0xb0));
    } while (1 < uVar16);
    if (*ppcVar4 == (char *)0x0) {
LAB_00d314a0:
      *(undefined8 *)(*(long *)(param_1 + 0x250) + 0x30) = 0;
      iVar14 = 1;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    pcVar29 = *(char **)(lVar39 + 0xb8);
    if (pcVar29 == *(char **)(lVar39 + 0xb0)) {
      cVar11 = FUN_00d328e8(lVar24);
      if (cVar11 == '\0') goto LAB_00d314a0;
      pcVar29 = *ppcVar2;
    }
    *ppcVar2 = pcVar29 + 1;
    *pcVar29 = '\0';
    pcVar29 = *ppcVar4;
    *(char **)(*(long *)(param_1 + 0x250) + 0x30) = pcVar29;
    if (pcVar29 == (char *)0x0) goto LAB_00d31730;
    *ppcVar4 = *ppcVar2;
    if (*(long *)(param_1 + 0xb8) == 0) {
      if (*(long *)(param_1 + 0x110) == 0) goto LAB_00d312c8;
      *ppcVar25 = param_3;
      puVar32 = *(undefined8 **)(param_1 + 0x250);
      (**(code **)(param_1 + 0x110))
                (*(undefined8 *)(param_1 + 8),*puVar32,0,0,0,puVar32[4],puVar32[3],puVar32[5],
                 puVar32[6]);
    }
    else {
      *ppcVar25 = param_3;
      puVar32 = *(undefined8 **)(param_1 + 0x250);
      (**(code **)(param_1 + 0xb8))
                (*(undefined8 *)(param_1 + 8),*puVar32,puVar32[4],puVar32[3],puVar32[5],puVar32[6]);
    }
    break;
  case 0x11:
    lVar20 = *(long *)(param_1 + 0xc0);
    goto joined_r0x00d2fb0c;
  case 0x12:
    *plVar40 = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_00d312c8;
    local_78 = param_3;
    if (*ppcVar3 != (char *)0x0) goto LAB_00d310e0;
    do {
      cVar11 = FUN_00d328e8(lVar6);
      if (cVar11 == '\0') goto LAB_00d31484;
LAB_00d310e0:
      uVar16 = (*param_2[0xe])(param_2,&local_78,pcVar29,ppcVar3,*ppcVar5);
    } while (1 < uVar16);
    if (*(long *)(param_1 + 0x330) == 0) {
LAB_00d31484:
      *plVar40 = 0;
      iVar14 = 1;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    pcVar29 = *ppcVar3;
    if (pcVar29 == *ppcVar5) {
      cVar11 = FUN_00d328e8(lVar6);
      if (cVar11 == '\0') goto LAB_00d31484;
      pcVar29 = *ppcVar3;
    }
    *(char **)(param_1 + 0x328) = pcVar29 + 1;
    *pcVar29 = '\0';
    *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x330);
    if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d31730;
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
    break;
  case 0x13:
    if ((*plVar40 == 0) || (*(long *)(param_1 + 0xc0) == 0)) {
      bVar10 = true;
      pplVar28 = *(long ***)(param_1 + 0x318);
      pplVar34 = *(long ***)(param_1 + 0x310);
    }
    else {
      iVar15 = *(int *)(param_2 + 0x10);
      local_78 = param_3 + iVar15;
      if ((*ppcVar3 == (char *)0x0) && (cVar11 = FUN_00d328e8(lVar6), cVar11 == '\0'))
      goto LAB_00d31730;
      while (uVar16 = (*param_2[0xe])(param_2,&local_78,(long)pcVar29 - (long)iVar15,ppcVar3,
                                      *ppcVar5), 1 < uVar16) {
        cVar11 = FUN_00d328e8(lVar6);
        if (cVar11 == '\0') goto LAB_00d31730;
      }
      if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d31730;
      pcVar29 = *ppcVar3;
      if (pcVar29 == *ppcVar5) {
        cVar11 = FUN_00d328e8(lVar6);
        if (cVar11 == '\0') goto LAB_00d31730;
        pcVar29 = *ppcVar3;
      }
      *(char **)(param_1 + 0x328) = pcVar29 + 1;
      *pcVar29 = '\0';
      lVar20 = *(long *)(param_1 + 0x330);
      if (lVar20 == 0) goto LAB_00d31730;
      *ppcVar25 = param_3;
      (**(code **)(param_1 + 0xc0))
                (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x278),
                 *(undefined8 *)(param_1 + 0x2a8),lVar20,*(undefined8 *)(param_1 + 0x280));
      bVar10 = false;
      pplVar28 = *(long ***)(param_1 + 0x318);
      pplVar34 = *(long ***)(param_1 + 0x310);
    }
    if (pplVar28 == (long **)0x0) goto LAB_00d30ad0;
    pplVar35 = pplVar34;
    if (pplVar34 != (long **)0x0) {
      do {
        pplVar34 = pplVar35;
        pplVar35 = (long **)*pplVar34;
        *pplVar34 = (long *)pplVar28;
        pplVar28 = pplVar34;
      } while (pplVar35 != (long **)0x0);
      goto LAB_00d30ad0;
    }
    goto LAB_00d30ad4;
  case 0x14:
    if ((*(long *)(param_1 + 0x280) == 0) || (*(long *)(param_1 + 0xc0) == 0)) {
      bVar10 = true;
      pplVar28 = *(long ***)(param_1 + 0x318);
      pplVar34 = *(long ***)(param_1 + 0x310);
    }
    else {
      *ppcVar25 = param_3;
      (**(code **)(param_1 + 0xc0))
                (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x278),
                 *(undefined8 *)(param_1 + 0x2a8),0,*(undefined8 *)(param_1 + 0x280));
      bVar10 = false;
      pplVar28 = *(long ***)(param_1 + 0x318);
      pplVar34 = *(long ***)(param_1 + 0x310);
    }
    if (pplVar28 != (long **)0x0) {
      pplVar35 = pplVar34;
      if (pplVar34 == (long **)0x0) goto LAB_00d30ad4;
      do {
        pplVar34 = pplVar35;
        pplVar35 = (long **)*pplVar34;
        *pplVar34 = (long *)pplVar28;
        pplVar28 = pplVar34;
      } while (pplVar35 != (long **)0x0);
    }
LAB_00d30ad0:
    *(long ***)(param_1 + 0x318) = pplVar34;
LAB_00d30ad4:
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *ppcVar5 = (char *)0x0;
    if (bVar10) goto LAB_00d312c8;
    break;
  case 0x15:
    iVar15 = (*param_2[0xd])(param_2,param_3,local_88,local_a0);
    pcVar29 = local_88;
    if (iVar15 == 0) goto LAB_00d314f4;
    if (*plVar40 == 0) goto LAB_00d312c8;
    iVar15 = *(int *)(param_2 + 0x10);
    local_78 = param_3 + iVar15;
    if ((*ppcVar3 != (char *)0x0) || (cVar11 = FUN_00d328e8(lVar6), cVar11 != '\0')) {
      while (uVar16 = (*param_2[0xe])(param_2,&local_78,(long)pcVar29 - (long)iVar15,ppcVar3,
                                      *ppcVar5), 1 < uVar16) {
        cVar11 = FUN_00d328e8(lVar6);
        if (cVar11 == '\0') goto LAB_00d31730;
      }
      if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d31730;
      pcVar29 = *ppcVar3;
      if (pcVar29 == *ppcVar5) {
        cVar11 = FUN_00d328e8(lVar6);
        if (cVar11 == '\0') goto LAB_00d31730;
        pcVar29 = *ppcVar3;
      }
      *(char **)(param_1 + 0x328) = pcVar29 + 1;
      *pcVar29 = '\0';
      pcVar30 = *(char **)(param_1 + 0x330);
      pcVar29 = pcVar30;
      pcVar31 = pcVar30;
      if (pcVar30 != (char *)0x0) {
        do {
          cVar11 = *pcVar31;
          switch(cVar11) {
          case '\0':
            goto switchD_00d30780_caseD_0;
          default:
switchD_00d30780_caseD_1:
            *pcVar29 = cVar11;
            pcVar21 = pcVar29 + 1;
            break;
          case '\n':
          case '\r':
          case ' ':
            pcVar21 = pcVar30;
            if ((pcVar29 != pcVar30) && (pcVar21 = pcVar29, pcVar29[-1] != ' ')) {
              cVar11 = ' ';
              goto switchD_00d30780_caseD_1;
            }
          }
          pcVar29 = pcVar21;
          pcVar31 = pcVar31 + 1;
        } while( true );
      }
    }
    goto LAB_00d31730;
  case 0x16:
    lVar20 = FUN_00d325e8(param_1,param_2,param_3,local_88);
    *(long *)(param_1 + 0x290) = lVar20;
    if (lVar20 != 0) {
      *(undefined2 *)(param_1 + 0x298) = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
      goto switchD_00d2f5e4_caseD_21;
    }
    goto LAB_00d31730;
  case 0x17:
    *(undefined *)(param_1 + 0x298) = 1;
    *(char **)(param_1 + 0x270) = "CDATA";
    goto switchD_00d2f5e4_caseD_21;
  case 0x18:
    *(undefined *)(param_1 + 0x299) = 1;
    *(undefined **)(param_1 + 0x270) = &DAT_00546606;
    goto switchD_00d2f5e4_caseD_21;
  case 0x19:
    pcVar29 = "IDREF";
    goto LAB_00d30240;
  case 0x1a:
    pcVar29 = "IDREFS";
    goto LAB_00d30240;
  case 0x1b:
    pcVar29 = "ENTITY";
    goto LAB_00d30240;
  case 0x1c:
    pcVar29 = "ENTITIES";
    goto LAB_00d30240;
  case 0x1d:
    pcVar29 = "NMTOKEN";
    goto LAB_00d30240;
  case 0x1e:
    pcVar29 = "NMTOKENS";
LAB_00d30240:
    *(char **)(param_1 + 0x270) = pcVar29;
switchD_00d2f5e4_caseD_21:
    if (*(char *)(lVar39 + 0x100) != '\0') {
      lVar20 = *(long *)(param_1 + 0x108);
joined_r0x00d2fb0c:
      if (lVar20 != 0) break;
    }
    goto LAB_00d312c8;
  default:
    if ((*(char *)(lVar39 + 0x100) == '\0') || (*(long *)(param_1 + 0x108) == 0)) goto LAB_00d312c8;
    pcVar29 = "NOTATION(";
    if (iVar12 != 0x20) {
      pcVar29 = "(";
    }
    if (*(long *)(param_1 + 0x270) != 0) {
      pcVar29 = "|";
    }
    cVar11 = *pcVar29;
    pcVar31 = local_88;
    while (local_88 = pcVar31, cVar11 != '\0') {
      pcVar31 = *ppcVar3;
      if (pcVar31 == *ppcVar5) {
        cVar11 = FUN_00d328e8(lVar6);
        if (cVar11 == '\0') goto LAB_00d31730;
        cVar11 = *pcVar29;
        pcVar31 = *ppcVar3;
      }
      *ppcVar3 = pcVar31 + 1;
      *pcVar31 = cVar11;
      cVar11 = pcVar29[1];
      pcVar29 = pcVar29 + 1;
      pcVar31 = local_88;
    }
    if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d31730;
    local_78 = param_3;
    if (*ppcVar3 != (char *)0x0) goto LAB_00d313e4;
    do {
      cVar11 = FUN_00d328e8(lVar6);
      if (cVar11 == '\0') goto LAB_00d31730;
LAB_00d313e4:
      uVar16 = (*param_2[0xe])(param_2,&local_78,pcVar31,ppcVar3,*ppcVar5);
    } while (1 < uVar16);
    if (*(long *)(param_1 + 0x330) == 0) goto LAB_00d31730;
    *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x330);
    break;
  case 0x21:
    goto switchD_00d2f5e4_caseD_21;
  case 0x22:
    lVar20 = FUN_00d32490(param_1,param_2,param_3,local_88);
    *(long *)(param_1 + 0x288) = lVar20;
    if (lVar20 != 0) goto switchD_00d2f5e4_caseD_21;
    goto LAB_00d31730;
  case 0x23:
  case 0x24:
    if (*(char *)(lVar39 + 0x100) == '\0') goto LAB_00d312c8;
    lVar20 = *(long *)(param_1 + 0x288);
    lVar27 = *(long *)(param_1 + 0x290);
    cVar11 = *(char *)(param_1 + 0x298);
    uVar16 = *(uint *)(lVar20 + 0x18);
    uVar26 = (ulong)uVar16;
    if (*(char *)(param_1 + 0x299) != '\0') {
      if (0 < (int)uVar16) {
        plVar19 = *(long **)(lVar20 + 0x20);
        do {
          if (*plVar19 == lVar27) goto LAB_00d30b38;
          uVar26 = uVar26 - 1;
          plVar19 = plVar19 + 3;
        } while (uVar26 != 0);
      }
      if ((*(long *)(lVar20 + 0x10) == 0) && (*(char *)(lVar27 + 0x11) == '\0')) {
        *(long *)(lVar20 + 0x10) = lVar27;
      }
    }
    if (uVar16 == *(uint *)(lVar20 + 0x1c)) {
      if (uVar16 == 0) {
        *(undefined4 *)(lVar20 + 0x1c) = 8;
        lVar17 = (**(code **)(param_1 + 0x18))(0xc0);
        *(long *)(lVar20 + 0x20) = lVar17;
        if (lVar17 == 0) {
LAB_00d315f4:
          *(undefined4 *)(lVar20 + 0x1c) = 0;
          iVar14 = 1;
          goto switchD_00d2f58c_caseD_ffffffff;
        }
      }
      else {
        lVar17 = (**(code **)(param_1 + 0x20))
                           (*(undefined8 *)(lVar20 + 0x20),(long)(int)uVar16 * 0x30);
        if (lVar17 == 0) goto LAB_00d31730;
        *(long *)(lVar20 + 0x20) = lVar17;
        *(uint *)(lVar20 + 0x1c) = uVar16 << 1;
      }
    }
    else {
      lVar17 = *(long *)(lVar20 + 0x20);
    }
    iVar15 = *(int *)(lVar20 + 0x18);
    plVar19 = (long *)(lVar17 + (long)iVar15 * 0x18);
    *plVar19 = lVar27;
    plVar19[2] = 0;
    *(char *)(plVar19 + 1) = cVar11;
    if (cVar11 == '\0') {
      *(undefined *)(lVar27 + 0x10) = 1;
    }
    *(int *)(lVar20 + 0x18) = iVar15 + 1;
LAB_00d30b38:
    if ((*(long *)(param_1 + 0x108) != 0) &&
       (pcVar29 = *(char **)(param_1 + 0x270), pcVar29 != (char *)0x0)) {
      if ((*pcVar29 == '(') || ((*pcVar29 == 'N' && (pcVar29[1] == 'O')))) {
        pcVar29 = *ppcVar3;
        if (pcVar29 == *ppcVar5) {
          cVar11 = FUN_00d328e8(lVar6);
          if (cVar11 == '\0') goto LAB_00d31730;
          pcVar29 = *ppcVar3;
        }
        *ppcVar3 = pcVar29 + 1;
        *pcVar29 = ')';
        pcVar29 = *ppcVar3;
        if (pcVar29 == *ppcVar5) {
          cVar11 = FUN_00d328e8(lVar6);
          if (cVar11 == '\0') goto LAB_00d31730;
          pcVar29 = *ppcVar3;
        }
        *(char **)(param_1 + 0x328) = pcVar29 + 1;
        *pcVar29 = '\0';
        *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x330);
        *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
      }
      *ppcVar25 = param_3;
      (**(code **)(param_1 + 0x108))
                (*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x288),
                 **(undefined8 **)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x270),0,
                 iVar12 == 0x24);
      pplVar34 = *(long ***)(param_1 + 0x310);
      if (*(long ***)(param_1 + 0x318) == (long **)0x0) {
LAB_00d30e10:
        *(long ***)(param_1 + 0x318) = pplVar34;
      }
      else {
        pplVar28 = *(long ***)(param_1 + 0x318);
        pplVar35 = pplVar34;
        if (pplVar34 != (long **)0x0) {
          do {
            pplVar34 = pplVar35;
            pplVar35 = (long **)*pplVar34;
            *pplVar34 = (long *)pplVar28;
            pplVar28 = pplVar34;
          } while (pplVar35 != (long **)0x0);
          goto LAB_00d30e10;
        }
      }
LAB_00d30e14:
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined8 *)(param_1 + 0x328) = 0;
      *(undefined8 *)(param_1 + 0x330) = 0;
      *ppcVar5 = (char *)0x0;
      break;
    }
    goto LAB_00d312c8;
  case 0x25:
  case 0x26:
    if (*(char *)(lVar39 + 0x100) == '\0') goto LAB_00d312c8;
    cVar11 = *(char *)(param_1 + 0x298);
    iVar14 = FUN_00d36f8c(param_1,param_2,cVar11,param_3 + *(int *)(param_2 + 0x10),
                          (long)local_88 - (long)*(int *)(param_2 + 0x10),lVar24);
    if (iVar14 != 0) goto switchD_00d2f58c_caseD_ffffffff;
    pcVar29 = *ppcVar2;
    if (((cVar11 == '\0') && (pcVar29 != *ppcVar4)) && (pcVar31 = pcVar29 + -1, *pcVar31 == ' ')) {
      *ppcVar2 = pcVar31;
      pcVar29 = pcVar31;
    }
    if (pcVar29 == *(char **)(lVar39 + 0xb0)) {
      cVar11 = FUN_00d328e8(lVar24);
      if (cVar11 == '\0') goto LAB_00d31730;
      pcVar29 = *ppcVar2;
    }
    *ppcVar2 = pcVar29 + 1;
    *pcVar29 = '\0';
    pcVar29 = *ppcVar4;
    *ppcVar4 = *ppcVar2;
    lVar20 = *(long *)(param_1 + 0x288);
    lVar27 = *(long *)(param_1 + 0x290);
    cVar11 = *(char *)(param_1 + 0x298);
    uVar16 = *(uint *)(lVar20 + 0x18);
    uVar26 = (ulong)uVar16;
    if ((pcVar29 != (char *)0x0) && (0 < (int)uVar16)) {
      plVar19 = *(long **)(lVar20 + 0x20);
      do {
        if (*plVar19 == lVar27) goto LAB_00d30cfc;
        uVar26 = uVar26 - 1;
        plVar19 = plVar19 + 3;
      } while (uVar26 != 0);
    }
    if (uVar16 == *(uint *)(lVar20 + 0x1c)) {
      if (uVar16 == 0) {
        *(undefined4 *)(lVar20 + 0x1c) = 8;
        lVar17 = (**(code **)(param_1 + 0x18))(0xc0);
        *(long *)(lVar20 + 0x20) = lVar17;
        if (lVar17 == 0) goto LAB_00d315f4;
      }
      else {
        lVar17 = (**(code **)(param_1 + 0x20))
                           (*(undefined8 *)(lVar20 + 0x20),(long)(int)(uVar16 << 1) * 0x18);
        if (lVar17 == 0) goto LAB_00d31730;
        *(uint *)(lVar20 + 0x1c) = uVar16 << 1;
        *(long *)(lVar20 + 0x20) = lVar17;
      }
    }
    else {
      lVar17 = *(long *)(lVar20 + 0x20);
    }
    iVar15 = *(int *)(lVar20 + 0x18);
    plVar19 = (long *)(lVar17 + (long)iVar15 * 0x18);
    *plVar19 = lVar27;
    plVar19[2] = (long)pcVar29;
    *(char *)(plVar19 + 1) = cVar11;
    if (cVar11 == '\0') {
      *(undefined *)(lVar27 + 0x10) = 1;
    }
    *(int *)(lVar20 + 0x18) = iVar15 + 1;
LAB_00d30cfc:
    if ((*(long *)(param_1 + 0x108) != 0) &&
       (pcVar31 = *(char **)(param_1 + 0x270), pcVar31 != (char *)0x0)) {
      if ((*pcVar31 == '(') || ((*pcVar31 == 'N' && (pcVar31[1] == 'O')))) {
        pcVar31 = *ppcVar3;
        if (pcVar31 == *ppcVar5) {
          cVar11 = FUN_00d328e8(lVar6);
          if (cVar11 == '\0') goto LAB_00d31730;
          pcVar31 = *ppcVar3;
        }
        *ppcVar3 = pcVar31 + 1;
        *pcVar31 = ')';
        pcVar31 = *ppcVar3;
        if (pcVar31 == *ppcVar5) {
          cVar11 = FUN_00d328e8(lVar6);
          if (cVar11 == '\0') goto LAB_00d31730;
          pcVar31 = *ppcVar3;
        }
        *(char **)(param_1 + 0x328) = pcVar31 + 1;
        *pcVar31 = '\0';
        *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x330);
        *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
      }
      *ppcVar25 = param_3;
      (**(code **)(param_1 + 0x108))
                (*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x288),
                 **(undefined8 **)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x270),pcVar29,
                 iVar12 == 0x26);
      pplVar34 = *(long ***)(param_1 + 0x310);
      if (*(long ***)(param_1 + 0x318) != (long **)0x0) {
        pplVar28 = *(long ***)(param_1 + 0x318);
        pplVar35 = pplVar34;
        if (pplVar34 == (long **)0x0) goto LAB_00d30e14;
        do {
          pplVar34 = pplVar35;
          pplVar35 = (long **)*pplVar34;
          *pplVar34 = (long *)pplVar28;
          pplVar28 = pplVar34;
        } while (pplVar35 != (long **)0x0);
      }
      goto LAB_00d30e10;
    }
    goto LAB_00d312c8;
  case 0x27:
switchD_00d2f5e4_caseD_27:
    lVar20 = *(long *)(param_1 + 0x100);
    goto joined_r0x00d2fb0c;
  case 0x28:
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_00d312c8;
    lVar20 = FUN_00d32490(param_1,param_2,param_3,local_88);
    *(long *)(param_1 + 0x288) = lVar20;
    iVar14 = 1;
    if (lVar20 == 0) goto switchD_00d2f58c_caseD_ffffffff;
    *(undefined8 *)(lVar39 + 0x158) = 0;
    *(undefined *)(lVar39 + 0x140) = 1;
    break;
  case 0x29:
  case 0x2a:
    if (*(char *)(lVar39 + 0x140) == '\0') goto LAB_00d312c8;
    if (*(long *)(param_1 + 0x100) != 0) {
      puVar18 = (undefined4 *)(**(code **)(param_1 + 0x18))(0x20);
      iVar14 = 1;
      if (puVar18 != (undefined4 *)0x0) {
        *(undefined8 *)(puVar18 + 6) = 0;
        uVar37 = 1;
        if (iVar12 == 0x29) {
          uVar37 = 2;
        }
        *(undefined8 *)(puVar18 + 3) = 0;
        *(undefined8 *)(puVar18 + 1) = 0;
        *puVar18 = uVar37;
        *ppcVar25 = param_3;
        (**(code **)(param_1 + 0x100))
                  (*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x288),puVar18);
        *(undefined *)(lVar39 + 0x140) = 0;
        break;
      }
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    *(undefined *)(lVar39 + 0x140) = 0;
LAB_00d312c8:
    pcVar29 = local_88;
    pcVar33 = *(code **)(param_1 + 0xa0);
    if (pcVar33 != (code *)0x0) {
      if (*(char *)((long)param_2 + 0x84) == '\0') {
        ppcVar41 = (char **)(param_1 + 0x220);
        ppcVar22 = (char **)(param_1 + 0x228);
        local_78 = param_3;
        if (*(code ***)(param_1 + 0x120) != param_2) {
          ppcVar41 = *(char ***)(param_1 + 0x238);
          ppcVar22 = ppcVar41 + 1;
        }
        do {
          local_80 = *(long *)(param_1 + 0x58);
          uVar16 = (*param_2[0xe])(param_2,&local_78,pcVar29,&local_80,
                                   *(undefined8 *)(param_1 + 0x60));
          *ppcVar22 = local_78;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_80 - (int)*(undefined8 *)(param_1 + 0x58));
          *ppcVar41 = local_78;
        } while (1 < uVar16);
      }
      else {
        uVar23 = *(undefined8 *)(param_1 + 8);
        iVar15 = (int)local_88 - (int)param_3;
        pcVar29 = param_3;
        local_78 = param_3;
LAB_00d312ec:
        (*pcVar33)(uVar23,pcVar29,iVar15);
      }
    }
    break;
  case 0x2b:
    if (*(char *)(lVar39 + 0x140) != '\0') {
      *(undefined4 *)
       (*(long *)(lVar39 + 0x148) +
       (long)*(int *)(*(long *)(lVar39 + 0x160) + (long)*(int *)(lVar39 + 0x15c) * 4 + -4) * 0x20) =
           3;
      lVar20 = *(long *)(param_1 + 0x100);
      goto joined_r0x00d2fb0c;
    }
    goto LAB_00d312c8;
  case 0x2c:
    uVar16 = *(uint *)(param_1 + 0x378);
    if (uVar16 <= *(uint *)(param_1 + 0x1f8)) {
      if (uVar16 == 0) {
        *(undefined4 *)(param_1 + 0x378) = 0x20;
        lVar20 = (**(code **)(param_1 + 0x18))(0x20);
        *(long *)(param_1 + 0x370) = lVar20;
        if (lVar20 == 0) {
          *(undefined4 *)(param_1 + 0x378) = 0;
          iVar14 = 1;
          goto switchD_00d2f58c_caseD_ffffffff;
        }
      }
      else {
        *(uint *)(param_1 + 0x378) = uVar16 << 1;
        lVar20 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x370));
        if (lVar20 == 0) {
          *(uint *)(param_1 + 0x378) = *(uint *)(param_1 + 0x378) >> 1;
          iVar14 = 1;
          goto switchD_00d2f58c_caseD_ffffffff;
        }
        *(long *)(param_1 + 0x370) = lVar20;
        if (*(long *)(lVar39 + 0x160) != 0) {
          lVar20 = (**(code **)(param_1 + 0x20))
                             (*(long *)(lVar39 + 0x160),(ulong)*(uint *)(param_1 + 0x378) << 2);
          if (lVar20 == 0) goto LAB_00d31730;
          *(long *)(lVar39 + 0x160) = lVar20;
        }
      }
    }
    *(undefined *)(*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x1f8)) = 0;
    if (*(char *)(lVar39 + 0x140) == '\0') goto LAB_00d312c8;
    uVar16 = FUN_00d331fc(param_1);
    if (-1 < (int)uVar16) {
      *(uint *)(*(long *)(lVar39 + 0x160) + (long)*(int *)(lVar39 + 0x15c) * 4) = uVar16;
      *(int *)(lVar39 + 0x15c) = *(int *)(lVar39 + 0x15c) + 1;
      *(undefined4 *)(*(long *)(lVar39 + 0x148) + (ulong)uVar16 * 0x20) = 6;
      lVar20 = *(long *)(param_1 + 0x100);
      goto joined_r0x00d2fb0c;
    }
    goto LAB_00d31730;
  case 0x2d:
    goto switchD_00d2f5e4_caseD_2d;
  case 0x2e:
    uVar37 = 2;
    cVar11 = *(char *)(lVar39 + 0x140);
    goto joined_r0x00d2fd0c;
  case 0x2f:
    uVar37 = 1;
switchD_00d2f5e4_caseD_2d:
    cVar11 = *(char *)(lVar39 + 0x140);
    goto joined_r0x00d2fd0c;
  case 0x30:
    uVar37 = 3;
    cVar11 = *(char *)(lVar39 + 0x140);
joined_r0x00d2fd0c:
    if (cVar11 == '\0') goto LAB_00d312c8;
    lVar27 = (long)*(int *)(lVar39 + 0x15c) + -1;
    lVar20 = *(long *)(param_1 + 0x100);
    iVar15 = (int)lVar27;
    *(int *)(lVar39 + 0x15c) = iVar15;
    uVar16 = (uint)(lVar20 == 0);
    *(undefined4 *)
     (*(long *)(lVar39 + 0x148) + (long)*(int *)(*(long *)(lVar39 + 0x160) + lVar27 * 4) * 0x20 + 4)
         = uVar37;
    if (iVar15 != 0) goto LAB_00d30f28;
    if (lVar20 != 0) {
      lVar27 = *(long *)(param_1 + 0x2a0);
      lVar20 = (**(code **)(param_1 + 0x18))
                         ((long)(*(int *)(lVar27 + 0x150) + *(int *)(lVar27 + 0x158) * 0x20));
      if (lVar20 == 0) goto LAB_00d31730;
      local_78 = (char *)(lVar20 + 0x20);
      local_80 = lVar20 + (ulong)*(uint *)(lVar27 + 0x158) * 0x20;
      FUN_00d37678(param_1,0,lVar20,&local_78,&local_80);
      *ppcVar25 = param_3;
      (**(code **)(param_1 + 0x100))
                (*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x288),lVar20);
    }
    *(undefined *)(lVar39 + 0x140) = 0;
    *(undefined4 *)(lVar39 + 0x150) = 0;
    goto LAB_00d30f28;
  case 0x31:
    uVar16 = *(uint *)(param_1 + 0x1f8);
    lVar20 = *(long *)(param_1 + 0x370);
    cVar11 = *(char *)(lVar20 + (ulong)uVar16);
    if (cVar11 == ',') {
LAB_00d31504:
      iVar14 = 2;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    bVar10 = true;
    if ((*(char *)(lVar39 + 0x140) != '\0') && (cVar11 == '\0')) {
      piVar7 = (int *)(*(long *)(lVar39 + 0x148) +
                      (long)*(int *)(*(long *)(lVar39 + 0x160) + (long)*(int *)(lVar39 + 0x15c) * 4
                                    + -4) * 0x20);
      if (*piVar7 == 3) {
        bVar10 = true;
      }
      else {
        *piVar7 = 5;
        bVar10 = *(long *)(param_1 + 0x100) == 0;
      }
    }
    *(undefined *)(lVar20 + (ulong)uVar16) = 0x7c;
    if (bVar10) goto LAB_00d312c8;
    break;
  case 0x32:
    if (*(char *)(*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x1f8)) == '|')
    goto LAB_00d31504;
    *(undefined *)(*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x1f8)) = 0x2c;
    if (*(char *)(lVar39 + 0x140) != '\0') goto switchD_00d2f5e4_caseD_27;
    goto LAB_00d312c8;
  case 0x33:
    if (*(char *)(lVar39 + 0x140) == '\0') goto LAB_00d312c8;
    uVar16 = 0;
    uVar13 = FUN_00d331fc(param_1);
    goto joined_r0x00d2f9e0;
  case 0x34:
    uVar16 = 2;
    cVar11 = *(char *)(lVar39 + 0x140);
    goto joined_r0x00d2f930;
  case 0x35:
    goto switchD_00d2f5e4_caseD_35;
  case 0x36:
    uVar16 = 3;
switchD_00d2f5e4_caseD_35:
    cVar11 = *(char *)(lVar39 + 0x140);
joined_r0x00d2f930:
    if (cVar11 == '\0') goto LAB_00d312c8;
    pcVar29 = local_88 + -(long)*(int *)(param_2 + 0x10);
    uVar13 = FUN_00d331fc(param_1);
joined_r0x00d2f9e0:
    if (-1 < (int)uVar13) {
      puVar18 = (undefined4 *)(*(long *)(lVar39 + 0x148) + (ulong)uVar13 * 0x20);
      *puVar18 = 4;
      puVar18[1] = uVar16;
      plVar19 = (long *)FUN_00d32490(param_1,param_2,param_3,pcVar29);
      if (plVar19 != (long *)0x0) {
        lVar27 = *plVar19;
        lVar20 = 0;
        *(long *)(*(long *)(lVar39 + 0x148) + (ulong)uVar13 * 0x20 + 8) = lVar27;
        do {
          pcVar29 = (char *)(lVar27 + lVar20);
          lVar20 = lVar20 + 1;
        } while (*pcVar29 != '\0');
        *(int *)(lVar39 + 0x150) = *(int *)(lVar39 + 0x150) + (int)lVar20;
        lVar20 = *(long *)(param_1 + 0x100);
        goto joined_r0x00d2fb0c;
      }
    }
    goto LAB_00d31730;
  case 0x37:
    iVar15 = FUN_00d334f0(param_1,param_2,param_3,local_88);
    goto joined_r0x00d302dc;
  case 0x38:
    iVar15 = FUN_00d3387c(param_1,param_2,param_3,local_88);
joined_r0x00d302dc:
    if (iVar15 == 0) goto LAB_00d31730;
    break;
  case 0x39:
    iVar14 = FUN_00d31770(param_1,1,param_3,local_88);
joined_r0x00d2fa74:
    if (iVar14 != 0) goto switchD_00d2f58c_caseD_ffffffff;
    param_2 = *(code ***)(param_1 + 0x120);
    break;
  case 0x3a:
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      if (*(char *)((long)param_2 + 0x84) == '\0') {
        ppcVar41 = (char **)(param_1 + 0x220);
        ppcVar22 = (char **)(param_1 + 0x228);
        local_78 = param_3;
        if (*(code ***)(param_1 + 0x120) != param_2) {
          ppcVar41 = *(char ***)(param_1 + 0x238);
          ppcVar22 = ppcVar41 + 1;
        }
        do {
          local_80 = *(long *)(param_1 + 0x58);
          uVar16 = (*param_2[0xe])(param_2,&local_78,pcVar29,&local_80,
                                   *(undefined8 *)(param_1 + 0x60));
          *ppcVar22 = local_78;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_80 - (int)*(undefined8 *)(param_1 + 0x58));
          *ppcVar41 = local_78;
        } while (1 < uVar16);
      }
      else {
        local_78 = param_3;
        (**(code **)(param_1 + 0xa0))
                  (*(undefined8 *)(param_1 + 8),param_3,(int)local_88 - (int)param_3);
      }
    }
    iVar14 = FUN_00d32f1c(param_1,param_2,&local_88,param_4,param_7,param_8);
    if (iVar14 != 0) goto switchD_00d2f58c_caseD_ffffffff;
    if (local_88 == (char *)0x0) {
      *(code **)(param_1 + 0x210) = FUN_00d330fc;
      iVar14 = 0;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    break;
  case 0x3b:
  case 0x3c:
    *(undefined *)(lVar39 + 0x101) = 1;
    if (*(int *)(param_1 + 0x394) == 0) {
      cVar11 = *(char *)(lVar39 + 0x102);
      uVar16 = 1;
      *(char *)(lVar39 + 0x100) = cVar11;
joined_r0x00d302f0:
      if (((cVar11 != '\0') || (*(code **)(param_1 + 0xd8) == (code *)0x0)) ||
         (iVar15 = (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8)), iVar15 != 0))
      goto LAB_00d30f28;
      goto LAB_00d315a0;
    }
    iVar15 = *(int *)(param_2 + 0x10);
    local_78 = param_3 + iVar15;
    if ((*ppcVar2 == (char *)0x0) && (cVar11 = FUN_00d328e8(lVar24), cVar11 == '\0'))
    goto LAB_00d31730;
    while (uVar16 = (*param_2[0xe])(param_2,&local_78,(long)pcVar29 - (long)iVar15,ppcVar2,
                                    *(undefined8 *)(lVar39 + 0xb0)), 1 < uVar16) {
      cVar11 = FUN_00d328e8(lVar24);
      if (cVar11 == '\0') goto LAB_00d31730;
    }
    if (*ppcVar4 == (char *)0x0) goto LAB_00d31730;
    pcVar29 = *(char **)(lVar39 + 0xb8);
    if (pcVar29 == *(char **)(lVar39 + 0xb0)) {
      cVar11 = FUN_00d328e8(lVar24);
      if (cVar11 == '\0') goto LAB_00d31730;
      pcVar29 = *ppcVar2;
    }
    *ppcVar2 = pcVar29 + 1;
    *pcVar29 = '\0';
    pcVar29 = *ppcVar4;
    if (pcVar29 == (char *)0x0) goto LAB_00d31730;
    lVar20 = FUN_00d31dd4(param_1,lVar38,pcVar29,0);
    *ppcVar2 = *ppcVar4;
    if (*(int *)(param_1 + 0x204) == 0) {
LAB_00d303a8:
      if (lVar20 != 0) goto LAB_00d30e44;
      *(undefined *)(lVar39 + 0x100) = *(undefined *)(lVar39 + 0x102);
      if ((iVar12 != 0x3c) || (pcVar33 = *(code **)(param_1 + 0xf0), pcVar33 == (code *)0x0))
      goto LAB_00d312c8;
      uVar23 = *(undefined8 *)(param_1 + 8);
      iVar15 = 1;
      goto LAB_00d312ec;
    }
    if (*(char *)(lVar39 + 0x102) == '\0') {
      if (*(char *)(lVar39 + 0x101) != '\0') goto LAB_00d303a8;
    }
    else if (*(long *)(param_1 + 0x238) != 0) goto LAB_00d303a8;
    if (lVar20 == 0) {
      iVar14 = 0xb;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    if (*(char *)(lVar20 + 0x3a) == '\0') {
      iVar14 = 0x18;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
LAB_00d30e44:
    if (*(char *)(lVar20 + 0x38) != '\0') {
      iVar14 = 0xc;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    if (*(long *)(lVar20 + 8) == 0) {
      pcVar33 = *(code **)(param_1 + 0xe0);
      if (pcVar33 == (code *)0x0) {
        *(undefined *)(lVar39 + 0x100) = *(undefined *)(lVar39 + 0x102);
        goto LAB_00d312c8;
      }
      *(undefined *)(lVar39 + 0x103) = 0;
      *(undefined *)(lVar20 + 0x38) = 1;
      iVar15 = (*pcVar33)(*(undefined8 *)(param_1 + 0xe8),0,*(undefined8 *)(lVar20 + 0x20),
                          *(undefined8 *)(lVar20 + 0x18),*(undefined8 *)(lVar20 + 0x28));
      if (iVar15 != 0) {
        *(undefined *)(lVar20 + 0x38) = 0;
        cVar11 = *(char *)(lVar39 + 0x102);
        if (*(char *)(lVar39 + 0x103) != '\0') {
          uVar16 = 0;
          goto joined_r0x00d302f0;
        }
        *(char *)(lVar39 + 0x100) = cVar11;
        break;
      }
      *(undefined *)(lVar20 + 0x38) = 0;
      iVar14 = 0x15;
      goto switchD_00d2f58c_caseD_ffffffff;
    }
    iVar14 = FUN_00d3334c(param_1,lVar20,iVar12 == 0x3c);
    if (iVar14 != 0) goto switchD_00d2f58c_caseD_ffffffff;
    break;
  case -1:
    iVar12 = 0x11;
    if (iVar15 != 0xc) {
      iVar12 = 2;
    }
    iVar14 = 10;
    if (iVar15 != 0x1c) {
      iVar14 = iVar12;
    }
    goto switchD_00d2f58c_caseD_ffffffff;
  }
LAB_00d31360:
  param_3 = local_88;
  if (*(int *)(param_1 + 0x388) == 2) {
    iVar14 = 0x23;
    goto switchD_00d2f58c_caseD_ffffffff;
  }
  if (*(int *)(param_1 + 0x388) == 3) goto LAB_00d31420;
  param_5 = (**param_2)(param_2,local_88,param_4,&local_88);
  goto LAB_00d2f530;
switchD_00d30780_caseD_0:
  pcVar31 = pcVar30;
  if ((pcVar29 != pcVar30) && (pcVar31 = pcVar29 + -1, pcVar29[-1] != ' ')) {
    pcVar31 = pcVar29;
  }
  *pcVar31 = '\0';
  *(char **)(param_1 + 0x280) = pcVar30;
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
  goto LAB_00d31360;
switchD_00d30820_caseD_0:
  pcVar31 = pcVar30;
  if ((pcVar29 != pcVar30) && (pcVar31 = pcVar29 + -1, pcVar29[-1] != ' ')) {
    pcVar31 = pcVar29;
  }
  *pcVar31 = '\0';
  uVar16 = 0;
  *(char **)(param_1 + 0x268) = pcVar30;
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
  uVar13 = 0;
  if (*(char *)(lVar39 + 0x100) != '\0') {
LAB_00d30028:
    uVar16 = uVar13;
    pcVar29 = local_88;
    if (*(long *)(param_1 + 0x250) != 0) {
      iVar15 = *(int *)(param_2 + 0x10);
      local_78 = param_3 + iVar15;
      if ((*ppcVar2 != (char *)0x0) || (cVar11 = FUN_00d328e8(lVar24), cVar11 != '\0')) {
        while (uVar13 = (*param_2[0xe])(param_2,&local_78,(long)pcVar29 - (long)iVar15,ppcVar2,
                                        *(undefined8 *)(lVar39 + 0xb0)), 1 < uVar13) {
          cVar11 = FUN_00d328e8(lVar24);
          if (cVar11 == '\0') goto LAB_00d31730;
        }
        if (*ppcVar4 == (char *)0x0) goto LAB_00d31730;
        pcVar29 = *(char **)(lVar39 + 0xb8);
        if (pcVar29 == *(char **)(lVar39 + 0xb0)) {
          cVar11 = FUN_00d328e8(lVar24);
          if (cVar11 == '\0') goto LAB_00d31730;
          pcVar29 = *ppcVar2;
        }
        *ppcVar2 = pcVar29 + 1;
        *pcVar29 = '\0';
        pcVar30 = *ppcVar4;
        pcVar29 = pcVar30;
        pcVar31 = pcVar30;
        if (pcVar30 != (char *)0x0) {
          do {
            cVar11 = *pcVar31;
            switch(cVar11) {
            case '\0':
              goto switchD_00d306e0_caseD_0;
            default:
switchD_00d306e0_caseD_1:
              *pcVar29 = cVar11;
              pcVar21 = pcVar29 + 1;
              break;
            case '\n':
            case '\r':
            case ' ':
              pcVar21 = pcVar30;
              if ((pcVar29 != pcVar30) && (pcVar21 = pcVar29, pcVar29[-1] != ' ')) {
                cVar11 = ' ';
                goto switchD_00d306e0_caseD_1;
              }
            }
            pcVar29 = pcVar21;
            pcVar31 = pcVar31 + 1;
          } while( true );
        }
      }
      goto LAB_00d31730;
    }
  }
LAB_00d30f28:
  if (uVar16 == 0) goto LAB_00d31360;
  goto LAB_00d312c8;
switchD_00d306e0_caseD_0:
  pcVar31 = pcVar30;
  if ((pcVar29 != pcVar30) && (pcVar31 = pcVar29 + -1, pcVar29[-1] != ' ')) {
    pcVar31 = pcVar29;
  }
  *pcVar31 = '\0';
  *(char **)(*(long *)(param_1 + 0x250) + 0x28) = pcVar30;
  *ppcVar4 = *ppcVar2;
  if ((*(long *)(param_1 + 0x110) != 0) && (iVar12 == 0xe)) goto LAB_00d31360;
  goto LAB_00d30f28;
LAB_00d31684:
  iVar14 = 0;
  goto switchD_00d2f58c_caseD_ffffffff;
LAB_00d31730:
  iVar14 = 1;
  goto switchD_00d2f58c_caseD_ffffffff;
LAB_00d31420:
  *param_7 = local_88;
  iVar14 = 0;
  goto switchD_00d2f58c_caseD_ffffffff;
  while( true ) {
    iVar15 = *(int *)(plVar40 + 2);
    lVar38 = (long)(iVar15 + (int)lVar39);
    if (plVar40[9] - lVar24 < lVar38) {
      lVar24 = (**(code **)(param_1 + 0x20))(lVar24,lVar38);
      if (lVar24 == 0) goto LAB_00d31730;
      if (plVar40[3] == plVar40[8]) {
        plVar40[3] = lVar24;
      }
      if (plVar40[4] != 0) {
        plVar40[4] = lVar24 + (plVar40[4] - plVar40[8]);
      }
      __src = (void *)plVar40[1];
      __dest = (void *)(lVar24 + lVar39);
      iVar15 = *(int *)(plVar40 + 2);
      plVar40[8] = lVar24;
      plVar40[9] = lVar24 + lVar38;
    }
    memcpy(__dest,__src,(long)iVar15);
    plVar40[1] = (long)__dest;
    plVar40 = (long *)*plVar40;
    iVar14 = 0;
    if (plVar40 == (long *)0x0) break;
LAB_00d316bc:
    lVar24 = plVar40[8];
    __src = (void *)plVar40[1];
    lVar39 = (long)*(int *)(plVar40 + 6) + 1;
    __dest = (void *)(lVar24 + lVar39);
    if (__src == __dest) goto LAB_00d31684;
  }
switchD_00d2f58c_caseD_ffffffff:
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar14;
}


