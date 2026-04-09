// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f5a3d4
// Size: 812 bytes
// Signature: undefined __thiscall serialize(btQuantizedBvh * this, void * param_1, btSerializer * param_2)


/* btQuantizedBvh::serialize(void*, btSerializer*) const */

char * __thiscall
btQuantizedBvh::serialize(btQuantizedBvh *this,void *param_1,btSerializer *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  btQuantizedBvh bVar5;
  undefined2 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  uVar14 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x18);
  bVar5 = this[0x40];
  uVar13 = *(undefined4 *)(this + 0x1c);
  iVar3 = *(int *)(this + 0x6c);
  *(undefined4 *)((long)param_1 + 0x30) = uVar14;
  *(uint *)((long)param_1 + 0x34) = (uint)(byte)bVar5;
  *(undefined4 *)((long)param_1 + 0x14) = uVar13;
  uVar14 = *(undefined4 *)(this + 0x20);
  *(int *)((long)param_1 + 0x38) = iVar3;
  *(undefined4 *)((long)param_1 + 0x18) = uVar14;
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 8);
  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x34);
  if (iVar3 == 0) {
    *(undefined8 *)((long)param_1 + 0x40) = 0;
  }
  else {
    lVar7 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x78));
    *(long *)((long)param_1 + 0x40) = lVar7;
    if (lVar7 != 0) {
      uVar4 = *(uint *)(this + 0x6c);
      uVar12 = (ulong)uVar4;
      lVar7 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x30,uVar12);
      if (0 < (int)uVar4) {
        puVar8 = (undefined4 *)(*(long *)(this + 0x78) + 0x14);
        puVar11 = (undefined4 *)(*(long *)(lVar7 + 8) + 0x14);
        do {
          uVar12 = uVar12 - 1;
          uVar15 = *(undefined8 *)(puVar8 + 3);
          puVar11[-1] = puVar8[-1];
          uVar13 = *puVar8;
          *(undefined8 *)(puVar11 + 3) = uVar15;
          uVar14 = puVar8[5];
          *puVar11 = uVar13;
          uVar13 = puVar8[1];
          puVar11[5] = uVar14;
          puVar11[1] = uVar13;
          puVar11[2] = puVar8[2];
          puVar11[-5] = puVar8[-5];
          puVar11[-4] = puVar8[-4];
          puVar11[-3] = puVar8[-3];
          puVar1 = puVar8 + -2;
          puVar8 = puVar8 + 0x10;
          puVar11[-2] = *puVar1;
          puVar11 = puVar11 + 0xc;
        } while (uVar12 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar7,"btOptimizedBvhNodeData",0x59415241);
    }
  }
  iVar3 = *(int *)(this + 0xac);
  *(int *)((long)param_1 + 0x3c) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)((long)param_1 + 0x48) = 0;
  }
  else {
    lVar7 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0xb8));
    *(long *)((long)param_1 + 0x48) = lVar7;
    if (lVar7 != 0) {
      uVar4 = *(uint *)(this + 0xac);
      uVar12 = (ulong)uVar4;
      lVar7 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x10,uVar12);
      if (0 < (int)uVar4) {
        puVar10 = (undefined2 *)(*(long *)(this + 0xb8) + 6);
        puVar9 = (undefined2 *)(*(long *)(lVar7 + 8) + 6);
        do {
          uVar12 = uVar12 - 1;
          uVar14 = *(undefined4 *)(puVar10 + 3);
          *puVar9 = *puVar10;
          uVar6 = puVar10[1];
          *(undefined4 *)(puVar9 + 3) = uVar14;
          puVar9[1] = uVar6;
          puVar9[2] = puVar10[2];
          puVar9[-3] = puVar10[-3];
          puVar9[-2] = puVar10[-2];
          puVar2 = puVar10 + -1;
          puVar10 = puVar10 + 8;
          puVar9[-1] = *puVar2;
          puVar9 = puVar9 + 8;
        } while (uVar12 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar7,"btQuantizedBvhNodeData",0x59415241);
    }
  }
  iVar3 = *(int *)(this + 0xd4);
  *(undefined4 *)((long)param_1 + 0x58) = *(undefined4 *)(this + 200);
  *(int *)((long)param_1 + 0x5c) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)((long)param_1 + 0x50) = 0;
  }
  else {
    lVar7 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0xe0));
    *(long *)((long)param_1 + 0x50) = lVar7;
    if (lVar7 != 0) {
      uVar4 = *(uint *)(this + 0xd4);
      uVar12 = (ulong)uVar4;
      lVar7 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x14,uVar12);
      if (0 < (int)uVar4) {
        puVar10 = (undefined2 *)(*(long *)(this + 0xe0) + 6);
        puVar9 = (undefined2 *)(*(long *)(lVar7 + 8) + 10);
        do {
          uVar12 = uVar12 - 1;
          uVar15 = *(undefined8 *)(puVar10 + 3);
          puVar9[2] = *puVar10;
          uVar6 = puVar10[1];
          *(undefined8 *)(puVar9 + -5) = uVar15;
          puVar9[3] = uVar6;
          puVar9[4] = puVar10[2];
          puVar9[-1] = puVar10[-3];
          *puVar9 = puVar10[-2];
          puVar2 = puVar10 + -1;
          puVar10 = puVar10 + 0x10;
          puVar9[1] = *puVar2;
          puVar9 = puVar9 + 10;
        } while (uVar12 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar7,"btBvhSubtreeInfoData",0x59415241);
    }
  }
  return "btQuantizedBvhFloatData";
}


