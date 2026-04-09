// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00bb210c
// Size: 480 bytes
// Signature: undefined __thiscall serialize(BtTriangleInfoMap * this, void * param_1, btSerializer * param_2)


/* BtTriangleInfoMap::serialize(void*, btSerializer*) const */

char * __thiscall
BtTriangleInfoMap::serialize(BtTriangleInfoMap *this,void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar17 = *(undefined8 *)(this + 8);
  uVar1 = *(undefined4 *)(this + 0x20);
  iVar2 = *(int *)(this + 0x24);
  *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)param_1 = uVar17;
  uVar16 = *(undefined4 *)(this + 0x1c);
  *(int *)((long)param_1 + 0x14) = iVar2;
  *(undefined4 *)((long)param_1 + 0x18) = uVar1;
  *(undefined4 *)((long)param_1 + 0x10) = uVar16;
  if (iVar2 == 0) {
    *(undefined8 *)((long)param_1 + 0x20) = 0;
    iVar2 = *(int *)((long)param_1 + 0x18);
  }
  else {
    lVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x28));
    *(long *)((long)param_1 + 0x20) = lVar5;
    if (lVar5 != 0) {
      uVar3 = *(uint *)((long)param_1 + 0x14);
      lVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2,8,(ulong)uVar3);
      if (0 < (int)uVar3) {
        lVar7 = 0;
        lVar9 = *(long *)(lVar5 + 8);
        do {
          *(undefined8 *)(lVar9 + lVar7) = *(undefined8 *)(*(long *)(this + 0x28) + lVar7);
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar3 * 8 - lVar7 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar5,"BtTriangleInfoData",0x59415241,*(undefined8 *)(this + 0x28));
    }
    iVar2 = *(int *)((long)param_1 + 0x18);
  }
  if (iVar2 == 0) {
    *(undefined8 *)((long)param_1 + 0x28) = 0;
    goto LAB_00bb229c;
  }
  lVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x30));
  *(long *)((long)param_1 + 0x28) = lVar5;
  if (lVar5 == 0) goto LAB_00bb229c;
  uVar3 = *(uint *)((long)param_1 + 0x18);
  uVar15 = (ulong)uVar3;
  lVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2,4,uVar15);
  puVar6 = *(undefined4 **)(this + 0x30);
  if (0 < (int)uVar3) {
    puVar11 = *(undefined4 **)(lVar5 + 8);
    if ((uVar3 < 8) || ((puVar11 < puVar6 + uVar15 && (puVar6 < puVar11 + uVar15)))) {
      uVar10 = 0;
      puVar8 = puVar11;
    }
    else {
      uVar10 = uVar15 & 0xfffffff8;
      puVar13 = (undefined8 *)(puVar6 + 4);
      puVar8 = puVar11 + uVar10;
      puVar12 = (undefined8 *)(puVar11 + 4);
      uVar14 = uVar10;
      do {
        puVar4 = puVar13 + -1;
        uVar17 = puVar13[-2];
        uVar19 = puVar13[1];
        uVar18 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar14 = uVar14 - 8;
        puVar12[-1] = *puVar4;
        puVar12[-2] = uVar17;
        puVar12[1] = uVar19;
        *puVar12 = uVar18;
        puVar12 = puVar12 + 4;
      } while (uVar14 != 0);
      if (uVar10 == uVar15) goto LAB_00bb2268;
    }
    lVar7 = uVar15 - uVar10;
    puVar6 = puVar6 + uVar10;
    do {
      lVar7 = lVar7 + -1;
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
LAB_00bb2268:
  (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar5,&DAT_004dbc25,0x59415241);
LAB_00bb229c:
  return "BtTriangleInfoMapData";
}


