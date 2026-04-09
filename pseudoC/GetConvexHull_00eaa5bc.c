// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetConvexHull
// Entry Point: 00eaa5bc
// Size: 152 bytes
// Signature: undefined __thiscall GetConvexHull(VHACD * this, uint param_1, ConvexHull * param_2)


/* VHACD::VHACD::GetConvexHull(unsigned int, VHACD::IVHACD::ConvexHull&) const */

void __thiscall VHACD::VHACD::GetConvexHull(VHACD *this,uint param_1,ConvexHull *param_2)

{
  VHACD *pVVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  pVVar1 = this + 0x10;
  if (*(long *)(this + 0x220) != 0x40) {
    pVVar1 = *(VHACD **)(this + 0x210);
  }
  lVar5 = *(long *)(pVVar1 + (ulong)param_1 * 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x920);
  *(int *)(param_2 + 0x10) = (int)*(undefined8 *)(lVar5 + 0x608);
  *(int *)(param_2 + 0x14) = (int)uVar4;
  lVar2 = lVar5;
  if (*(long *)(lVar5 + 0x610) != 0x40) {
    lVar2 = *(long *)(lVar5 + 0x600);
  }
  *(long *)param_2 = lVar2;
  lVar2 = lVar5 + 0x618;
  if (*(long *)(lVar5 + 0x928) != 0x40) {
    lVar2 = *(long *)(lVar5 + 0x918);
  }
  *(long *)(param_2 + 8) = lVar2;
  uVar4 = Mesh::ComputeVolume();
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  puVar3 = (undefined8 *)Mesh::ComputeCenter();
  *(undefined8 *)(param_2 + 0x20) = *puVar3;
  *(undefined8 *)(param_2 + 0x28) = puVar3[1];
  *(undefined8 *)(param_2 + 0x30) = puVar3[2];
  return;
}


