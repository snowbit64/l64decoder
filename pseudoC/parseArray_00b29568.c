// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseArray
// Entry Point: 00b29568
// Size: 572 bytes
// Signature: undefined __cdecl parseArray(Atom * param_1, char * * param_2, ParamSet * param_3)


/* JSONUtil::parseArray(JSONUtil::Atom&, char const*&, JSONUtil::ParamSet const*) */

undefined8 JSONUtil::parseArray(Atom *param_1,char **param_2,ParamSet *param_3)

{
  void **ppvVar1;
  byte bVar2;
  byte *pbVar3;
  void **this;
  undefined2 *puVar4;
  ulong uVar5;
  uint uVar6;
  void **ppvVar7;
  void *pvVar8;
  byte *pbVar9;
  
  pbVar9 = (byte *)*param_2;
  bVar2 = *pbVar9;
  while (bVar2 - 1 < 0x20) {
    pbVar9 = pbVar9 + 1;
    *param_2 = (char *)pbVar9;
    bVar2 = *pbVar9;
  }
  if (bVar2 == 0x5b) {
    *param_2 = (char *)(pbVar9 + 1);
    this = (void **)operator_new(0x18);
    this[1] = (void *)0x0;
    this[2] = (void *)0x0;
    *this = (void *)0x0;
    bVar2 = pbVar9[1];
    if (bVar2 - 1 < 0x20) {
      pbVar3 = pbVar9 + 2;
      do {
        pbVar9 = pbVar3;
        *param_2 = (char *)pbVar9;
        bVar2 = *pbVar9;
        pbVar3 = pbVar9 + 1;
      } while (bVar2 - 1 < 0x20);
      pbVar9 = pbVar9 + -1;
    }
    if (bVar2 == 0x5d) {
      pbVar9 = pbVar9 + 2;
      goto LAB_00b29614;
    }
LAB_00b2963c:
    puVar4 = (undefined2 *)operator_new(0x10);
    *puVar4 = 0;
    uVar5 = parse((Atom *)puVar4,param_2,param_3);
    if ((uVar5 & 1) == 0) {
      Atom::clear();
      operator_delete(puVar4);
      ppvVar7 = (void **)*this;
      ppvVar1 = (void **)this[1];
      if (ppvVar7 == ppvVar1) goto LAB_00b29774;
      do {
        pvVar8 = *ppvVar7;
        if (pvVar8 != (void *)0x0) {
          Atom::clear();
          operator_delete(pvVar8);
        }
        ppvVar7 = ppvVar7 + 1;
      } while (ppvVar7 != ppvVar1);
    }
    else {
      Array::addAtom((Array *)this,(Atom *)puVar4);
      pbVar9 = (byte *)*param_2;
      bVar2 = *pbVar9;
      while (bVar2 - 1 < 0x20) {
        pbVar9 = pbVar9 + 1;
        *param_2 = (char *)pbVar9;
        bVar2 = *pbVar9;
      }
      if (bVar2 == 0x2c) {
        *param_2 = (char *)(pbVar9 + 1);
        uVar6 = (uint)pbVar9[1];
        if (uVar6 - 1 < 0x20) {
          pbVar3 = pbVar9 + 2;
          do {
            pbVar9 = pbVar3;
            *param_2 = (char *)pbVar9;
            uVar6 = (uint)*pbVar9;
            pbVar3 = pbVar9 + 1;
          } while (uVar6 - 1 < 0x20);
          pbVar9 = pbVar9 + -1;
        }
        if (uVar6 == 0x5d) goto LAB_00b29730;
        goto LAB_00b2963c;
      }
      if (bVar2 == 0x5d) {
        pbVar9 = pbVar9 + 1;
        goto LAB_00b29614;
      }
      ppvVar7 = (void **)*this;
      ppvVar1 = (void **)this[1];
      if (ppvVar7 == ppvVar1) goto LAB_00b29774;
      do {
        pvVar8 = *ppvVar7;
        if (pvVar8 != (void *)0x0) {
          Atom::clear();
          operator_delete(pvVar8);
        }
        ppvVar7 = ppvVar7 + 1;
      } while (ppvVar7 != ppvVar1);
    }
    ppvVar7 = (void **)*this;
LAB_00b29774:
    if (ppvVar7 != (void **)0x0) {
      this[1] = ppvVar7;
      operator_delete(ppvVar7);
    }
    operator_delete(this);
  }
  return 0;
LAB_00b29730:
  pbVar9 = pbVar9 + 2;
LAB_00b29614:
  *param_2 = (char *)pbVar9;
  Atom::clear();
  *(void ***)(param_1 + 8) = this;
  *(undefined2 *)param_1 = 5;
  return 1;
}


