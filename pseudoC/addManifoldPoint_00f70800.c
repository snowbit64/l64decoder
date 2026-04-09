// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addManifoldPoint
// Entry Point: 00f70800
// Size: 208 bytes
// Signature: undefined __cdecl addManifoldPoint(btManifoldPoint * param_1, bool param_2)


/* btPersistentManifold::addManifoldPoint(btManifoldPoint const&, bool) */

void btPersistentManifold::addManifoldPoint(btManifoldPoint *param_1,bool param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)(ulong)param_2;
  uVar1 = *(uint *)(param_1 + 0x318);
  if (uVar1 == 4) {
    uVar1 = sortCachedPoints((btPersistentManifold *)param_1,(btManifoldPoint *)puVar2);
    if ((*(long *)(param_1 + (long)(int)uVar1 * 0xc0 + 0x78) != 0) &&
       (gContactDestroyedCallback != (code *)0x0)) {
      (*gContactDestroyedCallback)();
      *(long *)(param_1 + (long)(int)uVar1 * 0xc0 + 0x78) = 0;
    }
  }
  else {
    *(uint *)(param_1 + 0x318) = uVar1 + 1;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar5 = puVar2[5];
  uVar4 = puVar2[4];
  uVar3 = puVar2[6];
  uVar9 = puVar2[1];
  uVar8 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x40) = puVar2[7];
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x10) = uVar9;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 8) = uVar8;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x18) = uVar6;
  uVar5 = puVar2[0xd];
  uVar4 = puVar2[0xc];
  uVar3 = puVar2[0xe];
  uVar9 = puVar2[9];
  uVar8 = puVar2[8];
  uVar7 = puVar2[0xb];
  uVar6 = puVar2[10];
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x80) = puVar2[0xf];
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x50) = uVar9;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x48) = uVar8;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x60) = uVar7;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x58) = uVar6;
  uVar4 = puVar2[0x15];
  uVar3 = puVar2[0x14];
  uVar5 = puVar2[0x16];
  uVar7 = puVar2[0x11];
  uVar6 = puVar2[0x10];
  uVar9 = puVar2[0x13];
  uVar8 = puVar2[0x12];
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0xc0) = puVar2[0x17];
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0xb8) = uVar5;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0xb0) = uVar4;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0xa8) = uVar3;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x90) = uVar7;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x88) = uVar6;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0xa0) = uVar9;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0xc0 + 0x98) = uVar8;
  return;
}


