// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFromValue
// Entry Point: 00b27b68
// Size: 848 bytes
// Signature: undefined __thiscall setFromValue(Atom * this, Value * param_1)


/* JSONUtil::Atom::setFromValue(Value const&) */

void __thiscall JSONUtil::Atom::setFromValue(Atom *this,Value *param_1)

{
  Atom AVar1;
  uint3 uVar2;
  size_t sVar3;
  Atom *this_00;
  undefined8 *this_01;
  undefined2 *puVar4;
  undefined *__dest;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  char *__s;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  float fVar11;
  undefined8 uVar12;
  double dVar13;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    dVar13 = (double)(long)*(int *)param_1;
    clear();
    uVar5 = 0x502;
    goto LAB_00b27c24;
  case 2:
    dVar13 = (double)NEON_ucvtf((ulong)*(uint *)param_1);
    clear();
    uVar5 = 0x602;
    goto LAB_00b27c24;
  case 3:
    AVar1 = *(Atom *)param_1;
    clear();
    uVar5 = 1;
    this[8] = AVar1;
    goto LAB_00b27e5c;
  case 4:
    dVar13 = (double)*(float *)param_1;
    clear();
    uVar5 = 0x902;
    goto LAB_00b27c24;
  case 5:
    dVar13 = *(double *)param_1;
    clear();
    uVar5 = 0xa02;
LAB_00b27c24:
    *(undefined2 *)this = uVar5;
    *(double *)(this + 8) = dVar13;
    return;
  case 6:
    __s = *(char **)param_1;
    clear();
    *(undefined2 *)this = 3;
    if (__s == (char *)0x0) {
      uVar8 = 0;
    }
    else {
      sVar3 = strlen(__s);
      uVar8 = (uint)sVar3;
    }
    __dest = (undefined *)operator_new__((ulong)(uVar8 + 1));
    *(undefined **)(this + 8) = __dest;
    if (uVar8 != 0) {
      memcpy(__dest,__s,(ulong)uVar8);
      __dest[uVar8] = 0;
      return;
    }
    *__dest = 0;
    return;
  default:
    clear();
    *(undefined2 *)this = 0;
    return;
  case 9:
    this_01 = (undefined8 *)operator_new(0x18);
    uVar2 = *(uint3 *)(param_1 + 0xc);
    this_01[1] = 0;
    this_01[2] = 0;
    *this_01 = 0;
    if (1 < uVar2) {
      lVar7 = 0;
      uVar9 = 0;
      do {
        this_00 = (Atom *)operator_new(0x10);
        lVar6 = *(long *)param_1;
        *this_00 = (Atom)0x0;
                    /* try { // try from 00b27cb0 to 00b27cb3 has its CatchHandler @ 00b27eb8 */
        setFromValue(this_00,(Value *)(lVar6 + lVar7));
        Array::addAtom((Array *)this_01,this_00);
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar9 < *(uint3 *)(param_1 + 0xc) >> 1);
    }
    break;
  case 10:
    lVar7 = *(long *)param_1;
    this_01 = (undefined8 *)operator_new(0x18);
    uVar2 = *(uint3 *)(param_1 + 0xc);
    this_01[1] = 0;
    this_01[2] = 0;
    *this_01 = 0;
    if (1 < uVar2) {
      uVar9 = 0;
      do {
        puVar4 = (undefined2 *)operator_new(0x10);
        bVar10 = *(byte *)(lVar7 + uVar9);
        *puVar4 = 0x202;
        uVar12 = NEON_ucvtf((ulong)bVar10);
        *(undefined8 *)(puVar4 + 4) = uVar12;
        Array::addAtom((Array *)this_01,(Atom *)puVar4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint3 *)(param_1 + 0xc) >> 1);
    }
    break;
  case 0xb:
    this_01 = (undefined8 *)operator_new(0x18);
    uVar2 = *(uint3 *)(param_1 + 0xc);
    this_01[1] = 0;
    this_01[2] = 0;
    *this_01 = 0;
    if (1 < uVar2) {
      uVar9 = 0;
      do {
        puVar4 = (undefined2 *)operator_new(0x10);
        lVar7 = *(long *)param_1;
        *puVar4 = 0x502;
        *(double *)(puVar4 + 4) = (double)(long)*(int *)(lVar7 + uVar9 * 4);
        Array::addAtom((Array *)this_01,(Atom *)puVar4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint3 *)(param_1 + 0xc) >> 1);
    }
    break;
  case 0xc:
    this_01 = (undefined8 *)operator_new(0x18);
    uVar2 = *(uint3 *)(param_1 + 0xc);
    this_01[1] = 0;
    this_01[2] = 0;
    *this_01 = 0;
    if (1 < uVar2) {
      uVar9 = 0;
      do {
        puVar4 = (undefined2 *)operator_new(0x10);
        fVar11 = *(float *)(*(long *)param_1 + uVar9 * 4);
        *puVar4 = 0x902;
        *(double *)(puVar4 + 4) = (double)fVar11;
        Array::addAtom((Array *)this_01,(Atom *)puVar4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint3 *)(param_1 + 0xc) >> 1);
    }
  }
  clear();
  uVar5 = 5;
  *(undefined8 **)(this + 8) = this_01;
LAB_00b27e5c:
  *(undefined2 *)this = uVar5;
  return;
}


