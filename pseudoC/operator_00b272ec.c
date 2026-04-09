// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00b272ec
// Size: 352 bytes
// Signature: undefined __thiscall operator=(Atom * this, Atom * param_1)


/* JSONUtil::Atom::TEMPNAMEPLACEHOLDERVALUE(JSONUtil::Atom const&) */

Atom * __thiscall JSONUtil::Atom::operator=(Atom *this,Atom *param_1)

{
  Atom AVar1;
  size_t sVar2;
  Array *this_00;
  undefined *__dest;
  undefined2 uVar3;
  char *__s;
  Object *pOVar4;
  Array *pAVar5;
  uint uVar6;
  undefined8 uVar7;
  
  switch(*param_1) {
  case (Atom)0x0:
    clear();
    *(undefined2 *)this = 0;
    break;
  case (Atom)0x1:
    AVar1 = param_1[8];
    clear();
    this[8] = AVar1;
    *(undefined2 *)this = 1;
    break;
  case (Atom)0x2:
    uVar7 = *(undefined8 *)(param_1 + 8);
    AVar1 = param_1[1];
    clear();
    this[1] = AVar1;
    *(undefined8 *)(this + 8) = uVar7;
    *this = (Atom)0x2;
    break;
  case (Atom)0x3:
    __s = *(char **)(param_1 + 8);
    clear();
    *(undefined2 *)this = 3;
    if (__s == (char *)0x0) {
      uVar6 = 0;
    }
    else {
      sVar2 = strlen(__s);
      uVar6 = (uint)sVar2;
    }
    __dest = (undefined *)operator_new__((ulong)(uVar6 + 1));
    *(undefined **)(this + 8) = __dest;
    if (uVar6 == 0) {
      *__dest = 0;
    }
    else {
      memcpy(__dest,__s,(ulong)uVar6);
      __dest[uVar6] = 0;
    }
    break;
  case (Atom)0x4:
    pOVar4 = *(Object **)(param_1 + 8);
    this_00 = (Array *)operator_new(0x28);
                    /* try { // try from 00b273b0 to 00b273b7 has its CatchHandler @ 00b27450 */
    Object::Object((Object *)this_00,pOVar4);
    clear();
    uVar3 = 4;
    goto LAB_00b273ec;
  case (Atom)0x5:
    pAVar5 = *(Array **)(param_1 + 8);
    this_00 = (Array *)operator_new(0x18);
                    /* try { // try from 00b273d8 to 00b273df has its CatchHandler @ 00b2744c */
    Array::Array(this_00,pAVar5);
    clear();
    uVar3 = 5;
LAB_00b273ec:
    *(undefined2 *)this = uVar3;
    *(Array **)(this + 8) = this_00;
    break;
  default:
    return this;
  }
  return this;
}


