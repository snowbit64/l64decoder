// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d31770
// Entry Point: 00d31770
// Size: 1400 bytes
// Signature: undefined FUN_00d31770(void)


void FUN_00d31770(long param_1,int param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  int local_4ac;
  long local_4a8;
  long local_4a0;
  long local_498;
  long local_490;
  undefined8 local_488;
  long local_480 [128];
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(param_1 + 0x220);
  local_4ac = -1;
  pcVar15 = XmlParseXmlDecl;
  if (*(char *)(param_1 + 0x1c8) != '\0') {
    pcVar15 = XmlParseXmlDeclNS;
  }
  local_498 = 0;
  local_490 = 0;
  local_4a0 = 0;
  iVar4 = (*pcVar15)(param_2,*(undefined8 *)(param_1 + 0x120),param_3,param_4,plVar1,&local_4a0,
                     &local_4a8,&local_490,&local_498,&local_4ac);
  lVar6 = local_490;
  if (iVar4 == 0) {
    iVar4 = 0x1e;
    if (param_2 != 0) {
      iVar4 = 0x1f;
    }
    goto LAB_00d31c30;
  }
  if (((param_2 == 0) && (local_4ac == 1)) &&
     (*(undefined *)(*(long *)(param_1 + 0x2a0) + 0x102) = 1, *(int *)(param_1 + 0x394) == 1)) {
    *(undefined4 *)(param_1 + 0x394) = 0;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    if (local_490 == 0) {
      uVar12 = 0;
      lVar6 = local_4a8;
joined_r0x00d31978:
      if (local_4a0 == 0) {
        uVar14 = 0;
LAB_00d31a3c:
        (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 8),uVar14,uVar12,local_4ac);
        lVar8 = *(long *)(param_1 + 0x1c0);
        lVar6 = local_490;
        goto joined_r0x00d31968;
      }
      lVar13 = *(long *)(param_1 + 0x120);
      lVar8 = param_1 + 0x340;
      iVar4 = *(int *)(lVar13 + 0x80);
      local_480[0] = local_4a0;
      if ((*(long *)(param_1 + 0x358) != 0) || (cVar3 = FUN_00d328e8(lVar8), cVar3 != '\0')) {
        do {
          uVar5 = (**(code **)(lVar13 + 0x70))
                            (lVar13,local_480,lVar6 - iVar4,(undefined8 *)(param_1 + 0x358),
                             *(undefined8 *)(param_1 + 0x350));
          if (uVar5 < 2) {
            if (*(long *)(param_1 + 0x360) == 0) break;
            puVar7 = *(undefined **)(param_1 + 0x358);
            if (puVar7 == *(undefined **)(param_1 + 0x350)) {
              cVar3 = FUN_00d328e8(lVar8);
              if (cVar3 == '\0') break;
              puVar7 = *(undefined **)(undefined8 *)(param_1 + 0x358);
            }
            *(undefined **)(param_1 + 0x358) = puVar7 + 1;
            *puVar7 = 0;
            uVar14 = *(ulong *)(param_1 + 0x360);
            if (uVar14 != 0) goto LAB_00d31a3c;
            break;
          }
          cVar3 = FUN_00d328e8(lVar8);
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar13 = *(long *)(param_1 + 0x120);
      lVar8 = param_1 + 0x340;
      iVar4 = (**(code **)(lVar13 + 0x38))(lVar13,local_490);
      local_480[0] = lVar6;
      if ((*(long *)(param_1 + 0x358) != 0) || (cVar3 = FUN_00d328e8(lVar8), cVar3 != '\0')) {
        do {
          uVar5 = (**(code **)(lVar13 + 0x70))
                            (lVar13,local_480,lVar6 + iVar4,(undefined8 *)(param_1 + 0x358),
                             *(undefined8 *)(param_1 + 0x350));
          if (uVar5 < 2) {
            if (*(long *)(param_1 + 0x360) == 0) break;
            puVar7 = *(undefined **)(param_1 + 0x358);
            if (puVar7 == *(undefined **)(param_1 + 0x350)) {
              cVar3 = FUN_00d328e8(lVar8);
              if (cVar3 == '\0') break;
              puVar7 = *(undefined **)(undefined8 *)(param_1 + 0x358);
            }
            *(undefined **)(param_1 + 0x358) = puVar7 + 1;
            *puVar7 = 0;
            uVar12 = *(ulong *)(param_1 + 0x360);
            if (uVar12 != 0) {
              *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x358);
              lVar6 = local_4a8;
              goto joined_r0x00d31978;
            }
            break;
          }
          cVar3 = FUN_00d328e8(lVar8);
        } while (cVar3 != '\0');
      }
    }
LAB_00d31bd0:
    iVar4 = 1;
    goto LAB_00d31c30;
  }
  if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
LAB_00d3195c:
    lVar8 = *(long *)(param_1 + 0x1c0);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x120);
    local_480[0] = param_3;
    if (*(char *)(lVar6 + 0x84) == '\0') {
      do {
        local_488 = *(undefined8 *)(param_1 + 0x58);
        uVar5 = (**(code **)(lVar6 + 0x70))
                          (lVar6,local_480,param_4,&local_488,*(undefined8 *)(param_1 + 0x60));
        *(long *)(param_1 + 0x228) = local_480[0];
        (**(code **)(param_1 + 0xa0))
                  (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                   (int)local_488 - (int)*(undefined8 *)(param_1 + 0x58));
        *(long *)(param_1 + 0x220) = local_480[0];
      } while (1 < uVar5);
      goto LAB_00d3195c;
    }
    (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
    lVar8 = *(long *)(param_1 + 0x1c0);
  }
  uVar14 = 0;
  uVar12 = 0;
  lVar6 = local_490;
