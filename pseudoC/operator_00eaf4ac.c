// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00eaf4ac
// Size: 380 bytes
// Signature: undefined __thiscall operator=(ICHull * this, ICHull * param_1)


/* VHACD::ICHull::TEMPNAMEPLACEHOLDERVALUE(VHACD::ICHull&) */

ICHull * __thiscall VHACD::ICHull::operator=(ICHull *this,ICHull *param_1)

{
  ICHull *pIVar1;
  ICHull *pIVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != this) {
    TMMesh::Copy((TMMesh *)this,(TMMesh *)param_1);
    uVar5 = *(ulong *)(this + 0x248);
    uVar4 = *(ulong *)(param_1 + 0x240);
    pIVar2 = *(ICHull **)(this + 0x238);
    if (uVar5 < uVar4) {
      if (pIVar2 != (ICHull *)0x0) {
        operator_delete__(pIVar2);
        uVar4 = *(ulong *)(param_1 + 0x240);
      }
      uVar5 = *(ulong *)(param_1 + 0x248);
      uVar3 = uVar5 << 3;
      if (uVar5 >> 0x3d != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      *(ulong *)(this + 0x248) = uVar5;
      pIVar2 = (ICHull *)operator_new__(uVar3);
      *(ICHull **)(this + 0x238) = pIVar2;
    }
    *(ulong *)(this + 0x240) = uVar4;
    pIVar1 = this + 0x38;
    if (uVar5 != 0x40) {
      pIVar1 = pIVar2;
    }
    pIVar2 = param_1 + 0x38;
    if (*(long *)(param_1 + 0x248) != 0x40) {
      pIVar2 = *(ICHull **)(param_1 + 0x238);
    }
    memcpy(pIVar1,pIVar2,uVar4 << 3);
    uVar5 = *(ulong *)(this + 0x460);
    uVar4 = *(ulong *)(param_1 + 0x458);
    pIVar2 = *(ICHull **)(this + 0x450);
    if (uVar5 < uVar4) {
      if (pIVar2 != (ICHull *)0x0) {
        operator_delete__(pIVar2);
        uVar4 = *(ulong *)(param_1 + 0x458);
      }
      uVar5 = *(ulong *)(param_1 + 0x460);
      uVar3 = uVar5 << 3;
      if (uVar5 >> 0x3d != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      *(ulong *)(this + 0x460) = uVar5;
      pIVar2 = (ICHull *)operator_new__(uVar3);
      *(ICHull **)(this + 0x450) = pIVar2;
    }
    *(ulong *)(this + 0x458) = uVar4;
    pIVar1 = this + 0x250;
    if (uVar5 != 0x40) {
      pIVar1 = pIVar2;
    }
    pIVar2 = param_1 + 0x250;
    if (*(long *)(param_1 + 0x460) != 0x40) {
      pIVar2 = *(ICHull **)(param_1 + 0x450);
    }
    memcpy(pIVar1,pIVar2,uVar4 << 3);
    uVar5 = *(ulong *)(this + 0x678);
    uVar4 = *(ulong *)(param_1 + 0x670);
    pIVar2 = *(ICHull **)(this + 0x668);
    if (uVar5 < uVar4) {
      if (pIVar2 != (ICHull *)0x0) {
        operator_delete__(pIVar2);
        uVar4 = *(ulong *)(param_1 + 0x670);
      }
      uVar5 = *(ulong *)(param_1 + 0x678);
      uVar3 = uVar5 << 3;
      if (uVar5 >> 0x3d != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      *(ulong *)(this + 0x678) = uVar5;
      pIVar2 = (ICHull *)operator_new__(uVar3);
      *(ICHull **)(this + 0x668) = pIVar2;
    }
    *(ulong *)(this + 0x670) = uVar4;
    pIVar1 = this + 0x468;
    if (uVar5 != 0x40) {
      pIVar1 = pIVar2;
    }
    pIVar2 = param_1 + 0x468;
    if (*(long *)(param_1 + 0x678) != 0x40) {
      pIVar2 = *(ICHull **)(param_1 + 0x668);
    }
    memcpy(pIVar1,pIVar2,uVar4 << 3);
    this[0x698] = param_1[0x698];
  }
  return this;
}


