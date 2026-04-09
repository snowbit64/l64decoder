// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteWedge
// Entry Point: 00b6efdc
// Size: 180 bytes
// Signature: undefined __thiscall deleteWedge(Brep * this, ushort param_1)


/* Brep::deleteWedge(unsigned short) */

void __thiscall Brep::deleteWedge(Brep *this,ushort param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(long *)(this + 0x2f98);
  uVar1 = (ulong)(((uint)(*(int *)(this + 0x2fa0) - (int)lVar2) >> 3) * -0x5555 - 1) & 0xffff;
  if (*(short *)(lVar2 + uVar1 * 0x18 + 0x14) != 0) {
    puVar6 = (undefined8 *)(lVar2 + uVar1 * 0x18);
    puVar3 = (undefined8 *)(lVar2 + (ulong)param_1 * 0x18);
    uVar8 = puVar6[1];
    uVar7 = *puVar6;
    *(undefined8 *)((long)puVar3 + 0xe) = *(undefined8 *)((long)puVar6 + 0xe);
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    uVar4 = (ulong)(*(long *)(this + 0x2f70) - *(long *)(this + 0x2f68)) >> 3;
    if ((uVar4 & 0xfffffffc) != 0) {
      uVar5 = 0;
      lVar2 = 2;
      do {
        if (((uVar5 & 3) != 0) &&
           ((uint)*(ushort *)(*(long *)(this + 0x2f68) + lVar2) == (uint)uVar1)) {
          *(ushort *)(*(long *)(this + 0x2f68) + lVar2) = param_1;
        }
        uVar5 = uVar5 + 1;
        lVar2 = lVar2 + 8;
      } while (((uint)uVar4 & 0xfffffffc) != uVar5);
    }
  }
  *(long *)(this + 0x2fa0) = *(long *)(this + 0x2fa0) + -0x18;
  return;
}


