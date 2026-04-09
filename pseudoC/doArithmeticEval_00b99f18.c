// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doArithmeticEval
// Entry Point: 00b99f18
// Size: 3952 bytes
// Signature: undefined __cdecl doArithmeticEval(char * param_1, uint param_2, uint param_3, int * param_4)


/* WARNING: Type propagation algorithm not settling */
/* StringArithmeticUtil::doArithmeticEval(char const*, unsigned int, unsigned int, int*) */

bool StringArithmeticUtil::doArithmeticEval(char *param_1,uint param_2,uint param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  undefined8 local_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  long local_68;
  
  uVar12 = (ulong)param_2;
  lVar3 = tpidr_el0;
  uVar17 = (ulong)param_3;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_2 < param_3) {
    uVar12 = (ulong)param_2;
    do {
      if (0x20 < (byte)param_1[uVar12] ||
          (1L << ((ulong)(byte)param_1[uVar12] & 0x3f) & 0x100000600U) == 0) goto LAB_00b99f94;
      uVar12 = uVar12 + 1;
    } while (param_3 != (uint)uVar12);
  }
  else {
LAB_00b99f94:
    uVar18 = uVar12 & 0xffffffff;
    uVar11 = (uint)uVar12;
    if (uVar11 < param_3) {
      uVar17 = (ulong)param_3;
      do {
        uVar12 = uVar17 - 1;
        if (0x20 < (byte)param_1[uVar17 - 1] ||
            (1L << ((ulong)(byte)param_1[uVar17 - 1] & 0x3f) & 0x100000600U) == 0) {
          uVar14 = (uint)uVar17;
          if (uVar11 == uVar14) goto LAB_00b99fe8;
          iVar8 = 0;
          uVar19 = uVar12 & 0xffffffff;
          uVar21 = 1;
          uVar16 = uVar17 & 0xffffffff;
          goto LAB_00b9a02c;
        }
        uVar17 = uVar12;
      } while (uVar18 < uVar12);
      uVar17 = uVar12 & 0xffffffff;
    }
    if ((uint)uVar17 != uVar11) goto LAB_00b9a360;
  }
  goto LAB_00b99fe8;
  while( true ) {
    if ((iVar8 == 0 && 1 < uVar21) && (iVar7 = strncmp(param_1 + uVar19,"||",2), iVar7 == 0)) {
      local_70 = (int)uVar16 + 1;
      local_6c = (uint)uVar19;
      uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
      if (((uVar12 & 1) == 0) ||
         (uVar12 = doArithmeticEval(param_1,local_70,uVar14,(int *)&local_74), (uVar12 & 1) == 0))
      goto LAB_00b99fe8;
      bVar4 = ((uint)local_80 | local_74) != 0;
      goto LAB_00b9a178;
    }
    uVar2 = (int)uVar16 - 1;
    uVar16 = (ulong)uVar2;
    uVar19 = uVar19 - 1;
    uVar21 = uVar21 + 1;
    if (uVar2 <= uVar11) break;
LAB_00b9a02c:
    cVar1 = param_1[uVar19];
    if (cVar1 == ')') {
      iVar8 = iVar8 + 1;
    }
    iVar8 = iVar8 - (uint)(cVar1 == '(');
    if (iVar8 < 0) break;
  }
  iVar8 = 0;
  uVar19 = uVar12 & 0xffffffff;
  uVar21 = 1;
  uVar16 = uVar17 & 0xffffffff;
LAB_00b9a0e8:
  cVar1 = param_1[uVar19];
  if (cVar1 == ')') {
    iVar8 = iVar8 + 1;
  }
  iVar8 = iVar8 - (uint)(cVar1 == '(');
  if (-1 < iVar8) {
    if ((iVar8 != 0 || uVar21 < 2) || (iVar7 = strncmp(param_1 + uVar19,"&&",2), iVar7 != 0))
    goto LAB_00b9a0d4;
    local_70 = (int)uVar16 + 1;
    local_6c = (uint)uVar19;
    uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
    if (((uVar12 & 1) != 0) &&
       (uVar12 = doArithmeticEval(param_1,local_70,uVar14,(int *)&local_74), (uVar12 & 1) != 0)) {
      bVar4 = (uint)local_80 != 0 && local_74 != 0;
LAB_00b9a178:
      bVar5 = true;
      *param_4 = (uint)bVar4;
      goto LAB_00b9ab1c;
    }
    goto LAB_00b99fe8;
  }
  goto LAB_00b9a188;
