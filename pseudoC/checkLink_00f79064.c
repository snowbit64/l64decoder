// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkLink
// Entry Point: 00f79064
// Size: 180 bytes
// Signature: undefined __thiscall checkLink(btSoftBody * this, int param_1, int param_2)


/* btSoftBody::checkLink(int, int) const */

bool __thiscall btSoftBody::checkLink(btSoftBody *this,int param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = (ulong)*(uint *)(this + 0x394);
  if ((int)*(uint *)(this + 0x394) < 1) {
    return false;
  }
  lVar5 = *(long *)(this + 0x3a0);
  lVar3 = *(long *)(this + 0x380) + (long)param_1 * 0x78;
  lVar4 = *(long *)(this + 0x380) + (long)param_2 * 0x78;
  if ((*(long *)(lVar5 + 0x10) == lVar3) && (*(long *)(lVar5 + 0x18) == lVar4)) {
    return true;
  }
  if ((*(long *)(lVar5 + 0x10) == lVar4) && (*(long *)(lVar5 + 0x18) == lVar3)) {
    return true;
  }
  plVar6 = (long *)(lVar5 + 0x60);
  uVar8 = 1;
  do {
    uVar7 = uVar2;
    if (uVar2 == uVar8) break;
    plVar1 = plVar6 + -1;
    lVar5 = *plVar6;
    uVar7 = uVar8;
    if ((*plVar1 == lVar3) && (lVar5 == lVar4)) break;
    plVar6 = plVar6 + 9;
    uVar8 = uVar8 + 1;
  } while ((*plVar1 != lVar4) || (lVar5 != lVar3));
  return uVar7 < uVar2;
}