joined_r0x00d31968:
  local_490 = lVar6;
  if (lVar8 == 0) {
    if (local_498 == 0) {
      if (lVar6 != 0) {
        if (uVar12 == 0) {
          lVar8 = *(long *)(param_1 + 0x120);
          iVar4 = (**(code **)(lVar8 + 0x38))(lVar8,lVar6);
          uVar12 = FUN_00d31ce8(param_1 + 0x340,lVar8,lVar6,lVar6 + iVar4);
          if (uVar12 == 0) goto LAB_00d31bd0;
        }
        pcVar15 = *(code **)(param_1 + 0xf8);
        if (pcVar15 == (code *)0x0) {
LAB_00d31c70:
          iVar4 = 0x12;
          pplVar10 = *(long ***)(param_1 + 0x348);
          pplVar9 = *(long ***)(param_1 + 0x340);
joined_r0x00d31cdc:
          if (pplVar10 == (long **)0x0) goto LAB_00d31c98;
LAB_00d31c80:
          pplVar11 = pplVar9;
          if (pplVar9 != (long **)0x0) {
            do {
              pplVar9 = pplVar11;
              pplVar11 = (long **)*pplVar9;
              *pplVar9 = (long *)pplVar10;
              pplVar10 = pplVar9;
            } while (pplVar11 != (long **)0x0);
            goto LAB_00d31c98;
          }
        }
        else {
          memset(local_480,0xff,0x400);
          local_80 = 0;
          local_70 = (code *)0x0;
          local_78 = 0;
          iVar4 = (*pcVar15)(*(undefined8 *)(param_1 + 0x1e0),uVar12,local_480);
          if (iVar4 == 0) {
LAB_00d31c60:
            if (local_70 != (code *)0x0) {
              (*local_70)(local_80);
            }
            goto LAB_00d31c70;
          }
          pcVar15 = *(code **)(param_1 + 0x18);
          iVar4 = XmlSizeOfUnknownEncoding();
          lVar6 = (*pcVar15)((long)iVar4);
          *(long *)(param_1 + 0x1d0) = lVar6;
          if (lVar6 == 0) {
            if (local_70 != (code *)0x0) {
              (*local_70)(local_80);
            }
            iVar4 = 1;
            pplVar10 = *(long ***)(param_1 + 0x348);
            pplVar9 = *(long ***)(param_1 + 0x340);
            goto joined_r0x00d31cdc;
          }
          pcVar15 = XmlInitUnknownEncoding;
          if (*(char *)(param_1 + 0x1c8) != '\0') {
            pcVar15 = XmlInitUnknownEncodingNS;
          }
          lVar6 = (*pcVar15)(lVar6,local_480,local_78,local_80);
          if (lVar6 == 0) goto LAB_00d31c60;
          iVar4 = 0;
          *(undefined8 *)(param_1 + 0x1d8) = local_80;
          *(code **)(param_1 + 0x1e8) = local_70;
          *(long *)(param_1 + 0x120) = lVar6;
          pplVar10 = *(long ***)(param_1 + 0x348);
          pplVar9 = *(long ***)(param_1 + 0x340);
          if (pplVar10 != (long **)0x0) goto LAB_00d31c80;
LAB_00d31c98:
          *(long ***)(param_1 + 0x348) = pplVar9;
        }
        *(undefined8 *)(param_1 + 0x340) = 0;
        *(undefined8 *)(param_1 + 0x350) = 0;
        *(undefined8 *)(param_1 + 0x360) = 0;
        *(undefined8 *)(param_1 + 0x358) = 0;
        if (iVar4 == 0x12) {
          *plVar1 = local_490;
        }
        goto LAB_00d31c30;
      }
    }
    else {
      if ((*(int *)(local_498 + 0x80) != *(int *)(*(long *)(param_1 + 0x120) + 0x80)) ||
         ((*(int *)(local_498 + 0x80) == 2 && (local_498 != *(long *)(param_1 + 0x120))))) {
        iVar4 = 0x13;
        *plVar1 = lVar6;
        goto LAB_00d31c30;
      }
      *(long *)(param_1 + 0x120) = local_498;
    }
  }
  if ((uVar12 | uVar14) == 0) {
    iVar4 = 0;
    goto LAB_00d31c30;
  }
  pplVar10 = *(long ***)(param_1 + 0x340);
  if (*(long ***)(param_1 + 0x348) == (long **)0x0) {
LAB_00d31c18:
    *(long ***)(param_1 + 0x348) = pplVar10;
  }
  else {
    pplVar9 = *(long ***)(param_1 + 0x348);
    pplVar11 = pplVar10;
    if (pplVar10 != (long **)0x0) {
      do {
        pplVar10 = pplVar11;
        pplVar11 = (long **)*pplVar10;
        *pplVar10 = (long *)pplVar9;
        pplVar9 = pplVar10;
      } while (pplVar11 != (long **)0x0);
      goto LAB_00d31c18;
    }
  }
  iVar4 = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
LAB_00d31c30:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


