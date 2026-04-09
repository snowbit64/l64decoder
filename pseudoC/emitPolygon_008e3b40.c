// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitPolygon
// Entry Point: 008e3b40
// Size: 352 bytes
// Signature: undefined __thiscall emitPolygon(TyreTrackGeometry * this, Vertex * param_1, uint param_2, bool * param_3, Vertex * param_4)


/* TyreTrackGeometry::emitPolygon(TyreTrackGeometry::Vertex const*, unsigned int, bool&,
   TyreTrackGeometry::Vertex*) */

void __thiscall
TyreTrackGeometry::emitPolygon
          (TyreTrackGeometry *this,Vertex *param_1,uint param_2,bool *param_3,Vertex *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (2 < param_2) {
    if (*param_3 != false) {
      iVar4 = Ring::allocateNewSegment
                        ((Ring *)(this + 0x70),(Track *)0x0,*(MultiresTexture **)(this + 0xa8));
      param_4 = (Vertex *)(*(long *)(this + 0x98) + (ulong)(uint)(iVar4 << 2) * 0x24);
    }
    *param_3 = true;
    uVar8 = *(undefined8 *)param_1;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)((long)param_4 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)param_4 = uVar8;
    *(undefined8 *)((long)param_4 + 0x18) = uVar7;
    *(undefined8 *)((long)param_4 + 0x10) = uVar6;
    *(undefined4 *)((long)param_4 + 0x20) = uVar3;
    uVar7 = *(undefined8 *)(param_1 + 0x3c);
    uVar6 = *(undefined8 *)(param_1 + 0x34);
    uVar9 = *(undefined8 *)(param_1 + 0x2c);
    uVar8 = *(undefined8 *)(param_1 + 0x24);
    *(undefined4 *)((long)param_4 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined8 *)((long)param_4 + 0x3c) = uVar7;
    *(undefined8 *)((long)param_4 + 0x34) = uVar6;
    lVar2 = 0x6c;
    if (param_2 < 4) {
      lVar2 = 0x48;
    }
    *(undefined8 *)((long)param_4 + 0x2c) = uVar9;
    *(undefined8 *)((long)param_4 + 0x24) = uVar8;
    puVar5 = (undefined8 *)(param_1 + lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    *(undefined4 *)((long)param_4 + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined8 *)((long)param_4 + 0x60) = uVar7;
    *(undefined8 *)((long)param_4 + 0x58) = uVar6;
    *(undefined8 *)((long)param_4 + 0x50) = uVar9;
    *(undefined8 *)((long)param_4 + 0x48) = uVar8;
    uVar8 = puVar5[1];
    uVar7 = *puVar5;
    uVar6 = puVar5[2];
    uVar3 = *(undefined4 *)(puVar5 + 4);
    *(undefined8 *)((long)param_4 + 0x84) = puVar5[3];
    *(undefined8 *)((long)param_4 + 0x7c) = uVar6;
    *(undefined8 *)((long)param_4 + 0x74) = uVar8;
    *(undefined8 *)((long)param_4 + 0x6c) = uVar7;
    *(undefined4 *)((long)param_4 + 0x8c) = uVar3;
    if (4 < param_2) {
      iVar4 = Ring::allocateNewSegment
                        ((Ring *)(this + 0x70),(Track *)0x0,*(MultiresTexture **)(this + 0xa8));
      uVar6 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      puVar5 = (undefined8 *)(*(long *)(this + 0x98) + (ulong)(uint)(iVar4 << 2) * 0x24);
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      puVar5[1] = *(undefined8 *)(param_1 + 8);
      *puVar5 = uVar6;
      puVar5[3] = uVar8;
      puVar5[2] = uVar7;
      *(undefined4 *)(puVar5 + 4) = uVar3;
      uVar6 = *(undefined8 *)(param_1 + 0x7c);
      uVar3 = *(undefined4 *)(param_1 + 0x8c);
      uVar8 = *(undefined8 *)(param_1 + 0x74);
      uVar7 = *(undefined8 *)(param_1 + 0x6c);
      *(undefined8 *)((long)puVar5 + 0x3c) = *(undefined8 *)(param_1 + 0x84);
      *(undefined8 *)((long)puVar5 + 0x34) = uVar6;
      *(undefined4 *)((long)puVar5 + 0x44) = uVar3;
      *(undefined8 *)((long)puVar5 + 0x2c) = uVar8;
      *(undefined8 *)((long)puVar5 + 0x24) = uVar7;
      lVar2 = 0x90;
      if (param_2 != 5) {
        lVar2 = 0xb4;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      uVar7 = *(undefined8 *)(param_1 + 0xa8);
      uVar6 = *(undefined8 *)(param_1 + 0xa0);
      puVar1 = (undefined8 *)(param_1 + lVar2);
      uVar3 = *(undefined4 *)(param_1 + 0xb0);
      puVar5[10] = *(undefined8 *)(param_1 + 0x98);
      puVar5[9] = uVar8;
      puVar5[0xc] = uVar7;
      puVar5[0xb] = uVar6;
      *(undefined4 *)(puVar5 + 0xd) = uVar3;
      uVar8 = puVar1[1];
      uVar7 = *puVar1;
      uVar6 = puVar1[2];
      uVar3 = *(undefined4 *)(puVar1 + 4);
      *(undefined8 *)((long)puVar5 + 0x84) = puVar1[3];
      *(undefined8 *)((long)puVar5 + 0x7c) = uVar6;
      *(undefined8 *)((long)puVar5 + 0x74) = uVar8;
      *(undefined8 *)((long)puVar5 + 0x6c) = uVar7;
      *(undefined4 *)((long)puVar5 + 0x8c) = uVar3;
    }
  }
  return;
}


