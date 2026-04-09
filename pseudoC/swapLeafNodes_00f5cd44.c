// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swapLeafNodes
// Entry Point: 00f5cd44
// Size: 176 bytes
// Signature: undefined __thiscall swapLeafNodes(btQuantizedBvh * this, int param_1, int param_2)


/* btQuantizedBvh::swapLeafNodes(int, int) */

void __thiscall btQuantizedBvh::swapLeafNodes(btQuantizedBvh *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (this[0x40] == (btQuantizedBvh)0x0) {
    uVar5 = -(ulong)((uint)param_2 >> 0x1f) & 0xffffffc000000000 | (ulong)(uint)param_2 << 6;
    puVar1 = (undefined8 *)(*(long *)(this + 0x58) + uVar5);
    puVar2 = (undefined8 *)(*(long *)(this + 0x58) + (long)param_1 * 0x40);
    uVar8 = puVar1[4];
    uVar10 = puVar1[7];
    uVar9 = puVar1[6];
    uVar15 = puVar1[1];
    uVar14 = *puVar1;
    uVar13 = puVar1[3];
    uVar12 = puVar1[2];
    uVar17 = puVar2[5];
    uVar16 = puVar2[4];
    uVar19 = puVar2[7];
    uVar18 = puVar2[6];
    puVar2[5] = puVar1[5];
    puVar2[4] = uVar8;
    puVar2[7] = uVar10;
    puVar2[6] = uVar9;
    uVar9 = puVar2[1];
    uVar8 = *puVar2;
    uVar11 = puVar2[3];
    uVar10 = puVar2[2];
    puVar2[1] = uVar15;
    *puVar2 = uVar14;
    puVar2[3] = uVar13;
    puVar2[2] = uVar12;
    puVar1 = (undefined8 *)(*(long *)(this + 0x58) + uVar5);
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    puVar1[5] = uVar17;
    puVar1[4] = uVar16;
    puVar1[7] = uVar19;
    puVar1[6] = uVar18;
  }
  else {
    uVar5 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_2 << 4;
    lVar6 = *(long *)(this + 0x98);
    uVar7 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
    puVar1 = (undefined8 *)(lVar6 + uVar5);
    uVar8 = *puVar1;
    puVar2 = (undefined8 *)(lVar6 + uVar7);
    uVar10 = puVar2[1];
    uVar9 = *puVar2;
    puVar2 = (undefined8 *)(lVar6 + uVar7);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar8;
    puVar1 = (undefined8 *)(*(long *)(this + 0x98) + uVar5);
    puVar1[1] = uVar10;
    *puVar1 = uVar9;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