LAB_00b9a0d4:
  uVar2 = (int)uVar16 - 1;
  uVar16 = (ulong)uVar2;
  uVar19 = uVar19 - 1;
  uVar21 = uVar21 + 1;
  if (uVar2 <= uVar11) goto LAB_00b9a188;
  goto LAB_00b9a0e8;
LAB_00b9a188:
  iVar8 = 0;
  uVar16 = uVar12 & 0xffffffff;
  iVar7 = 0;
  do {
    cVar1 = param_1[uVar16];
    if (cVar1 == ')') {
      iVar8 = iVar8 + 1;
    }
    iVar8 = iVar8 - (uint)(cVar1 == '(');
    iVar20 = (int)uVar12;
    if (iVar8 < 0) break;
    if ((iVar8 == 0 && iVar7 != 1) && (cVar1 == '|')) {
      local_70 = uVar14 + iVar7;
      local_6c = (uint)uVar16;
      uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
      if (((uVar12 & 1) == 0) ||
         (uVar12 = doArithmeticEval(param_1,local_70,uVar14,(int *)&local_74), (uVar12 & 1) == 0))
      goto LAB_00b99fe8;
      uVar14 = local_74 | (uint)local_80;
      goto LAB_00b9ab14;
    }
    uVar21 = iVar20 + iVar7;
    uVar16 = uVar16 - 1;
    iVar7 = iVar7 + -1;
  } while (uVar11 < uVar21);
  iVar8 = 0;
  uVar16 = uVar12 & 0xffffffff;
  iVar7 = 0;
  do {
    cVar1 = param_1[uVar16];
    if (cVar1 == ')') {
      iVar8 = iVar8 + 1;
    }
    iVar8 = iVar8 - (uint)(cVar1 == '(');
    if (iVar8 < 0) break;
    if ((iVar8 == 0 && iVar7 != 1) && (cVar1 == '^')) {
      local_70 = uVar14 + iVar7;
      local_6c = (uint)uVar16;
      uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
      if (((uVar12 & 1) == 0) ||
         (uVar12 = doArithmeticEval(param_1,local_70,uVar14,(int *)&local_74), (uVar12 & 1) == 0))
      goto LAB_00b99fe8;
      uVar14 = local_74 ^ (uint)local_80;
      goto LAB_00b9ab14;
    }
    uVar21 = iVar20 + iVar7;
    uVar16 = uVar16 - 1;
    iVar7 = iVar7 + -1;
  } while (uVar11 < uVar21);
  iVar8 = 0;
  uVar12 = uVar12 & 0xffffffff;
  iVar7 = 0;
  do {
    cVar1 = param_1[uVar12];
    if (cVar1 == ')') {
      iVar8 = iVar8 + 1;
    }
    iVar8 = iVar8 - (uint)(cVar1 == '(');
    if (iVar8 < 0) break;
    if ((iVar8 == 0 && iVar7 != 1) && (cVar1 == '&')) {
      local_70 = uVar14 + iVar7;
      local_6c = (uint)uVar12;
      uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
      if (((uVar12 & 1) == 0) ||
         (uVar12 = doArithmeticEval(param_1,local_70,uVar14,(int *)&local_74), (uVar12 & 1) == 0))
      goto LAB_00b99fe8;
      uVar14 = local_74 & (uint)local_80;
      goto LAB_00b9ab14;
    }
    uVar21 = iVar20 + iVar7;
    uVar12 = uVar12 - 1;
    iVar7 = iVar7 + -1;
  } while (uVar11 < uVar21);
