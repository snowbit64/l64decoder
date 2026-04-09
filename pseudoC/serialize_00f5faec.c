// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f5faec
// Size: 664 bytes
// Signature: undefined __thiscall serialize(btCompoundShape * this, void * param_1, btSerializer * param_2)


/* btCompoundShape::serialize(void*, btSerializer*) const */

char * __thiscall
btCompoundShape::serialize(btCompoundShape *this,void *param_1,btSerializer *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  
  uVar4 = (**(code **)(*(long *)param_2 + 0x50))(param_2,this);
  lVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar4);
  *(long *)param_1 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar4);
  }
  uVar2 = *(undefined4 *)(this + 8);
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  uVar12 = *(undefined4 *)(this + 0x6c);
  iVar3 = *(int *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 8) = uVar2;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar12;
  *(int *)((long)param_1 + 0x18) = iVar3;
  if (iVar3 != 0) {
    lVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x50);
    lVar9 = *(long *)(lVar5 + 8);
    uVar4 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar9);
    *(undefined8 *)((long)param_1 + 0x10) = uVar4;
    if (0 < *(int *)((long)param_1 + 0x18)) {
      lVar10 = 0;
      lVar7 = *(long *)(this + 0x30);
      puVar11 = (undefined4 *)(lVar9 + 0x28);
      lVar9 = 0x28;
      do {
        lVar8 = *(long *)param_2;
        uVar4 = *(undefined8 *)(lVar7 + lVar9 + 0x18);
        puVar11[9] = *(undefined4 *)(lVar7 + lVar9 + 0x24);
        uVar4 = (**(code **)(lVar8 + 0x38))(param_2,uVar4);
        lVar7 = *(long *)(this + 0x30);
        *(undefined8 *)(puVar11 + 6) = uVar4;
        lVar7 = (**(code **)(*(long *)param_2 + 0x30))
                          (param_2,*(undefined8 *)(lVar7 + lVar9 + 0x18));
        if (lVar7 == 0) {
          iVar3 = (**(code **)(**(long **)(*(long *)(this + 0x30) + lVar9 + 0x18) + 0x68))();
          lVar7 = (**(code **)(*(long *)param_2 + 0x20))(param_2,(long)iVar3,1);
          plVar6 = *(long **)(*(long *)(this + 0x30) + lVar9 + 0x18);
          uVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,*(undefined8 *)(lVar7 + 8),param_2);
          (**(code **)(*(long *)param_2 + 0x28))
                    (param_2,lVar7,uVar4,0x50414853,
                     *(undefined8 *)(*(long *)(this + 0x30) + lVar9 + 0x18));
        }
        lVar7 = *(long *)(this + 0x30);
        lVar10 = lVar10 + 1;
        puVar1 = (undefined4 *)(lVar7 + lVar9);
        lVar9 = lVar9 + 0x58;
        uVar2 = puVar1[8];
        puVar11[-10] = puVar1[-10];
        uVar12 = puVar1[-9];
        puVar11[8] = uVar2;
        puVar11[-9] = uVar12;
        puVar11[-8] = puVar1[-8];
        puVar11[-7] = puVar1[-7];
        puVar11[-6] = puVar1[-6];
        puVar11[-5] = puVar1[-5];
        puVar11[-4] = puVar1[-4];
        puVar11[-3] = puVar1[-3];
        puVar11[-2] = puVar1[-2];
        puVar11[-1] = puVar1[-1];
        *puVar11 = *puVar1;
        puVar11[1] = puVar1[1];
        puVar11[2] = puVar1[2];
        puVar11[3] = puVar1[3];
        puVar11[4] = puVar1[4];
        iVar3 = *(int *)((long)param_1 + 0x18);
        puVar11[5] = puVar1[5];
        puVar11 = puVar11 + 0x14;
      } while (lVar10 < iVar3);
    }
    (**(code **)(*(long *)param_2 + 0x28))
              (param_2,lVar5,"btCompoundShapeChildData",0x59415241,*(undefined8 *)(lVar5 + 8));
  }
  return "btCompoundShapeData";
}


