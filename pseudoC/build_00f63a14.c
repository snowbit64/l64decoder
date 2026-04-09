// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: build
// Entry Point: 00f63a14
// Size: 1200 bytes
// Signature: undefined __thiscall build(btOptimizedBvh * this, btStridingMeshInterface * param_1, bool param_2, btVector3 * param_3, btVector3 * param_4)


/* btOptimizedBvh::build(btStridingMeshInterface*, bool, btVector3 const&, btVector3 const&) */

void __thiscall
btOptimizedBvh::build
          (btOptimizedBvh *this,btStridingMeshInterface *param_1,bool param_2,btVector3 *param_3,
          btVector3 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **local_60;
  btOptimizedBvh *local_58;
  btOptimizedBvh *pbStack_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  this[0x40] = (btOptimizedBvh)param_2;
  if (param_2) {
    btQuantizedBvh::setQuantizationValues((btQuantizedBvh *)this,param_3,param_4,1.0);
    local_58 = this + 0x88;
    local_60 = &PTR__btInternalTriangleIndexCallback_0101ad60;
    pbStack_50 = this;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_60,this + 8,this + 0x18);
    iVar10 = *(int *)(this + 0x8c);
    uVar3 = *(uint *)(this + 0xac);
    iVar9 = (int)((long)iVar10 << 1);
    if ((int)uVar3 < iVar9) {
      lVar12 = (long)(int)uVar3;
      if (*(int *)(this + 0xb0) < iVar9) {
        if (iVar10 == 0) {
          lVar6 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar6 = (*(code *)PTR_FUN_01048e38)((long)iVar10 << 5,0x10);
          uVar3 = *(uint *)(this + 0xac);
        }
        if (0 < (int)uVar3) {
          lVar7 = 0;
          do {
            uVar13 = *(undefined8 *)(*(long *)(this + 0xb8) + lVar7);
            ((undefined8 *)(lVar6 + lVar7))[1] = ((undefined8 *)(*(long *)(this + 0xb8) + lVar7))[1]
            ;
            *(undefined8 *)(lVar6 + lVar7) = uVar13;
            lVar7 = lVar7 + 0x10;
          } while ((ulong)uVar3 * 0x10 - lVar7 != 0);
        }
        if ((*(long *)(this + 0xb8) != 0) && (this[0xc0] != (btOptimizedBvh)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        *(long *)(this + 0xb8) = lVar6;
        *(int *)(this + 0xb0) = iVar9;
        this[0xc0] = (btOptimizedBvh)0x1;
      }
      lVar6 = lVar12 << 4;
      lVar12 = iVar9 - lVar12;
      do {
        lVar12 = lVar12 + -1;
        puVar1 = (undefined8 *)(*(long *)(this + 0xb8) + lVar6);
        lVar6 = lVar6 + 0x10;
        *puVar1 = 0;
        puVar1[1] = 0;
      } while (lVar12 != 0);
    }
    *(int *)(this + 0xac) = iVar9;
  }
  else {
    local_58 = this + 0x48;
    local_60 = &PTR__btInternalTriangleIndexCallback_0101ada0;
    uStack_78 = 0x5d5e0b6b;
    local_80 = 0x5d5e0b6b5d5e0b6b;
    uStack_68 = 0xdd5e0b6b;
    uStack_70 = 0xdd5e0b6bdd5e0b6b;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_60,&uStack_70,&local_80);
    iVar10 = *(int *)(this + 0x4c);
    uVar3 = *(uint *)(this + 0x6c);
    iVar9 = (int)((long)iVar10 << 1);
    if ((int)uVar3 < iVar9) {
      lVar12 = (long)(int)uVar3;
      if (*(int *)(this + 0x70) < iVar9) {
        if (iVar10 == 0) {
          lVar6 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar6 = (*(code *)PTR_FUN_01048e38)((long)iVar10 << 7,0x10);
          uVar3 = *(uint *)(this + 0x6c);
        }
        if (0 < (int)uVar3) {
          lVar7 = 0;
          do {
            puVar1 = (undefined8 *)(lVar6 + lVar7);
            puVar2 = (undefined8 *)(*(long *)(this + 0x78) + lVar7);
            lVar7 = lVar7 + 0x40;
            uVar15 = puVar2[4];
            uVar14 = puVar2[7];
            uVar13 = puVar2[6];
            uVar19 = puVar2[1];
            uVar18 = *puVar2;
            uVar17 = puVar2[3];
            uVar16 = puVar2[2];
            puVar1[5] = puVar2[5];
            puVar1[4] = uVar15;
            puVar1[7] = uVar14;
            puVar1[6] = uVar13;
            puVar1[1] = uVar19;
            *puVar1 = uVar18;
            puVar1[3] = uVar17;
            puVar1[2] = uVar16;
          } while ((ulong)uVar3 * 0x40 - lVar7 != 0);
        }
        if ((*(long *)(this + 0x78) != 0) && (this[0x80] != (btOptimizedBvh)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        *(long *)(this + 0x78) = lVar6;
        *(int *)(this + 0x70) = iVar9;
        this[0x80] = (btOptimizedBvh)0x1;
      }
      lVar6 = lVar12 << 6;
      lVar12 = iVar9 - lVar12;
      do {
        lVar12 = lVar12 + -1;
        puVar1 = (undefined8 *)(*(long *)(this + 0x78) + lVar6);
        lVar6 = lVar6 + 0x40;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[7] = 0;
        puVar1[6] = 0;
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
      } while (lVar12 != 0);
    }
    *(int *)(this + 0x6c) = iVar9;
  }
  *(undefined4 *)(this + 0x3c) = 0;
  btQuantizedBvh::buildTree((btQuantizedBvh *)this,0,iVar10);
  iVar10 = *(int *)(this + 0xd4);
  if ((this[0x40] != (btOptimizedBvh)0x0) && (iVar10 == 0)) {
    if (*(int *)(this + 0xd8) == 0) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar11 = (undefined2 *)(*(code *)PTR_FUN_01048e38)(0x20,0x10);
      uVar3 = *(uint *)(this + 0xd4);
      if (0 < (int)uVar3) {
        lVar12 = 0;
        do {
          puVar1 = (undefined8 *)((long)puVar11 + lVar12);
          puVar2 = (undefined8 *)(*(long *)(this + 0xe0) + lVar12);
          lVar12 = lVar12 + 0x20;
          uVar15 = *puVar2;
          uVar14 = puVar2[3];
          uVar13 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar15;
          puVar1[3] = uVar14;
          puVar1[2] = uVar13;
        } while ((ulong)uVar3 * 0x20 - lVar12 != 0);
      }
      if ((*(long *)(this + 0xe0) != 0) && (this[0xe8] != (btOptimizedBvh)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined2 **)(this + 0xe0) = puVar11;
      iVar10 = *(int *)(this + 0xd4) + 1;
      this[0xe8] = (btOptimizedBvh)0x1;
      *(undefined4 *)(this + 0xd8) = 1;
    }
    else {
      puVar11 = *(undefined2 **)(this + 0xe0);
      iVar10 = 1;
    }
    puVar8 = *(undefined2 **)(this + 0xb8);
    *(int *)(this + 0xd4) = iVar10;
    *puVar11 = *puVar8;
    puVar11[1] = puVar8[1];
    puVar11[2] = puVar8[2];
    puVar11[3] = puVar8[3];
    puVar11[4] = puVar8[4];
    uVar4 = puVar8[5];
    *(undefined4 *)(puVar11 + 6) = 0;
    puVar11[5] = uVar4;
    iVar9 = 1;
    if (*(int *)(puVar8 + 6) < 0) {
      iVar9 = -*(int *)(puVar8 + 6);
    }
    *(int *)(puVar11 + 8) = iVar9;
  }
  *(int *)(this + 0xf0) = iVar10;
  if ((*(long *)(this + 0x98) != 0) && (this[0xa0] != (btOptimizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  this[0xa0] = (btOptimizedBvh)0x1;
  if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btOptimizedBvh)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x60] = (btOptimizedBvh)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