LAB_00b9a360:
  uVar21 = (uint)uVar17;
  uVar12 = spliceInfix(param_1,uVar11,uVar21,"!=",(int *)&local_6c,(int *)&local_70);
  if ((uVar12 & 1) == 0) {
    uVar12 = spliceInfix(param_1,uVar11,uVar21,"==",(int *)&local_6c,(int *)&local_70);
    if ((uVar12 & 1) == 0) {
      uVar12 = spliceInfix(param_1,uVar11,uVar21,">=",(int *)&local_6c,(int *)&local_70);
      if ((uVar12 & 1) == 0) {
        uVar12 = spliceInfix(param_1,uVar11,uVar21,">",(int *)&local_6c,(int *)&local_70);
        if ((uVar12 & 1) == 0) {
          uVar12 = spliceInfix(param_1,uVar11,uVar21,"<=",(int *)&local_6c,(int *)&local_70);
          if ((uVar12 & 1) == 0) {
            uVar12 = spliceInfix(param_1,uVar11,uVar21,"<",(int *)&local_6c,(int *)&local_70);
            if ((uVar12 & 1) == 0) {
              uVar12 = spliceInfix(param_1,uVar11,uVar21,"+",(int *)&local_6c,(int *)&local_70);
              if ((uVar12 & 1) == 0) {
                uVar12 = spliceInfix(param_1,uVar11,uVar21,"-",(int *)&local_6c,(int *)&local_70);
                if (((uVar12 & 1) == 0) || (local_6c == uVar11)) {
                  uVar12 = spliceInfix(param_1,uVar11,uVar21,"*",(int *)&local_6c,(int *)&local_70);
                  if ((uVar12 & 1) == 0) {
                    uVar12 = spliceInfix(param_1,uVar11,uVar21,"/",(int *)&local_6c,(int *)&local_70
                                        );
                    if ((uVar12 & 1) == 0) {
                      uVar12 = spliceInfix(param_1,uVar11,uVar21,"%",(int *)&local_6c,
                                           (int *)&local_70);
                      if ((uVar12 & 1) == 0) {
                        pcVar13 = param_1 + uVar18;
                        cVar1 = *pcVar13;
                        if (cVar1 == '!') {
                          uVar12 = doArithmeticEval(param_1,uVar11 + 1,uVar21,(int *)&local_80);
                          if ((uVar12 & 1) != 0) {
                            uVar14 = (uint)((uint)local_80 == 0);
                            goto LAB_00b9ab14;
                          }
                        }
                        else if (cVar1 == '-') {
                          uVar12 = doArithmeticEval(param_1,uVar11 + 1,uVar21,(int *)&local_80);
                          if ((uVar12 & 1) != 0) {
                            uVar14 = -(uint)local_80;
                            goto LAB_00b9ab14;
                          }
                        }
                        else if (cVar1 == '~') {
                          uVar12 = doArithmeticEval(param_1,uVar11 + 1,uVar21,(int *)&local_80);
                          if ((uVar12 & 1) != 0) {
                            uVar14 = ~(uint)local_80;
                            goto LAB_00b9ab14;
                          }
                        }
                        else {
                          iVar8 = strncmp(pcVar13,"length(",7);
                          if (iVar8 == 0) {
                            if (param_1[uVar21 - 1] == ')') {
                              uVar14 = (uVar21 - uVar11) - 8;
                              goto LAB_00b9ab14;
                            }
                          }
                          else {
                            if (cVar1 != '(') {
                              uVar21 = uVar21 - uVar11;
                              pcVar9 = (char *)operator_new__((ulong)(uVar21 + 1));
                              memcpy(pcVar9,pcVar13,(ulong)uVar21);
                              pcVar9[uVar21] = '\0';
                              lVar10 = strtol(pcVar9,(char **)&local_80,0);
                              *param_4 = (int)lVar10;
                              bVar5 = (char *)CONCAT44(local_80._4_4_,(uint)local_80) ==
                                      pcVar9 + uVar21;
                              operator_delete__(pcVar9);
                              goto LAB_00b9ab1c;
                            }
                            if (param_1[uVar21 - 1] == ')') {
                              bVar6 = doArithmeticEval(param_1,uVar11 + 1,uVar21 - 1,param_4);
                              if (*(long *)(lVar3 + 0x28) == local_68) {
                                return (bool)(bVar6 & 1);
                              }
                              goto LAB_00b9ae84;
                            }
                          }
                        }
                      }
                      else {
                        uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
                        if (((uVar12 & 1) != 0) &&
                           (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74),
                           (uVar12 & 1) != 0)) {
                          if (local_74 == 0) {
                            pcVar9 = (char *)LogManager::getInstance();
                            pcVar13 = "Warning: Modulo with zero in string arithmetic evaluation.\n"
                            ;
                            goto LAB_00b9ae0c;
                          }
                          iVar8 = 0;
                          if (local_74 != 0) {
                            iVar8 = (int)(uint)local_80 / (int)local_74;
                          }
                          uVar14 = (uint)local_80 - iVar8 * local_74;
                          goto LAB_00b9ab14;
                        }
                      }
                    }
                    else {
                      uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
                      if (((uVar12 & 1) != 0) &&
                         (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74),
                         (uVar12 & 1) != 0)) {
                        if (local_74 == 0) {
                          pcVar9 = (char *)LogManager::getInstance();
                          pcVar13 = "Warning: Dividing by zero in string arithmetic evaluation.\n";
LAB_00b9ae0c:
                          LogManager::warnf(pcVar9,pcVar13);
                          uVar14 = 0;
                        }
                        else {
                          uVar14 = 0;
                          if (local_74 != 0) {
                            uVar14 = (int)(uint)local_80 / (int)local_74;
                          }
                        }
                        goto LAB_00b9ab14;
                      }
                    }
                  }
                  else {
                    uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
                    if (((uVar12 & 1) != 0) &&
                       (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74),
                       (uVar12 & 1) != 0)) {
                      uVar14 = local_74 * (uint)local_80;
                      goto LAB_00b9ab14;
                    }
                  }
                }
                else {
                  uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
                  if (((uVar12 & 1) != 0) &&
                     (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74),
                     (uVar12 & 1) != 0)) {
                    uVar14 = (uint)local_80 - local_74;
                    goto LAB_00b9ab14;
                  }
                }
              }
              else {
                uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
                if (((uVar12 & 1) != 0) &&
                   (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74),
                   (uVar12 & 1) != 0)) {
                  uVar14 = local_74 + (uint)local_80;
                  goto LAB_00b9ab14;
                }
              }
LAB_00b99fe8:
              bVar5 = false;
              goto LAB_00b9ab1c;
            }
            uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
            if (((uVar12 & 1) == 0) ||
               (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74),
               (uVar12 & 1) == 0)) {
              if (uVar11 < local_6c) {
                pbVar15 = (byte *)(param_1 + (int)local_6c);
                do {
                  pbVar15 = pbVar15 + -1;
                  if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0)
                  break;
                  local_6c = local_6c - 1;
                } while (uVar11 < local_6c);
              }
              if (local_70 < uVar21) {
                pbVar15 = (byte *)(param_1 + (int)local_70);
                do {
                  if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0)
                  break;
                  local_70 = local_70 + 1;
                  pbVar15 = pbVar15 + 1;
                } while (local_70 < uVar21);
              }
              uVar11 = local_6c - uVar11;
              uVar21 = uVar21 - local_70;
              uVar14 = uVar21;
              if (uVar11 <= uVar21) {
                uVar14 = uVar11;
              }
              local_80._0_4_ = strncmp(param_1 + uVar18,param_1 + (int)local_70,(ulong)uVar14);
              if (-1 < (int)(uint)local_80) {
                uVar14 = (uint)((uint)local_80 == 0);
                uVar11 = (uint)(uVar11 < uVar21);
                goto LAB_00b9a764;
              }
              goto LAB_00b9ab10;
            }
            uVar14 = (uint)((int)(uint)local_80 < (int)local_74);
          }
          else {
            uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
            if (((uVar12 & 1) == 0) ||
               (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74),
               (uVar12 & 1) == 0)) {
              if (uVar11 < local_6c) {
                pbVar15 = (byte *)(param_1 + (int)local_6c);
                do {
                  pbVar15 = pbVar15 + -1;
                  if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0)
                  break;
                  local_6c = local_6c - 1;
                } while (uVar11 < local_6c);
              }
              if (local_70 < uVar21) {
                pbVar15 = (byte *)(param_1 + (int)local_70);
                do {
                  if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0)
                  break;
                  local_70 = local_70 + 1;
                  pbVar15 = pbVar15 + 1;
                } while (local_70 < uVar21);
              }
              uVar11 = local_6c - uVar11;
              uVar21 = uVar21 - local_70;
              uVar14 = uVar21;
              if (uVar11 <= uVar21) {
                uVar14 = uVar11;
              }
              local_80._0_4_ = strncmp(param_1 + uVar18,param_1 + (int)local_70,(ulong)uVar14);
              if ((int)(uint)local_80 < 0) goto LAB_00b9ab10;
              uVar14 = (uint)((uint)local_80 == 0);
              uVar11 = (uint)(uVar11 <= uVar21);
