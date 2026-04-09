// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d33dfc
// Entry Point: 00d33dfc
// Size: 5096 bytes
// Signature: undefined FUN_00d33dfc(void)


int FUN_00d33dfc(long param_1,int param_2,long param_3,void *param_4,void *param_5,void **param_6,
                uint param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  void **ppvVar15;
  char *pcVar16;
  code *pcVar17;
  long **pplVar18;
  undefined *puVar19;
  long **pplVar20;
  long **pplVar21;
  long *plVar22;
  long *plVar23;
  char *pcVar24;
  int iVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  long *plVar28;
  void *pvVar29;
  long *plVar30;
  void **ppvVar31;
  void **ppvVar32;
  undefined8 *puVar33;
  void **ppvVar34;
  long lVar35;
  void **ppvVar36;
  int iVar37;
  long lVar38;
  void **ppvVar39;
  long *local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar38 = *(long *)(param_1 + 0x2a0);
  if (*(long *)(param_1 + 0x120) == param_3) {
    ppvVar32 = (void **)(param_1 + 0x220);
    ppvVar15 = (void **)(param_1 + 0x228);
  }
  else {
    ppvVar32 = *(void ***)(param_1 + 0x238);
    ppvVar15 = ppvVar32 + 1;
  }
  ppvVar31 = (void **)(param_1 + 0x220);
  ppvVar36 = (void **)(param_1 + 0x228);
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar2 = (undefined8 *)(param_1 + 800);
  *ppvVar32 = param_4;
  puVar3 = (undefined8 *)(param_1 + 0x310);
  plVar30 = (long *)(param_1 + 0x328);
  lVar4 = lVar38 + 0xa0;
  plVar23 = (long *)(lVar38 + 0xb8);
  local_b0 = param_4;
LAB_00d33ea0:
  local_b8 = local_b0;
  iVar8 = (**(code **)(param_3 + 8))(param_3,local_b0,param_5,&local_b8);
  pvVar29 = local_b8;
  *ppvVar15 = local_b8;
  iVar25 = (int)local_b8;
  iVar37 = (int)local_b0;
  if (0x12 < iVar8 + 5U) {
    pcVar17 = *(code **)(param_1 + 0xa0);
    if (pcVar17 != (code *)0x0) {
      local_98 = local_b0;
      if (*(char *)(param_3 + 0x84) == '\0') {
        ppvVar34 = ppvVar31;
        ppvVar39 = ppvVar36;
        if (*(long *)(param_1 + 0x120) != param_3) {
          ppvVar34 = *(void ***)(param_1 + 0x238);
          ppvVar39 = ppvVar34 + 1;
        }
        do {
          local_a0 = *(void **)(param_1 + 0x58);
          uVar10 = (**(code **)(param_3 + 0x70))
                             (param_3,&local_98,pvVar29,&local_a0,*(undefined8 *)(param_1 + 0x60));
          *ppvVar39 = local_98;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
          *ppvVar34 = local_98;
        } while (1 < uVar10);
      }
      else {
LAB_00d34614:
        local_98 = local_b0;
        (*pcVar17)(*puVar1,local_b0,iVar25 - iVar37);
      }
    }
    goto LAB_00d34b90;
  }
  iVar11 = 0x11;
  switch(iVar8) {
  case 0:
    iVar11 = 4;
    goto LAB_00d34f08;
  default:
    puVar33 = *(undefined8 **)(param_1 + 0x2b8);
    if (puVar33 == (undefined8 *)0x0) {
      puVar33 = (undefined8 *)(**(code **)(param_1 + 0x18))(0x58);
      if (puVar33 == (undefined8 *)0x0) goto LAB_00d34d9c;
      lVar35 = (**(code **)(param_1 + 0x18))(0x20);
      puVar33[8] = lVar35;
      if (lVar35 == 0) {
        (**(code **)(param_1 + 0x28))(puVar33);
        iVar11 = 1;
        goto switchD_00d33ef0_caseD_c;
      }
      puVar33[9] = lVar35 + 0x20;
    }
    else {
      *(undefined8 *)(param_1 + 0x2b8) = *puVar33;
    }
    puVar33[10] = 0;
    *puVar33 = *(undefined8 *)(param_1 + 0x2b0);
    *(undefined8 **)(param_1 + 0x2b0) = puVar33;
    puVar33[4] = 0;
    puVar33[5] = 0;
    puVar33[1] = (long)local_b0 + (long)*(int *)(param_3 + 0x80);
    iVar8 = (**(code **)(param_3 + 0x38))(param_3);
    *(int *)(puVar33 + 2) = iVar8;
    *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
    local_a8 = (undefined *)puVar33[8];
    local_98 = (void *)puVar33[1];
    pvVar29 = (void *)((long)local_98 + (long)iVar8);
    iVar8 = (**(code **)(param_3 + 0x70))(param_3,&local_98,pvVar29,&local_a8,puVar33[9] + -1);
    while( true ) {
      uVar12 = puVar33[8];
      iVar37 = (int)local_a8 - (int)uVar12;
      if ((pvVar29 <= local_98) || (iVar8 == 1)) break;
      lVar35 = (long)((*(int *)(puVar33 + 9) - (int)uVar12) * 2);
      lVar13 = (**(code **)(param_1 + 0x20))(uVar12,lVar35);
      if (lVar13 == 0) {
        iVar11 = 1;
        goto switchD_00d33ef0_caseD_c;
      }
      lVar35 = lVar13 + lVar35;
      local_a8 = (undefined *)(lVar13 + iVar37);
      puVar33[8] = lVar13;
      puVar33[9] = lVar35;
      iVar8 = (**(code **)(param_3 + 0x70))(param_3,&local_98,pvVar29,&local_a8,lVar35 + -1);
    }
    *(int *)(puVar33 + 6) = iVar37;
    puVar27 = puVar33 + 3;
    *puVar27 = uVar12;
    *local_a8 = 0;
    iVar11 = FUN_00d3554c(param_1,param_3,local_b0,puVar27,puVar33 + 10);
    pvVar29 = local_b8;
    if (iVar11 != 0) goto switchD_00d33ef0_caseD_c;
    if (*(code **)(param_1 + 0x68) == (code *)0x0) {
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        local_98 = local_b0;
        if (*(char *)(param_3 + 0x84) == '\0') {
          ppvVar34 = ppvVar31;
          ppvVar39 = ppvVar36;
          if (*(long *)(param_1 + 0x120) != param_3) {
            ppvVar34 = *(void ***)(param_1 + 0x238);
            ppvVar39 = ppvVar34 + 1;
          }
          do {
            local_a0 = *(void **)(param_1 + 0x58);
            uVar10 = (**(code **)(param_3 + 0x70))
                               (param_3,&local_98,pvVar29,&local_a0,*(undefined8 *)(param_1 + 0x60))
            ;
            *ppvVar39 = local_98;
            (**(code **)(param_1 + 0xa0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                       (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
            *ppvVar34 = local_98;
          } while (1 < uVar10);
        }
        else {
          (**(code **)(param_1 + 0xa0))(*puVar1,local_b0,(int)local_b8 - (int)local_b0);
        }
      }
    }
    else {
      (**(code **)(param_1 + 0x68))
                (*(undefined8 *)(param_1 + 8),*puVar27,*(undefined8 *)(param_1 + 0x2e0));
    }
    pplVar20 = *(long ***)(param_1 + 0x310);
    if (*(long ***)(param_1 + 0x318) == (long **)0x0) {
LAB_00d34554:
      *(long ***)(param_1 + 0x318) = pplVar20;
    }
    else {
      pplVar18 = *(long ***)(param_1 + 0x318);
      pplVar21 = pplVar20;
      if (pplVar20 != (long **)0x0) {
        do {
          pplVar20 = pplVar21;
          pplVar21 = (long **)*pplVar20;
          *pplVar20 = (long *)pplVar18;
          pplVar18 = pplVar20;
        } while (pplVar21 != (long **)0x0);
        goto LAB_00d34554;
      }
    }
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *puVar2 = 0;
    break;
  case 3:
  case 4:
    local_c0 = (long *)0x0;
    pvVar29 = (void *)((long)local_b0 + (long)*(int *)(param_3 + 0x80));
    iVar8 = (**(code **)(param_3 + 0x38))(param_3,pvVar29);
    local_a0 = pvVar29;
    if ((*plVar30 == 0) && (cVar7 = FUN_00d328e8(puVar3), cVar7 == '\0')) goto LAB_00d34d9c;
    while (uVar10 = (**(code **)(param_3 + 0x70))
                              (param_3,&local_a0,(long)pvVar29 + (long)iVar8,plVar30,*puVar2),
          1 < uVar10) {
      cVar7 = FUN_00d328e8(puVar3);
      if (cVar7 == '\0') goto LAB_00d34d9c;
    }
    if (*(long *)(param_1 + 0x330) != 0) {
      puVar19 = (undefined *)*plVar30;
      if (puVar19 == (undefined *)*puVar2) {
        cVar7 = FUN_00d328e8(puVar3);
        if (cVar7 == '\0') goto LAB_00d34d9c;
        puVar19 = (undefined *)*plVar30;
      }
      *(undefined **)(param_1 + 0x328) = puVar19 + 1;
      *puVar19 = 0;
      local_98 = *(void **)(param_1 + 0x330);
      if (local_98 != (void *)0x0) {
        *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
        iVar11 = FUN_00d3554c(param_1,param_3,local_b0,&local_98,&local_c0);
        pvVar6 = local_98;
        pvVar29 = local_b8;
        if (iVar11 == 0) {
          *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
          if (*(code **)(param_1 + 0x68) == (code *)0x0) {
            pcVar17 = *(code **)(param_1 + 0x70);
            if (pcVar17 != (code *)0x0) goto LAB_00d34738;
            if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
              local_a0 = local_b0;
              if (*(char *)(param_3 + 0x84) == '\0') {
                ppvVar34 = ppvVar31;
                ppvVar39 = ppvVar36;
                if (*(long *)(param_1 + 0x120) != param_3) {
                  ppvVar34 = *(void ***)(param_1 + 0x238);
                  ppvVar39 = ppvVar34 + 1;
                }
                do {
                  local_a8 = *(undefined **)(param_1 + 0x58);
                  uVar10 = (**(code **)(param_3 + 0x70))
                                     (param_3,&local_a0,pvVar29,&local_a8,
                                      *(undefined8 *)(param_1 + 0x60));
                  *ppvVar39 = local_a0;
                  (**(code **)(param_1 + 0xa0))
                            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                             (int)local_a8 - (int)*(undefined8 *)(param_1 + 0x58));
                  *ppvVar34 = local_a0;
                } while (1 < uVar10);
              }
              else {
                (**(code **)(param_1 + 0xa0))(*puVar1,local_b0,(int)local_b8 - (int)local_b0);
              }
            }
          }
          else {
            (**(code **)(param_1 + 0x68))
                      (*(undefined8 *)(param_1 + 8),local_98,*(undefined8 *)(param_1 + 0x2e0));
            pcVar17 = *(code **)(param_1 + 0x70);
            if (pcVar17 != (code *)0x0) {
              if (*(long *)(param_1 + 0x68) != 0) {
                *ppvVar32 = *ppvVar15;
                pcVar17 = *(code **)(param_1 + 0x70);
              }
LAB_00d34738:
              (*pcVar17)(*puVar1,pvVar6);
            }
          }
          pplVar20 = *(long ***)(param_1 + 0x310);
          if (*(long ***)(param_1 + 0x318) == (long **)0x0) {
LAB_00d34770:
            *(long ***)(param_1 + 0x318) = pplVar20;
          }
          else {
            pplVar18 = *(long ***)(param_1 + 0x318);
            pplVar21 = pplVar20;
            if (pplVar20 != (long **)0x0) {
              do {
                pplVar20 = pplVar21;
                pplVar21 = (long **)*pplVar20;
                *pplVar20 = (long *)pplVar18;
                pplVar18 = pplVar20;
              } while (pplVar21 != (long **)0x0);
              goto LAB_00d34770;
            }
          }
          *(undefined8 *)(param_1 + 0x328) = 0;
          *(undefined8 *)(param_1 + 0x330) = 0;
          *puVar2 = 0;
          *puVar3 = 0;
          if (local_c0 != (long *)0x0) {
            pcVar17 = *(code **)(param_1 + 0xd0);
            plVar14 = local_c0;
            if (pcVar17 == (code *)0x0) {
              plVar22 = *(long **)(param_1 + 0x2c8);
              do {
                plVar28 = plVar14;
                plVar14 = (long *)plVar28[1];
                plVar28[1] = (long)plVar22;
                *(long *)(*plVar28 + 8) = plVar28[2];
                plVar22 = plVar28;
              } while (plVar14 != (long *)0x0);
              *(long **)(param_1 + 0x2c8) = plVar28;
            }
            else {
              while( true ) {
                if (pcVar17 != (code *)0x0) {
                  (*pcVar17)(*puVar1,*(undefined8 *)*plVar14);
                }
                plVar22 = (long *)plVar14[1];
                plVar14[1] = *(long *)(param_1 + 0x2c8);
                *(long **)(param_1 + 0x2c8) = plVar14;
                *(long *)(*plVar14 + 8) = plVar14[2];
                if (plVar22 == (long *)0x0) break;
                pcVar17 = *(code **)(param_1 + 0xd0);
                plVar14 = plVar22;
              }
            }
          }
          if (*(int *)(param_1 + 0x24c) == 0) goto LAB_00d34dc8;
          break;
        }
        if (local_c0 != (long *)0x0) {
          pcVar17 = *(code **)(param_1 + 0xd0);
          plVar30 = local_c0;
          if (pcVar17 == (code *)0x0) {
            plVar23 = *(long **)(param_1 + 0x2c8);
            do {
              plVar14 = plVar30;
              plVar30 = (long *)plVar14[1];
              plVar14[1] = (long)plVar23;
              *(long *)(*plVar14 + 8) = plVar14[2];
              plVar23 = plVar14;
            } while (plVar30 != (long *)0x0);
            *(long **)(param_1 + 0x2c8) = plVar14;
          }
          else {
            while( true ) {
              if (pcVar17 != (code *)0x0) {
                (*pcVar17)(*puVar1,*(undefined8 *)*plVar30);
              }
              plVar23 = (long *)plVar30[1];
              plVar30[1] = *(long *)(param_1 + 0x2c8);
              *(long **)(param_1 + 0x2c8) = plVar30;
              *(long *)(*plVar30 + 8) = plVar30[2];
              if (plVar23 == (long *)0x0) break;
              pcVar17 = *(code **)(param_1 + 0xd0);
              plVar30 = plVar23;
            }
          }
        }
        goto switchD_00d33ef0_caseD_c;
      }
    }
LAB_00d34d9c:
    iVar11 = 1;
    goto switchD_00d33ef0_caseD_c;
  case 5:
    if (*(int *)(param_1 + 0x24c) == param_2) goto LAB_00d34e9c;
    puVar33 = *(undefined8 **)(param_1 + 0x2b0);
    *(undefined8 *)(param_1 + 0x2b0) = *puVar33;
    *puVar33 = *(undefined8 *)(param_1 + 0x2b8);
    *(undefined8 **)(param_1 + 0x2b8) = puVar33;
    pvVar29 = (void *)((long)local_b0 + (long)*(int *)(param_3 + 0x80) * 2);
    iVar8 = (**(code **)(param_3 + 0x38))(param_3,pvVar29);
    if ((iVar8 != *(int *)(puVar33 + 2)) ||
       (iVar8 = memcmp((void *)puVar33[1],pvVar29,(long)iVar8), pvVar6 = local_b8, iVar8 != 0)) {
      iVar11 = 7;
LAB_00d34f08:
      *ppvVar32 = pvVar29;
      goto switchD_00d33ef0_caseD_c;
    }
    pcVar17 = *(code **)(param_1 + 0x70);
    *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + -1;
    if (pcVar17 == (code *)0x0) {
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        local_98 = local_b0;
        if (*(char *)(param_3 + 0x84) == '\0') {
          ppvVar34 = ppvVar31;
          ppvVar39 = ppvVar36;
          if (*(long *)(param_1 + 0x120) != param_3) {
            ppvVar34 = *(void ***)(param_1 + 0x238);
            ppvVar39 = ppvVar34 + 1;
          }
          do {
            local_a0 = *(void **)(param_1 + 0x58);
            uVar10 = (**(code **)(param_3 + 0x70))
                               (param_3,&local_98,pvVar6,&local_a0,*(undefined8 *)(param_1 + 0x60));
            *ppvVar39 = local_98;
            (**(code **)(param_1 + 0xa0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                       (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
            *ppvVar34 = local_98;
          } while (1 < uVar10);
        }
        else {
          (**(code **)(param_1 + 0xa0))(*puVar1,local_b0,(int)local_b8 - (int)local_b0);
        }
      }
    }
    else {
      if ((*(char *)(param_1 + 0x1c8) != '\0') &&
         (pcVar24 = (char *)puVar33[4], pcVar24 != (char *)0x0)) {
        cVar7 = *pcVar24;
        pcVar16 = (char *)(puVar33[3] + (long)*(int *)((long)puVar33 + 0x34));
        while (cVar7 != '\0') {
          pcVar24 = pcVar24 + 1;
          *pcVar16 = cVar7;
          pcVar16 = pcVar16 + 1;
          cVar7 = *pcVar24;
        }
        if ((*(char *)(param_1 + 0x1c9) != '\0') &&
           (pcVar24 = (char *)puVar33[5], pcVar24 != (char *)0x0)) {
          *pcVar16 = *(char *)(param_1 + 0x37c);
          cVar7 = *pcVar24;
          while (pcVar16 = pcVar16 + 1, cVar7 != '\0') {
            pcVar24 = pcVar24 + 1;
            *pcVar16 = cVar7;
            cVar7 = *pcVar24;
          }
        }
        *pcVar16 = '\0';
        pcVar17 = *(code **)(param_1 + 0x70);
      }
      (*pcVar17)(*puVar1,puVar33[3]);
    }
    plVar14 = (long *)puVar33[10];
    while (plVar14 != (long *)0x0) {
      plVar22 = plVar14;
      if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
        (**(code **)(param_1 + 0xd0))(*puVar1,*(undefined8 *)*plVar14);
        plVar22 = (long *)puVar33[10];
      }
      plVar22 = (long *)plVar22[1];
      puVar33[10] = plVar22;
      plVar14[1] = *(long *)(param_1 + 0x2c8);
      *(long **)(param_1 + 0x2c8) = plVar14;
      *(long *)(*plVar14 + 8) = plVar14[2];
      plVar14 = plVar22;
    }
    if (*(int *)(param_1 + 0x24c) != 0) break;
LAB_00d34dc8:
    if (*(int *)(param_1 + 0x388) == 2) {
      local_b0 = local_b8;
      iVar11 = 0x23;
      *ppvVar32 = local_b8;
      goto switchD_00d33ef0_caseD_c;
    }
    if (*(int *)(param_1 + 0x388) != 3) {
      iVar11 = FUN_00d36190(param_1,local_b8,param_5,param_6);
      goto switchD_00d33ef0_caseD_c;
    }
    *(code **)(param_1 + 0x210) = FUN_00d36190;
    *ppvVar32 = local_b8;
    local_b0 = local_b8;
    goto LAB_00d34ec8;
  case 6:
    pcVar17 = *(code **)(param_1 + 0x78);
    if (pcVar17 == (code *)0x0) {
      pcVar17 = *(code **)(param_1 + 0xa0);
      if (pcVar17 != (code *)0x0) {
        local_98 = local_b0;
        if (*(char *)(param_3 + 0x84) != '\0') goto LAB_00d34614;
        ppvVar34 = ppvVar31;
        ppvVar39 = ppvVar36;
        if (*(long *)(param_1 + 0x120) != param_3) {
          ppvVar34 = *(void ***)(param_1 + 0x238);
          ppvVar39 = ppvVar34 + 1;
        }
        do {
          local_a0 = *(void **)(param_1 + 0x58);
          uVar10 = (**(code **)(param_3 + 0x70))
                             (param_3,&local_98,pvVar29,&local_a0,*(undefined8 *)(param_1 + 0x60));
          *ppvVar39 = local_98;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
          *ppvVar34 = local_98;
        } while (1 < uVar10);
      }
    }
    else if (*(char *)(param_3 + 0x84) == '\0') {
      while( true ) {
        local_98 = *(void **)(param_1 + 0x58);
        uVar10 = (**(code **)(param_3 + 0x70))
                           (param_3,&local_b0,local_b8,&local_98,*(undefined8 *)(param_1 + 0x60));
        *ppvVar15 = local_b0;
        (*pcVar17)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                   (int)local_98 - (int)*(undefined8 *)(param_1 + 0x58));
        if (uVar10 < 2) break;
        *ppvVar32 = local_b0;
      }
    }
    else {
      (*pcVar17)(*puVar1,local_b0,iVar25 - iVar37);
    }
    break;
  case 7:
    if (*(code **)(param_1 + 0x78) == (code *)0x0) {
      pcVar17 = *(code **)(param_1 + 0xa0);
      if (pcVar17 != (code *)0x0) {
        local_98 = local_b0;
        if (*(char *)(param_3 + 0x84) != '\0') goto LAB_00d34614;
        ppvVar34 = ppvVar31;
        ppvVar39 = ppvVar36;
        if (*(long *)(param_1 + 0x120) != param_3) {
          ppvVar34 = *(void ***)(param_1 + 0x238);
          ppvVar39 = ppvVar34 + 1;
        }
        do {
          local_a0 = *(void **)(param_1 + 0x58);
          uVar10 = (**(code **)(param_3 + 0x70))
                             (param_3,&local_98,pvVar29,&local_a0,*(undefined8 *)(param_1 + 0x60));
          *ppvVar39 = local_98;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
          *ppvVar34 = local_98;
        } while (1 < uVar10);
      }
    }
    else {
      local_98 = (void *)CONCAT71(local_98._1_7_,10);
      (**(code **)(param_1 + 0x78))(*puVar1,&local_98,1);
    }
    break;
  case 8:
    if (*(code **)(param_1 + 0x90) == (code *)0x0) {
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        local_98 = local_b0;
        if (*(char *)(param_3 + 0x84) == '\0') {
          ppvVar34 = ppvVar31;
          ppvVar39 = ppvVar36;
          if (*(long *)(param_1 + 0x120) != param_3) {
            ppvVar34 = *(void ***)(param_1 + 0x238);
            ppvVar39 = ppvVar34 + 1;
          }
          do {
            local_a0 = *(void **)(param_1 + 0x58);
            uVar10 = (**(code **)(param_3 + 0x70))
                               (param_3,&local_98,pvVar29,&local_a0,*(undefined8 *)(param_1 + 0x60))
            ;
            *ppvVar39 = local_98;
            (**(code **)(param_1 + 0xa0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                       (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
            *ppvVar34 = local_98;
          } while (1 < uVar10);
        }
        else {
          (**(code **)(param_1 + 0xa0))(*puVar1,local_b0,iVar25 - iVar37);
        }
      }
    }
    else {
      (**(code **)(param_1 + 0x90))(*puVar1);
    }
    iVar11 = FUN_00d36480(param_1,param_3,&local_b8,param_5,param_6,param_7);
    if (iVar11 != 0) goto switchD_00d33ef0_caseD_c;
    if (local_b8 == (void *)0x0) {
      iVar11 = 0;
      *(code **)(param_1 + 0x210) = FUN_00d368f8;
      goto switchD_00d33ef0_caseD_c;
    }
    break;
  case 9:
    cVar7 = (**(code **)(param_3 + 0x58))
                      (param_3,(long)local_b0 + (long)*(int *)(param_3 + 0x80),
                       (long)local_b8 - (long)*(int *)(param_3 + 0x80));
    pvVar29 = local_b8;
    local_a8 = (undefined *)CONCAT71(local_a8._1_7_,cVar7);
    if (cVar7 == '\0') {
      iVar8 = *(int *)(param_3 + 0x80);
      local_98 = (void *)((long)local_b0 + (long)iVar8);
      if ((*plVar23 == 0) && (cVar7 = FUN_00d328e8(lVar4), cVar7 == '\0')) goto LAB_00d34d9c;
      while (uVar10 = (**(code **)(param_3 + 0x70))
                                (param_3,&local_98,(long)pvVar29 - (long)iVar8,plVar23,
                                 *(undefined8 *)(lVar38 + 0xb0)), 1 < uVar10) {
        cVar7 = FUN_00d328e8(lVar4);
        if (cVar7 == '\0') goto LAB_00d34d9c;
      }
      if (*(long *)(lVar38 + 0xc0) != 0) {
        puVar19 = *(undefined **)(lVar38 + 0xb8);
        if (puVar19 == *(undefined **)(lVar38 + 0xb0)) {
          cVar7 = FUN_00d328e8(lVar4);
          if (cVar7 == '\0') goto LAB_00d34d9c;
          puVar19 = (undefined *)*plVar23;
        }
        *(undefined **)(lVar38 + 0xb8) = puVar19 + 1;
        *puVar19 = 0;
        lVar35 = *(long *)(lVar38 + 0xc0);
        if (lVar35 != 0) {
          plVar14 = (long *)FUN_00d31dd4(param_1,lVar38,lVar35,0);
          *(undefined8 *)(lVar38 + 0xb8) = *(undefined8 *)(lVar38 + 0xc0);
          if ((*(char *)(lVar38 + 0x101) != '\0') && (*(char *)(lVar38 + 0x102) == '\0')) {
            if (plVar14 != (long *)0x0) goto LAB_00d348ac;
            pcVar17 = *(code **)(param_1 + 0xf0);
            if (pcVar17 == (code *)0x0) goto LAB_00d34d00;
            uVar12 = *puVar1;
LAB_00d34cf0:
            (*pcVar17)(uVar12,lVar35,0);
            break;
          }
          if (plVar14 == (long *)0x0) {
            iVar11 = 0xb;
            goto switchD_00d33ef0_caseD_c;
          }
          if (*(char *)((long)plVar14 + 0x3a) == '\0') {
            iVar11 = 0x18;
            goto switchD_00d33ef0_caseD_c;
          }
LAB_00d348ac:
          if (*(char *)(plVar14 + 7) != '\0') {
            iVar11 = 0xc;
            goto switchD_00d33ef0_caseD_c;
          }
          if (plVar14[6] != 0) {
            iVar11 = 0xf;
            goto switchD_00d33ef0_caseD_c;
          }
          if (plVar14[1] == 0) {
            if (*(long *)(param_1 + 0xe0) == 0) {
LAB_00d34d00:
              if (*(long *)(param_1 + 0xa0) != 0) {
                FUN_00d2f028(param_1,param_3,local_b0,local_b8);
              }
              break;
            }
            iVar11 = 1;
            *(undefined *)(plVar14 + 7) = 1;
            lVar35 = FUN_00d351e4(param_1);
            *(undefined *)(plVar14 + 7) = 0;
            if (lVar35 == 0) goto switchD_00d33ef0_caseD_c;
            iVar8 = (**(code **)(param_1 + 0xe0))
                              (*(undefined8 *)(param_1 + 0xe8),lVar35,plVar14[4],plVar14[3],
                               plVar14[5]);
            if (iVar8 == 0) {
              iVar11 = 0x15;
              goto switchD_00d33ef0_caseD_c;
            }
            *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x330);
          }
          else {
            if (*(char *)(param_1 + 0x248) == '\0') {
              pcVar17 = *(code **)(param_1 + 0xf0);
              if (pcVar17 != (code *)0x0) {
                uVar12 = *puVar1;
                lVar35 = *plVar14;
                goto LAB_00d34cf0;
              }
              goto LAB_00d34d00;
            }
            iVar11 = FUN_00d3334c(param_1,plVar14,0);
            if (iVar11 != 0) goto switchD_00d33ef0_caseD_c;
          }
          break;
        }
      }
      goto LAB_00d34d9c;
    }
    if (*(code **)(param_1 + 0x78) == (code *)0x0) {
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        local_98 = local_b0;
        if (*(char *)(param_3 + 0x84) == '\0') {
          ppvVar34 = ppvVar31;
          ppvVar39 = ppvVar36;
          if (*(long *)(param_1 + 0x120) != param_3) {
            ppvVar34 = *(void ***)(param_1 + 0x238);
            ppvVar39 = ppvVar34 + 1;
          }
          do {
            local_a0 = *(void **)(param_1 + 0x58);
            uVar10 = (**(code **)(param_3 + 0x70))
                               (param_3,&local_98,pvVar29,&local_a0,*(undefined8 *)(param_1 + 0x60))
            ;
            *ppvVar39 = local_98;
            (**(code **)(param_1 + 0xa0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                       (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
            *ppvVar34 = local_98;
          } while (1 < uVar10);
        }
        else {
          (**(code **)(param_1 + 0xa0))(*puVar1,local_b0,(int)local_b8 - (int)local_b0);
        }
      }
    }
    else {
      (**(code **)(param_1 + 0x78))(*puVar1,&local_a8,1);
    }
    break;
  case 10:
    uVar12 = (**(code **)(param_3 + 0x50))(param_3,local_b0);
    pvVar29 = local_b8;
    if ((int)uVar12 < 0) {
      iVar11 = 0xe;
      goto switchD_00d33ef0_caseD_c;
    }
    pcVar17 = *(code **)(param_1 + 0x78);
    if (pcVar17 == (code *)0x0) {
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        local_98 = local_b0;
        if (*(char *)(param_3 + 0x84) == '\0') {
          ppvVar34 = ppvVar31;
          ppvVar39 = ppvVar36;
          if (*(long *)(param_1 + 0x120) != param_3) {
            ppvVar34 = *(void ***)(param_1 + 0x238);
            ppvVar39 = ppvVar34 + 1;
          }
          do {
            local_a0 = *(void **)(param_1 + 0x58);
            uVar10 = (**(code **)(param_3 + 0x70))
                               (param_3,&local_98,pvVar29,&local_a0,*(undefined8 *)(param_1 + 0x60))
            ;
            *ppvVar39 = local_98;
            (**(code **)(param_1 + 0xa0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                       (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
            *ppvVar34 = local_98;
          } while (1 < uVar10);
        }
        else {
          (**(code **)(param_1 + 0xa0))(*puVar1,local_b0,(int)local_b8 - (int)local_b0);
        }
      }
    }
    else {
      uVar26 = *puVar1;
      uVar9 = XmlUtf8Encode(uVar12,&local_98);
      (*pcVar17)(uVar26,&local_98,uVar9);
    }
    break;
  case 0xb:
    iVar8 = FUN_00d334f0(param_1,param_3,local_b0,local_b8);
    goto joined_r0x00d34084;
  case 0xc:
    goto switchD_00d33ef0_caseD_c;
  case 0xd:
    iVar8 = FUN_00d3387c(param_1,param_3,local_b0,local_b8);
joined_r0x00d34084:
    if (iVar8 == 0) goto LAB_00d34d9c;
    break;
  case -5:
    if ((param_7 & 0xff) == 0) {
      pcVar17 = *(code **)(param_1 + 0x78);
      if (pcVar17 == (code *)0x0) {
        pcVar17 = *(code **)(param_1 + 0xa0);
        if (pcVar17 == (code *)0x0) goto LAB_00d35130;
        local_98 = local_b0;
        if (*(char *)(param_3 + 0x84) == '\0') {
          if (*(long *)(param_1 + 0x120) != param_3) {
            ppvVar31 = *(void ***)(param_1 + 0x238);
            ppvVar36 = ppvVar31 + 1;
          }
          do {
            local_a0 = *(void **)(param_1 + 0x58);
            uVar10 = (**(code **)(param_3 + 0x70))
                               (param_3,&local_98,param_5,&local_a0,*(undefined8 *)(param_1 + 0x60))
            ;
            *ppvVar36 = local_98;
            (**(code **)(param_1 + 0xa0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                       (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
            *ppvVar31 = local_98;
          } while (1 < uVar10);
LAB_00d35130:
          if (param_2 == 0) {
            iVar11 = 3;
          }
          else {
            if (*(int *)(param_1 + 0x24c) == param_2) goto LAB_00d35140;
            iVar11 = 0xd;
          }
          *ppvVar32 = param_5;
          goto switchD_00d33ef0_caseD_c;
        }
        uVar12 = *puVar1;
      }
      else {
        if (*(char *)(param_3 + 0x84) == '\0') {
          local_98 = *(void **)(param_1 + 0x58);
          (**(code **)(param_3 + 0x70))
                    (param_3,&local_b0,param_5,&local_98,*(undefined8 *)(param_1 + 0x60));
          (**(code **)(param_1 + 0x78))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_98 - (int)*(undefined8 *)(param_1 + 0x58));
          goto LAB_00d35130;
        }
        uVar12 = *puVar1;
      }
      (*pcVar17)(uVar12,local_b0,(int)param_5 - iVar37);
      goto LAB_00d35130;
    }
    goto LAB_00d34ec8;
  case -4:
    if ((param_7 & 0xff) == 0) {
      if (param_2 < 1) goto LAB_00d34ffc;
      if (*(int *)(param_1 + 0x24c) != param_2) goto LAB_00d34e9c;
    }
    goto LAB_00d34ec8;
  case -3:
    if ((param_7 & 0xff) == 0) {
      *ppvVar15 = param_5;
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          local_98 = local_b0;
          if (*(char *)(param_3 + 0x84) == '\0') {
            if (*(long *)(param_1 + 0x120) != param_3) {
              ppvVar31 = *(void ***)(param_1 + 0x238);
              ppvVar36 = ppvVar31 + 1;
            }
            do {
              local_a0 = *(void **)(param_1 + 0x58);
              uVar10 = (**(code **)(param_3 + 0x70))
                                 (param_3,&local_98,param_5,&local_a0,
                                  *(undefined8 *)(param_1 + 0x60));
              *ppvVar36 = local_98;
              (**(code **)(param_1 + 0xa0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                         (int)local_a0 - (int)*(undefined8 *)(param_1 + 0x58));
              *ppvVar31 = local_98;
            } while (1 < uVar10);
          }
          else {
            (**(code **)(param_1 + 0xa0))(*puVar1,local_b0,(int)param_5 - iVar37);
          }
        }
      }
      else {
        local_98 = (void *)CONCAT71(local_98._1_7_,10);
        (**(code **)(param_1 + 0x78))(*puVar1,&local_98,1);
      }
      if (param_2 == 0) {
LAB_00d34ffc:
        iVar11 = 3;
        goto switchD_00d33ef0_caseD_c;
      }
      if (*(int *)(param_1 + 0x24c) == param_2) {
LAB_00d35140:
        iVar11 = 0;
        *param_6 = param_5;
        goto switchD_00d33ef0_caseD_c;
      }
LAB_00d34e9c:
      iVar11 = 0xd;
      goto switchD_00d33ef0_caseD_c;
    }
    goto LAB_00d34ec8;
  case -2:
    if ((param_7 & 0xff) == 0) {
      iVar11 = 6;
      goto switchD_00d33ef0_caseD_c;
    }
    goto LAB_00d34ec8;
  case -1:
    if ((param_7 & 0xff) == 0) {
      iVar11 = 5;
      goto switchD_00d33ef0_caseD_c;
    }
    goto LAB_00d34ec8;
  }
LAB_00d34b90:
  iVar8 = *(int *)(param_1 + 0x388);
  local_b0 = local_b8;
  *ppvVar32 = local_b8;
  if (iVar8 == 2) {
    iVar11 = 0x23;
    goto switchD_00d33ef0_caseD_c;
  }
  if (iVar8 == 3) {
LAB_00d34ec8:
    iVar11 = 0;
    *param_6 = local_b0;
switchD_00d33ef0_caseD_c:
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return iVar11;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00d33ea0;
}


