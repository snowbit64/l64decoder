// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isContractible
// Entry Point: 00b6ad78
// Size: 260 bytes
// Signature: undefined __thiscall isContractible(Brep * this, uint param_1)


/* Brep::isContractible(unsigned int) const */

undefined8 __thiscall Brep::isContractible(Brep *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0x2f68);
  if (*(short *)(lVar7 + (ulong)param_1 * 8 + 2) != -0x8000) {
    uVar2 = param_1 + 2;
    if ((param_1 - 1 & 3) != 0) {
      uVar2 = param_1 - 1;
    }
    uVar4 = *(ushort *)(lVar7 + (ulong)param_1 * 8);
    uVar5 = *(ushort *)(lVar7 + (ulong)uVar2 * 8);
    uVar6 = isOuterCone(this,uVar5);
    if ((((uVar6 & 1) == 0) || (uVar6 = isOuterCone(this,uVar4), (uVar6 & 1) == 0)) ||
       (*(int *)(*(long *)(this + 0x2f68) + (ulong)param_1 * 8 + 4) == -1)) {
      uVar2 = *(uint *)(*(long *)(this + 0x2f50) + (ulong)uVar5 * 0xc + 4);
      uVar3 = uVar2;
      while ((uVar3 == param_1 ||
             (*(ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar3 * 8) != uVar4))) {
        uVar1 = uVar3 + 2;
        if ((uVar3 - 1 & 3) != 0) {
          uVar1 = uVar3 - 1;
        }
        uVar3 = *(uint *)(*(long *)(this + 0x2f68) + (ulong)uVar1 * 8 + 4);
        if (uVar3 == uVar2 || uVar3 == 0xffffffff) {
          return 1;
        }
      }
    }
  }
  return 0;
}