LAB_00b9a764:
              uVar14 = uVar14 & uVar11;
            }
            else {
              uVar14 = (uint)((int)(uint)local_80 <= (int)local_74);
            }
          }
        }
        else {
          uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
          if (((uVar12 & 1) == 0) ||
             (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74), (uVar12 & 1) == 0
             )) {
            if (uVar11 < local_6c) {
              pbVar15 = (byte *)(param_1 + (int)local_6c);
              do {
                pbVar15 = pbVar15 + -1;
                if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0) break;
                local_6c = local_6c - 1;
              } while (uVar11 < local_6c);
            }
            if (local_70 < uVar21) {
              pbVar15 = (byte *)(param_1 + (int)local_70);
              do {
                if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0) break;
                local_70 = local_70 + 1;
                pbVar15 = pbVar15 + 1;
              } while (local_70 < uVar21);
            }
            uVar11 = local_6c - uVar11;
            uVar21 = uVar21 - local_70;
            uVar14 = uVar21;
            if (uVar11 <= uVar21) {
              uVar14 = uVar11;
            }
            local_80._0_4_ = strncmp(param_1 + uVar18,param_1 + (int)local_70,(ulong)uVar14);
            if (0 < (int)(uint)local_80) goto LAB_00b9ab10;
            uVar14 = (uint)((uint)local_80 == 0 && uVar21 < uVar11);
          }
          else {
            uVar14 = (uint)((int)local_74 < (int)(uint)local_80);
          }
        }
      }
      else {
        uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
        if (((uVar12 & 1) == 0) ||
           (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74), (uVar12 & 1) == 0))
        {
          if (uVar11 < local_6c) {
            pbVar15 = (byte *)(param_1 + (int)local_6c);
            do {
              pbVar15 = pbVar15 + -1;
              if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0) break;
              local_6c = local_6c - 1;
            } while (uVar11 < local_6c);
          }
          if (local_70 < uVar21) {
            pbVar15 = (byte *)(param_1 + (int)local_70);
            do {
              if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0) break;
              local_70 = local_70 + 1;
              pbVar15 = pbVar15 + 1;
            } while (local_70 < uVar21);
          }
          uVar11 = local_6c - uVar11;
          uVar21 = uVar21 - local_70;
          uVar14 = uVar21;
          if (uVar11 <= uVar21) {
            uVar14 = uVar11;
          }
          local_80._0_4_ = strncmp(param_1 + uVar18,param_1 + (int)local_70,(ulong)uVar14);
          if ((int)(uint)local_80 < 1) {
            uVar14 = (uint)((uint)local_80 == 0);
            uVar11 = (uint)(uVar21 <= uVar11);
            goto LAB_00b9a764;
          }
