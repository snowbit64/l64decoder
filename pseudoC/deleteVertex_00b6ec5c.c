// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteVertex
// Entry Point: 00b6ec5c
// Size: 244 bytes
// Signature: undefined __thiscall deleteVertex(Brep * this, ushort param_1)


/* Brep::deleteVertex(unsigned short) */

void __thiscall Brep::deleteVertex(Brep *this,ushort param_1)

{
  undefined8 *puVar1;
  Brep *pBVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  
  pBVar2 = this + 0x2fb5;
  if (*pBVar2 != (Brep)0x0) {
    BrepSpatialHash::erase((BrepSpatialHash *)(this + 0x10),this,param_1);
  }
  lVar6 = *(long *)(this + 0x2ef0);
  uVar5 = ((uint)(*(int *)(this + 0x2ef8) - (int)lVar6) >> 4) - 1;
  if ((uVar5 & 0xffff) != (uint)param_1) {
    uVar4 = *(ushort *)(lVar6 + (ulong)(ushort)uVar5 * 0x10 + 0xc);
    if (uVar4 != 0xffff) {
      lVar8 = *(long *)(this + 0x2f50);
      do {
        puVar9 = (ushort *)(lVar8 + (ulong)uVar4 * 0xc);
        uVar4 = puVar9[1];
        *puVar9 = param_1;
      } while (uVar4 != 0xffff);
    }
    if (*pBVar2 != (Brep)0x0) {
      BrepSpatialHash::erase((BrepSpatialHash *)(this + 0x10),this,(ushort)uVar5);
      lVar6 = *(long *)(this + 0x2ef0);
    }
    puVar3 = (undefined8 *)(lVar6 + ((ulong)uVar5 & 0xffff) * 0x10);
    puVar1 = (undefined8 *)(lVar6 + (ulong)param_1 * 0x10);
    uVar7 = *puVar3;
    *(undefined8 *)((long)puVar1 + 6) = *(undefined8 *)((long)puVar3 + 6);
    *puVar1 = uVar7;
    if (*pBVar2 != (Brep)0x0) {
      BrepSpatialHash::insert((BrepSpatialHash *)(this + 0x10),this,param_1);
    }
  }
  *(long *)(this + 0x2ef8) = *(long *)(this + 0x2ef8) + -0x10;
  return;
}


