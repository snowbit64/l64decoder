// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: erase
// Entry Point: 00b6f76c
// Size: 216 bytes
// Signature: undefined __thiscall erase(BrepSpatialHash * this, Brep * param_1, ushort param_2)


/* BrepSpatialHash::erase(Brep const*, unsigned short) */

void __thiscall BrepSpatialHash::erase(BrepSpatialHash *this,Brep *param_1,ushort param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  float fVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x2ef0) + (ulong)param_2 * 0x10);
  uVar8 = *(undefined8 *)(puVar1 + 1);
  fVar7 = (float)NEON_fmadd(*puVar1,0x42c80000,0x3f000000);
  uVar3 = (uint)((int)((float)uVar8 * 100.0 + 0.5) * 0x127409f ^ (int)fVar7 * 0x466f45d ^
                (int)((float)((ulong)uVar8 >> 0x20) * 100.0 + 0.5) * 0x4f9ffb7) % 500;
  puVar5 = *(ushort **)(this + (ulong)uVar3 * 0x18);
  puVar4 = *(ushort **)(this + (ulong)uVar3 * 0x18 + 8);
  if (puVar5 == puVar4) {
LAB_00b6f820:
    puVar6 = puVar5;
    if (puVar5 == puVar4 + -1) goto LAB_00b6f83c;
  }
  else {
    do {
      if (*puVar5 == param_2) goto LAB_00b6f820;
      puVar5 = puVar5 + 1;
      puVar6 = puVar4;
    } while (puVar5 != puVar4);
  }
  uVar2 = *puVar6;
  *puVar6 = puVar4[-1];
  puVar4[-1] = uVar2;
LAB_00b6f83c:
  *(ushort **)(this + (ulong)uVar3 * 0x18 + 8) = puVar4 + -1;
  return;
}


