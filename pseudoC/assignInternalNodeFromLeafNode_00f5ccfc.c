// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assignInternalNodeFromLeafNode
// Entry Point: 00f5ccfc
// Size: 72 bytes
// Signature: undefined __thiscall assignInternalNodeFromLeafNode(btQuantizedBvh * this, int param_1, int param_2)


/* btQuantizedBvh::assignInternalNodeFromLeafNode(int, int) */

void __thiscall
btQuantizedBvh::assignInternalNodeFromLeafNode(btQuantizedBvh *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (this[0x40] != (btQuantizedBvh)0x0) {
    puVar1 = (undefined8 *)(*(long *)(this + 0x98) + (long)param_2 * 0x10);
    uVar3 = *puVar1;
    puVar2 = (undefined8 *)(*(long *)(this + 0xb8) + (long)param_1 * 0x10);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar3;
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(this + 0x58) + (long)param_2 * 0x40);
  puVar2 = (undefined8 *)(*(long *)(this + 0x78) + (long)param_1 * 0x40);
  uVar5 = puVar1[4];
  uVar4 = puVar1[7];
  uVar3 = puVar1[6];
  uVar9 = puVar1[1];
  uVar8 = *puVar1;
  uVar7 = puVar1[3];
  uVar6 = puVar1[2];
  puVar2[5] = puVar1[5];
  puVar2[4] = uVar5;
  puVar2[7] = uVar4;
  puVar2[6] = uVar3;
  puVar2[1] = uVar9;
  *puVar2 = uVar8;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  return;
}


