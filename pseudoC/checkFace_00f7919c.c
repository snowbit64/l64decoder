// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkFace
// Entry Point: 00f7919c
// Size: 168 bytes
// Signature: undefined __thiscall checkFace(btSoftBody * this, int param_1, int param_2, int param_3)


/* btSoftBody::checkFace(int, int, int) const */

bool __thiscall btSoftBody::checkFace(btSoftBody *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  uVar1 = *(uint *)(this + 0x3b4);
  if ((int)uVar1 < 1) {
    return false;
  }
  lVar4 = *(long *)(this + 0x380);
  uVar3 = 0;
  lVar5 = lVar4 + (long)param_1 * 0x78;
  lVar6 = lVar4 + (long)param_2 * 0x78;
  plVar7 = (long *)(*(long *)(this + 0x3c0) + 0x20);
  lVar4 = lVar4 + (long)param_3 * 0x78;
  bVar2 = true;
  do {
    lVar8 = plVar7[-2];
    if (((lVar8 == lVar4 || lVar8 == lVar5) || lVar8 == lVar6) &&
       (((lVar8 = plVar7[-1], lVar8 == lVar4 || (lVar8 == lVar5)) || (lVar8 == lVar6)))) {
      lVar8 = *plVar7;
      if (lVar8 == lVar4) {
        return bVar2;
      }
      if (lVar8 == lVar5) {
        return bVar2;
      }
      if (lVar8 == lVar6) {
        return bVar2;
      }
    }
    uVar3 = uVar3 + 1;
    plVar7 = plVar7 + 9;
    bVar2 = uVar3 < uVar1;
    if (uVar1 == uVar3) {
      return bVar2;
    }
  } while( true );
}


