// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f60de4
// Size: 500 bytes
// Signature: undefined __thiscall serialize(btConvexHullShape * this, void * param_1, btSerializer * param_2)


/* btConvexHullShape::serialize(void*, btSerializer*) const */

char * __thiscall
btConvexHullShape::serialize(btConvexHullShape *this,void *param_1,btSerializer *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar5 = (**(code **)(*(long *)param_2 + 0x50))(param_2,this);
  lVar6 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar5);
  *(long *)param_1 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar5);
  }
  uVar2 = *(undefined4 *)(this + 8);
  uVar3 = *(uint *)(this + 0x7c);
  uVar14 = (ulong)uVar3;
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x2c);
  uVar15 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 8) = uVar2;
  *(uint *)((long)param_1 + 0x48) = uVar3;
  *(undefined4 *)((long)param_1 + 0x24) = uVar15;
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x3c);
  if (uVar3 == 0) {
    *(undefined8 *)((long)param_1 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + 0x40) = 0;
    return "btConvexHullShapeData";
  }
  uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x88));
  lVar6 = *(long *)param_2;
  *(undefined8 *)((long)param_1 + 0x38) = uVar5;
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  lVar6 = (**(code **)(lVar6 + 0x20))(param_2,0x10,uVar14);
  puVar7 = *(undefined4 **)(this + 0x88);
  if (0 < (int)uVar3) {
    puVar8 = *(undefined4 **)(lVar6 + 8);
    if ((uVar3 < 8) || ((puVar8 < puVar7 + uVar14 * 4 && (puVar7 < puVar8 + uVar14 * 4)))) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar14 & 0xfffffff8;
      puVar12 = (undefined8 *)(puVar7 + 0x10);
      puVar11 = (undefined8 *)(puVar8 + 0x10);
      uVar13 = uVar9;
      do {
        uVar18 = puVar12[-7];
        uVar17 = puVar12[-8];
        uVar16 = puVar12[-5];
        uVar5 = puVar12[-6];
        uVar13 = uVar13 - 8;
        puVar4 = puVar12 + -3;
        uVar21 = puVar12[-4];
        uVar20 = puVar12[-1];
        uVar19 = puVar12[-2];
        uVar25 = puVar12[1];
        uVar24 = *puVar12;
        uVar23 = puVar12[3];
        uVar22 = puVar12[2];
        uVar29 = puVar12[5];
        uVar28 = puVar12[4];
        uVar27 = puVar12[7];
        uVar26 = puVar12[6];
        puVar12 = puVar12 + 0x10;
        puVar11[-3] = *puVar4;
        puVar11[-4] = uVar21;
        puVar11[-1] = uVar20;
        puVar11[-2] = uVar19;
        puVar11[-7] = uVar18;
        puVar11[-8] = uVar17;
        puVar11[-5] = uVar16;
        puVar11[-6] = uVar5;
        puVar11[5] = uVar29;
        puVar11[4] = uVar28;
        puVar11[7] = uVar27;
        puVar11[6] = uVar26;
        puVar11[1] = uVar25;
        *puVar11 = uVar24;
        puVar11[3] = uVar23;
        puVar11[2] = uVar22;
        puVar11 = puVar11 + 0x10;
      } while (uVar13 != 0);
      if (uVar9 == uVar14) goto LAB_00f60f4c;
      puVar8 = puVar8 + uVar9 * 4;
    }
    lVar10 = uVar14 - uVar9;
    puVar7 = puVar7 + uVar9 * 4 + 2;
    do {
      lVar10 = lVar10 + -1;
      *puVar8 = puVar7[-2];
      puVar8[1] = puVar7[-1];
      puVar8[2] = *puVar7;
      puVar1 = puVar7 + 1;
      puVar7 = puVar7 + 4;
      puVar8[3] = *puVar1;
      puVar8 = puVar8 + 4;
    } while (lVar10 != 0);
  }
LAB_00f60f4c:
  (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar6,"btVector3FloatData",0x59415241);
  return "btConvexHullShapeData";
}