LAB_00b9ab10:
          uVar14 = 1;
        }
        else {
          uVar14 = (uint)((int)local_74 <= (int)(uint)local_80);
        }
      }
    }
    else {
      uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
      if (((uVar12 & 1) == 0) ||
         (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74), (uVar12 & 1) == 0)) {
        if (uVar11 < local_6c) {
          pbVar15 = (byte *)(param_1 + (int)local_6c);
          do {
            pbVar15 = pbVar15 + -1;
            if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0) break;
            local_6c = local_6c - 1;
          } while (uVar11 < local_6c);
        }
        if (local_70 < uVar21) {
          pbVar15 = (byte *)(param_1 + (int)local_70);
          do {
            if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0) break;
            local_70 = local_70 + 1;
            pbVar15 = pbVar15 + 1;
          } while (local_70 < uVar21);
        }
        if (local_6c - uVar11 != uVar21 - local_70) goto LAB_00b9a620;
        iVar8 = strncmp(param_1 + uVar18,param_1 + (int)local_70,(ulong)(local_6c - uVar11));
        uVar14 = (uint)(iVar8 == 0);
      }
      else {
        uVar14 = (uint)((uint)local_80 == local_74);
      }
    }
LAB_00b9ab14:
    bVar5 = true;
    *param_4 = uVar14;
  }
  else {
    uVar12 = doArithmeticEval(param_1,uVar11,local_6c,(int *)&local_80);
    if (((uVar12 & 1) != 0) &&
       (uVar12 = doArithmeticEval(param_1,local_70,uVar21,(int *)&local_74), (uVar12 & 1) != 0)) {
      uVar14 = (uint)((uint)local_80 != local_74);
      goto LAB_00b9ab14;
    }
    if (uVar11 < local_6c) {
      pbVar15 = (byte *)(param_1 + (int)local_6c);
      do {
        pbVar15 = pbVar15 + -1;
        if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0) break;
        local_6c = local_6c - 1;
      } while (uVar11 < local_6c);
    }
    if (local_70 < uVar21) {
      pbVar15 = (byte *)(param_1 + (int)local_70);
      do {
        if (0x20 < *pbVar15 || (1L << ((ulong)*pbVar15 & 0x3f) & 0x100000600U) == 0) break;
        local_70 = local_70 + 1;
        pbVar15 = pbVar15 + 1;
      } while (local_70 < uVar21);
    }
    if (local_6c - uVar11 == uVar21 - local_70) {
      iVar8 = strncmp(param_1 + uVar18,param_1 + (int)local_70,(ulong)(local_6c - uVar11));
      uVar14 = (uint)(iVar8 != 0);
      goto LAB_00b9ab14;
    }
LAB_00b9a620:
    bVar5 = true;
    *param_4 = 1;
  }
LAB_00b9ab1c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return bVar5;
  }
LAB_00b9ae84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


