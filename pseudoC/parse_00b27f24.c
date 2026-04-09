// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parse
// Entry Point: 00b27f24
// Size: 1132 bytes
// Signature: undefined __cdecl parse(Atom * param_1, char * * param_2, ParamSet * param_3)


/* JSONUtil::parse(JSONUtil::Atom&, char const*&, JSONUtil::ParamSet const*) */

uint JSONUtil::parse(Atom *param_1,char **param_2,ParamSet *param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 *this;
  ulong uVar5;
  byte bVar6;
  ExtType EVar7;
  byte *__s1;
  char *pcVar8;
  ulong uVar9;
  ulong __n;
  undefined8 local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __s1 = (byte *)*param_2;
  bVar6 = *__s1;
  while (bVar6 - 1 < 0x20) {
    __s1 = __s1 + 1;
    *param_2 = (char *)__s1;
    bVar6 = *__s1;
  }
  if (bVar6 == 0x28) {
    uVar5 = 0;
    do {
      __n = uVar5;
      if (__s1[__n + 1] == 0) goto LAB_00b2830c;
      uVar5 = __n + 1;
    } while (__s1[__n + 1] != 0x29);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      pcVar8 = (char *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      if (uVar5 != 1) goto LAB_00b2808c;
    }
    else {
      uVar9 = __n + 0x10 & 0xfffffffffffffff0;
      pcVar8 = (char *)operator_new(uVar9);
      local_80 = uVar9 | 1;
      local_78 = __n;
      local_70 = pcVar8;
LAB_00b2808c:
      memcpy(pcVar8,__s1 + 1,__n);
    }
    pcVar2 = local_70;
    uVar9 = local_80;
    pcVar8[__n] = '\0';
    *param_2 = (char *)(__s1 + 1 + uVar5);
    pcVar8 = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pcVar8 = local_70;
    }
    iVar3 = strcmp(pcVar8,"none");
    if (iVar3 == 0) {
      EVar7 = 0;
    }
    else {
      iVar3 = strcmp(pcVar8,"char");
      if (iVar3 == 0) {
        EVar7 = 1;
      }
      else {
        iVar3 = strcmp(pcVar8,"uchar");
        if (iVar3 == 0) {
          EVar7 = 2;
        }
        else {
          iVar3 = strcmp(pcVar8,"short");
          if (iVar3 == 0) {
            EVar7 = 3;
          }
          else {
            iVar3 = strcmp(pcVar8,"ushort");
            if (iVar3 == 0) {
              EVar7 = 4;
            }
            else {
              iVar3 = strcmp(pcVar8,"int");
              if (iVar3 == 0) {
                EVar7 = 5;
              }
              else {
                iVar3 = strcmp(pcVar8,"uint");
                if (iVar3 == 0) {
                  EVar7 = 6;
                }
                else {
                  iVar3 = strcmp(pcVar8,"long");
                  if (iVar3 == 0) {
                    EVar7 = 7;
                  }
                  else {
                    iVar3 = strcmp(pcVar8,"ulong");
                    if (iVar3 == 0) {
                      EVar7 = 8;
                    }
                    else {
                      iVar3 = strcmp(pcVar8,"float");
                      if (iVar3 == 0) {
                        EVar7 = 9;
                      }
                      else {
                        iVar3 = strcmp(pcVar8,"double");
                        EVar7 = 10;
                        if (iVar3 != 0) {
                          EVar7 = 0;
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
    if ((uVar9 & 1) != 0) {
      operator_delete(pcVar2);
    }
    __s1 = (byte *)*param_2;
    bVar6 = *__s1;
    if (0x5a < bVar6) goto LAB_00b28214;
LAB_00b27ff0:
    if (bVar6 == 0x22) {
      uVar4 = parseString(param_1,param_2,param_3);
      goto LAB_00b28310;
    }
    if (((bVar6 != 0x25) || (param_3 == (ParamSet *)0x0)) || (uVar4 = __s1[1] - 0x30, 9 < uVar4))
    goto LAB_00b28270;
    if (uVar4 < *(uint *)param_3) {
      *param_2 = (char *)(__s1 + 2);
      Atom::operator=(param_1,(Atom *)(*(long *)(param_3 + 8) + (ulong)uVar4 * 0x10));
      uVar4 = 1;
      if ((EVar7 != 0) && (*param_1 == (Atom)0x2)) {
        uVar4 = 1;
        param_1[1] = SUB41(EVar7,0);
      }
      goto LAB_00b28310;
    }
  }
  else {
    EVar7 = 0;
    if (bVar6 < 0x5b) goto LAB_00b27ff0;
LAB_00b28214:
    if (bVar6 == 0x5b) {
      uVar4 = parseArray(param_1,param_2,param_3);
      goto LAB_00b28310;
    }
    if (bVar6 != 0x7b) {
LAB_00b28270:
      iVar3 = strncmp((char *)__s1,"null",4);
      if (iVar3 == 0) {
        *param_2 = (char *)(__s1 + 4);
        Atom::clear();
        uVar4 = 1;
        *(undefined2 *)param_1 = 0;
      }
      else {
        iVar3 = strncmp((char *)__s1,"false",5);
        if (iVar3 == 0) {
          *param_2 = (char *)(__s1 + 5);
          Atom::clear();
          uVar4 = 1;
          param_1[8] = (Atom)0x0;
          *(undefined2 *)param_1 = 1;
        }
        else {
          iVar3 = strncmp((char *)__s1,"true",4);
          if (iVar3 == 0) {
            *param_2 = (char *)(__s1 + 4);
            Atom::clear();
            uVar4 = 1;
            *(undefined2 *)param_1 = 1;
            param_1[8] = (Atom)0x1;
          }
          else {
            uVar4 = parseNumber(param_1,param_2,EVar7);
          }
        }
      }
      goto LAB_00b28310;
    }
    this = (undefined8 *)operator_new(0x28);
    this[4] = 0;
    *(undefined4 *)(this + 4) = 0x3f800000;
    this[1] = 0;
    *this = 0;
    this[3] = 0;
    this[2] = 0;
    uVar5 = parseObject((Object *)this,param_2,param_3);
    if ((uVar5 & 1) != 0) {
      Atom::clear();
      uVar4 = 1;
      *(undefined8 **)(param_1 + 8) = this;
      *(undefined2 *)param_1 = 4;
      goto LAB_00b28310;
    }
    Object::~Object((Object *)this);
    operator_delete(this);
  }
LAB_00b2830c:
  uVar4 = 0;
LAB_00b28310:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


