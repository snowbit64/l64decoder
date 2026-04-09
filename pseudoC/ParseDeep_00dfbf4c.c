// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseDeep
// Entry Point: 00dfbf4c
// Size: 1704 bytes
// Signature: undefined __thiscall ParseDeep(XMLNode * this, char * param_1, StrPair * param_2, int * param_3)


/* WARNING: Type propagation algorithm not settling */
/* tinyxml2::XMLNode::ParseDeep(char*, tinyxml2::StrPair*, int*) */

void __thiscall
tinyxml2::XMLNode::ParseDeep(XMLNode *this,char *param_1,StrPair *param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  char *__s1;
  char *__s2;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long **pplVar13;
  uint uVar14;
  ulong uVar15;
  long **pplVar16;
  long lVar17;
  int iVar18;
  char *local_a8;
  undefined4 local_88;
  void *local_80;
  void *pvStack_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar17 = *(long *)(this + 8);
  iVar5 = *(int *)(lVar17 + 0xa4) + 1;
  *(int *)(lVar17 + 0xa4) = iVar5;
  lVar11 = lVar17;
  if (iVar5 == 100) {
    XMLDocument::SetError
              ((XMLError)lVar17,0x12,(char *)(ulong)*(uint *)(lVar17 + 0xa0),
               "Element nesting is too deep.");
    lVar11 = *(long *)(this + 8);
  }
  if (*(int *)(lVar11 + 0x6c) == 0) {
LAB_00dfc028:
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      local_70 = (long *)0x0;
      uVar6 = XMLDocument::Identify(*(XMLDocument **)(this + 8),param_1,(XMLNode **)&local_70);
      plVar4 = local_70;
      if (local_70 != (long *)0x0) {
        local_88 = 0;
        local_80 = (void *)0x0;
        pvStack_78 = (void *)0x0;
        uVar14 = *(uint *)(local_70 + 6);
        param_1 = (char *)(**(code **)(*local_70 + 0x88))(local_70,uVar6,&local_88,param_3);
        if (param_1 != (char *)0x0) {
          plVar7 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4);
          if ((plVar7 == (long *)0x0) ||
             ((lVar11 = (**(code **)(*(long *)this + 0x18))(this), lVar11 != 0 &&
              ((*(long **)(this + 0x38) == (long *)0x0 ||
               (((lVar11 = (**(code **)(**(long **)(this + 0x38) + 0x20))(), lVar11 != 0 &&
                 (plVar8 = *(long **)(this + 0x40), plVar8 != (long *)0x0)) &&
                (lVar11 = (**(code **)(*plVar8 + 0x20))(), lVar11 != 0)))))))) {
            plVar7 = (long *)(**(code **)*plVar4)(plVar4);
            if (plVar7 == (long *)0x0) goto LAB_00dfc398;
            iVar5 = *(int *)(plVar7 + 0xd);
            if (iVar5 == 2) {
              if ((param_2 != (StrPair *)0x0) && (plVar7 + 3 != (long *)param_2)) {
                if ((((byte)param_2[1] >> 1 & 1) != 0) &&
                   (pvVar9 = *(void **)(param_2 + 8), pvVar9 != (void *)0x0)) {
                  operator_delete__(pvVar9);
                }
                *(void **)(param_2 + 8) = (void *)0x0;
                *(undefined8 *)(param_2 + 0x10) = 0;
                *(undefined4 *)param_2 = 0;
                *(undefined4 *)param_2 = *(undefined4 *)(plVar7 + 3);
                *(long *)(param_2 + 8) = plVar7[4];
                *(long *)(param_2 + 0x10) = plVar7[5];
                *(undefined4 *)(plVar7 + 3) = 0;
                plVar7[4] = 0;
                plVar7[5] = 0;
              }
              (**(code **)(*(long *)plVar4[0xc] + 0x28))();
              lVar11 = (**(code **)(*plVar4 + 0x18))(plVar4);
              if (lVar11 == 0) {
                lVar11 = plVar4[1];
                uVar14 = *(uint *)(lVar11 + 0x104);
                uVar15 = (ulong)uVar14;
                pplVar16 = *(long ***)(lVar11 + 0xa8);
                if (0 < (int)uVar14) {
                  do {
                    if (*pplVar16 == plVar4) {
                      *pplVar16 = (*(long ***)(lVar11 + 0xa8))[(int)(uVar14 - 1)];
                      *(uint *)(lVar11 + 0x104) = uVar14 - 1;
                      break;
                    }
                    uVar15 = uVar15 - 1;
                    pplVar16 = pplVar16 + 1;
                  } while (uVar15 != 0);
                }
              }
              plVar7 = (long *)plVar4[0xc];
              (**(code **)(*plVar4 + 0x78))(plVar4);
              (**(code **)(*plVar7 + 0x20))(plVar7,plVar4);
              iVar18 = 1;
              iVar5 = 1;
              local_a8 = param_1;
              bVar3 = local_88._1_1_;
              goto joined_r0x00dfc20c;
            }
            if (local_80 == pvStack_78) {
joined_r0x00dfc394:
              if (iVar5 == 0) {
LAB_00dfc498:
                uVar6 = *(undefined8 *)(this + 8);
                lVar11 = (**(code **)(*plVar7 + 0x48))(plVar7);
                if (lVar11 == 0) {
                  uVar10 = StrPair::GetStr();
                }
                else {
                  uVar10 = 0;
                }
                XMLDocument::SetError
                          ((XMLError)uVar6,0xe,(char *)(ulong)uVar14,"XMLElement name=%s",uVar10);
                lVar11 = (**(code **)(*plVar4 + 0x18))(plVar4);
                if (lVar11 == 0) {
                  lVar11 = plVar4[1];
                  pplVar13 = *(long ***)(lVar11 + 0xa8);
                  uVar14 = *(uint *)(lVar11 + 0x104);
                  uVar15 = (ulong)uVar14;
                  pplVar16 = pplVar13;
                  if (0 < (int)uVar14) {
                    do {
                      if (*pplVar16 == plVar4) goto LAB_00dfc52c;
                      uVar15 = uVar15 - 1;
                      pplVar16 = pplVar16 + 1;
                    } while (uVar15 != 0);
                  }
                }
                goto LAB_00dfc53c;
              }
            }
            else {
              if (iVar5 != 0) goto LAB_00dfc498;
              __s1 = (char *)StrPair::GetStr();
              lVar11 = (**(code **)(*plVar7 + 0x48))(plVar7);
              if (lVar11 == 0) {
                __s2 = (char *)StrPair::GetStr();
                if (__s1 != __s2) goto LAB_00dfc488;
              }
              else {
                __s2 = (char *)0x0;
                if (__s1 != (char *)0x0) {
LAB_00dfc488:
                  iVar5 = strncmp(__s1,__s2,0x7fffffff);
                  goto joined_r0x00dfc394;
                }
              }
            }
LAB_00dfc398:
            lVar11 = plVar4[1];
            if (lVar11 == *(long *)(this + 8)) {
              lVar12 = plVar4[2];
              if (lVar12 == 0) {
                uVar14 = *(uint *)(lVar11 + 0x104);
                uVar15 = (ulong)uVar14;
                pplVar16 = *(long ***)(lVar11 + 0xa8);
                if (0 < (int)uVar14) {
                  do {
                    if (*pplVar16 == plVar4) {
                      *pplVar16 = (*(long ***)(lVar11 + 0xa8))[(int)(uVar14 - 1)];
                      *(uint *)(lVar11 + 0x104) = uVar14 - 1;
                      break;
                    }
                    uVar15 = uVar15 - 1;
                    pplVar16 = pplVar16 + 1;
                  } while (uVar15 != 0);
                }
                (**(code **)(*(long *)plVar4[0xc] + 0x28))();
              }
              else {
                if (*(long **)(lVar12 + 0x38) == plVar4) {
                  *(long *)(lVar12 + 0x38) = plVar4[10];
                  plVar7 = *(long **)(lVar12 + 0x40);
                  lVar11 = plVar4[9];
                }
                else {
                  plVar7 = *(long **)(lVar12 + 0x40);
                  lVar11 = plVar4[9];
                }
                if (plVar7 == plVar4) {
                  *(long *)(lVar12 + 0x40) = lVar11;
                }
                if (lVar11 != 0) {
                  *(long *)(lVar11 + 0x50) = plVar4[10];
                }
                if (plVar4[10] != 0) {
                  *(long *)(plVar4[10] + 0x48) = lVar11;
                }
                plVar4[9] = 0;
                plVar4[10] = 0;
              }
              lVar11 = *(long *)(this + 0x40);
              pplVar16 = (long **)(this + 0x40);
              if (lVar11 != 0) {
                pplVar16 = (long **)(lVar11 + 0x50);
              }
              lVar12 = 0x38;
              if (lVar11 != 0) {
                lVar12 = 0x40;
              }
              *pplVar16 = plVar4;
              *(long **)(this + lVar12) = plVar4;
              plVar4[9] = lVar11;
              plVar4[10] = 0;
              plVar4[2] = (long)this;
            }
            else {
            }
            iVar18 = 0;
            iVar5 = 0;
            bVar3 = local_88._1_1_;
            goto joined_r0x00dfc20c;
          }
          uVar6 = *(undefined8 *)(this + 8);
          lVar11 = (**(code **)(*plVar7 + 0x48))(plVar7);
          if (lVar11 == 0) {
            uVar10 = StrPair::GetStr();
          }
          else {
            uVar10 = 0;
          }
          XMLDocument::SetError
                    ((XMLError)uVar6,0xb,(char *)(ulong)uVar14,"XMLDeclaration value=%s",uVar10);
          lVar11 = (**(code **)(*plVar4 + 0x18))(plVar4);
          if (lVar11 == 0) {
            lVar11 = plVar4[1];
            pplVar13 = *(long ***)(lVar11 + 0xa8);
            uVar14 = *(uint *)(lVar11 + 0x104);
            uVar15 = (ulong)uVar14;
            pplVar16 = pplVar13;
            if (0 < (int)uVar14) {
              do {
                if (*pplVar16 == plVar4) goto LAB_00dfc52c;
                uVar15 = uVar15 - 1;
                pplVar16 = pplVar16 + 1;
              } while (uVar15 != 0);
            }
          }
          goto LAB_00dfc53c;
        }
        lVar11 = (**(code **)(*plVar4 + 0x18))(plVar4);
        if (lVar11 == 0) {
          lVar11 = plVar4[1];
          uVar1 = *(uint *)(lVar11 + 0x104);
          uVar15 = (ulong)uVar1;
          pplVar16 = *(long ***)(lVar11 + 0xa8);
          if (0 < (int)uVar1) {
            do {
              if (*pplVar16 == plVar4) {
                *pplVar16 = (*(long ***)(lVar11 + 0xa8))[(int)(uVar1 - 1)];
                *(uint *)(lVar11 + 0x104) = uVar1 - 1;
                break;
              }
              uVar15 = uVar15 - 1;
              pplVar16 = pplVar16 + 1;
            } while (uVar15 != 0);
          }
        }
        plVar7 = (long *)plVar4[0xc];
        (**(code **)(*plVar4 + 0x78))(plVar4);
        (**(code **)(*plVar7 + 0x20))(plVar7,plVar4);
        if (*(int *)(*(long *)(this + 8) + 0x6c) == 0) {
          XMLDocument::SetError((XMLError)*(long *)(this + 8),0xf,(char *)(ulong)uVar14,0);
          iVar18 = 3;
          iVar5 = 3;
          bVar3 = local_88._1_1_;
        }
        else {
          iVar18 = 3;
          iVar5 = 3;
          bVar3 = local_88._1_1_;
        }
        goto joined_r0x00dfc20c;
      }
    }
  }
LAB_00dfbfc8:
  local_a8 = (char *)0x0;
LAB_00dfbfcc:
  *(int *)(lVar17 + 0xa4) = *(int *)(lVar17 + 0xa4) + -1;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8);
LAB_00dfc52c:
  *pplVar16 = pplVar13[(int)(uVar14 - 1)];
  *(uint *)(lVar11 + 0x104) = uVar14 - 1;
LAB_00dfc53c:
  plVar7 = (long *)plVar4[0xc];
  (**(code **)(*plVar4 + 0x78))(plVar4);
  (**(code **)(*plVar7 + 0x20))(plVar7,plVar4);
  iVar18 = 3;
  iVar5 = 3;
  bVar3 = local_88._1_1_;
joined_r0x00dfc20c:
  if (((bVar3 >> 1 & 1) != 0) && (iVar5 = iVar18, local_80 != (void *)0x0)) {
    operator_delete__(local_80);
  }
  if (iVar5 != 0) goto LAB_00dfc5e0;
  goto LAB_00dfc028;
LAB_00dfc5e0:
  if (iVar5 != 3) goto LAB_00dfbfcc;
  goto LAB_00dfbfc8;
}


