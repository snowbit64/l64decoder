// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetIFS
// Entry Point: 00d54fe8
// Size: 160 bytes
// Signature: undefined __thiscall GetIFS(TMMesh * this, Vec3 * param_1, Vec3 * param_2)


/* HACD::TMMesh::GetIFS(HACD::Vec3<double>*, HACD::Vec3<long>*) */

void __thiscall HACD::TMMesh::GetIFS(TMMesh *this,Vec3 *param_1,Vec3 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar3 = *(long *)(this + 0x18);
  lVar2 = *(long *)(this + 0x58);
  if (lVar3 != 0) {
    lVar4 = 0;
    puVar6 = *(undefined8 **)(this + 0x10);
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      puVar6[4] = lVar4;
      lVar4 = lVar4 + 1;
      puVar5[-1] = *puVar6;
      *puVar5 = puVar6[1];
      puVar1 = puVar6 + 2;
      puVar6 = (undefined8 *)puVar6[7];
      puVar5[1] = *puVar1;
      puVar5 = puVar5 + 3;
      *(undefined8 **)(this + 0x10) = puVar6;
    } while (lVar3 != lVar4);
  }
  if (lVar2 != 0) {
    lVar3 = *(long *)(this + 0x50);
    puVar5 = (undefined8 *)(param_2 + 8);
    do {
      lVar4 = *(long *)(lVar3 + 0x28);
      puVar5[-1] = *(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x20);
      lVar7 = *(long *)(lVar3 + 0x30);
      *puVar5 = *(undefined8 *)(lVar4 + 0x20);
      puVar5[1] = *(undefined8 *)(lVar7 + 0x20);
      if (*(long *)(this + 0x58) != 0) {
        lVar3 = *(long *)(lVar3 + 0xd8);
        *(long *)(this + 0x50) = lVar3;
      }
      lVar2 = lVar2 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar2 != 0);
  }
  return;
}


