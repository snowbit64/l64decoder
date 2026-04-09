// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportAabbOverlappingNodex
// Entry Point: 00f5cdf4
// Size: 976 bytes
// Signature: undefined __thiscall reportAabbOverlappingNodex(btQuantizedBvh * this, btNodeOverlapCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* btQuantizedBvh::reportAabbOverlappingNodex(btNodeOverlapCallback*, btVector3 const&, btVector3
   const&) const */

void __thiscall
btQuantizedBvh::reportAabbOverlappingNodex
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3
          )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  bool bVar16;
  bool bVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ushort *puVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ushort local_78;
  undefined2 local_76;
  undefined2 local_74;
  ushort local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  long local_68;
  
  lVar15 = tpidr_el0;
  local_68 = *(long *)(lVar15 + 0x28);
  if (this[0x40] == (btQuantizedBvh)0x0) {
    iVar19 = *(int *)(this + 0x3c);
    if (iVar19 < 1) {
      iVar20 = 0;
    }
    else {
      iVar21 = 0;
      pfVar23 = *(float **)(this + 0x78);
      iVar1 = 1;
      do {
        iVar20 = iVar1;
        if ((pfVar23[4] < *(float *)param_2) || (*(float *)param_3 < *pfVar23)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if ((pfVar23[6] < *(float *)(param_2 + 8)) || (*(float *)(param_3 + 8) < pfVar23[2])) {
          bVar16 = false;
        }
        if (pfVar23[5] < *(float *)(param_2 + 4)) {
LAB_00f5d0d8:
          fVar34 = pfVar23[8];
          bVar16 = false;
          bVar17 = fVar34 == -NAN;
LAB_00f5d0e8:
          if ((bVar16) || (bVar17)) goto LAB_00f5d050;
          iVar21 = (int)fVar34 + iVar21;
          pfVar23 = pfVar23 + (long)(int)fVar34 * 0x10;
        }
        else {
          if (*(float *)(param_3 + 4) < pfVar23[1]) goto LAB_00f5d0d8;
          fVar34 = pfVar23[8];
          bVar17 = fVar34 == -NAN;
          if (!(bool)(bVar16 & bVar17)) goto LAB_00f5d0e8;
          uVar18 = (**(code **)(*(long *)param_1 + 0x10))(param_1,pfVar23[9],pfVar23[10]);
          if ((uVar18 & 1) == 0) break;
          iVar19 = *(int *)(this + 0x3c);
LAB_00f5d050:
          pfVar23 = pfVar23 + 0x10;
          iVar21 = iVar21 + 1;
        }
        iVar1 = iVar20 + 1;
      } while (iVar21 < iVar19);
    }
    if (maxIterations < iVar20) {
      maxIterations = iVar20;
    }
  }
  else {
    fVar27 = *(float *)(this + 8);
    fVar29 = *(float *)(this + 0xc);
    fVar34 = *(float *)param_2;
    if (*(float *)param_2 <= fVar27) {
      fVar34 = fVar27;
    }
    fVar31 = *(float *)(this + 0x10);
    fVar25 = *(float *)(param_2 + 4);
    if (*(float *)(param_2 + 4) <= fVar29) {
      fVar25 = fVar29;
    }
    fVar26 = *(float *)param_3;
    if (*(float *)param_3 <= fVar27) {
      fVar26 = fVar27;
    }
    fVar28 = *(float *)(param_3 + 4);
    if (*(float *)(param_3 + 4) <= fVar29) {
      fVar28 = fVar29;
    }
    fVar30 = *(float *)(param_2 + 8);
    if (*(float *)(param_2 + 8) <= fVar31) {
      fVar30 = fVar31;
    }
    fVar24 = (float)NEON_fminnm(*(undefined4 *)(this + 0x18),fVar34);
    fVar34 = *(float *)(param_3 + 8);
    if (*(float *)(param_3 + 8) <= fVar31) {
      fVar34 = fVar31;
    }
    fVar25 = (float)NEON_fminnm(*(undefined4 *)(this + 0x1c),fVar25);
    fVar32 = (float)NEON_fminnm(*(undefined4 *)(this + 0x18),fVar26);
    fVar33 = (float)NEON_fminnm(*(undefined4 *)(this + 0x1c),fVar28);
    fVar26 = (float)NEON_fminnm(*(undefined4 *)(this + 0x20),fVar30);
    fVar34 = (float)NEON_fminnm(*(undefined4 *)(this + 0x20),fVar34);
    fVar28 = (float)NEON_fmadd(fVar32 - fVar27,*(float *)(this + 0x28),0x3f800000);
    fVar30 = (float)NEON_fmadd(fVar33 - fVar29,*(float *)(this + 0x2c),0x3f800000);
    fVar34 = (float)NEON_fmadd(fVar34 - fVar31,*(float *)(this + 0x30),0x3f800000);
    uVar2 = (int)(*(float *)(this + 0x28) * (fVar24 - fVar27)) & 0xfffe;
    uVar3 = (int)(*(float *)(this + 0x2c) * (fVar25 - fVar29)) & 0xfffe;
    uVar12 = (int)fVar28 | 1;
    iVar19 = *(int *)(this + 200);
    uVar4 = (int)(*(float *)(this + 0x30) * (fVar26 - fVar31)) & 0xfffe;
    local_70 = (ushort)uVar2;
    uVar13 = (int)fVar30 | 1;
    uVar14 = (int)fVar34 | 1;
    local_6e = (undefined2)uVar3;
    local_6c = (undefined2)uVar4;
    local_78 = (ushort)uVar12;
    local_76 = (undefined2)uVar13;
    local_74 = (undefined2)uVar14;
    if (iVar19 == 2) {
      walkRecursiveQuantizedTreeAgainstQueryAabb
                (this,*(btQuantizedBvhNode **)(this + 0xb8),param_1,&local_70,&local_78);
    }
    else if (iVar19 == 1) {
      walkStacklessQuantizedTreeCacheFriendly(this,param_1,&local_70,&local_78);
    }
    else if (iVar19 == 0) {
      iVar19 = *(int *)(this + 0x3c);
      if (iVar19 < 1) {
        iVar20 = 0;
      }
      else {
        iVar21 = 0;
        puVar22 = *(ushort **)(this + 0xb8);
        iVar1 = 1;
        do {
          iVar20 = iVar1;
          uVar6 = puVar22[3];
          uVar7 = *puVar22;
          uVar8 = puVar22[5];
          uVar9 = puVar22[2];
          uVar10 = puVar22[4];
          uVar11 = puVar22[1];
          uVar5 = *(uint *)(puVar22 + 6);
          if ((-1 < (int)uVar5) &&
             (((((uVar6 >= uVar2 && uVar12 >= uVar7) && uVar8 >= uVar4) && uVar14 >= uVar9) &&
              uVar10 >= uVar3) && uVar13 >= uVar11)) {
            uVar18 = (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar5 >> 0x15,uVar5 & 0x1fffff);
            if ((uVar18 & 1) == 0) break;
          }
          if ((int)uVar5 < 0 &&
              (((((uVar6 < uVar2 || uVar12 < uVar7) || uVar8 < uVar4) || uVar14 < uVar9) ||
               uVar10 < uVar3) || uVar13 < uVar11)) {
            iVar1 = -*(int *)(puVar22 + 6);
            puVar22 = puVar22 + (long)-*(int *)(puVar22 + 6) * 8;
          }
          else {
            puVar22 = puVar22 + 8;
            iVar1 = 1;
          }
          iVar21 = iVar21 + iVar1;
          iVar1 = iVar20 + 1;
        } while (iVar21 < iVar19);
      }
      if (maxIterations < iVar20) {
        maxIterations = iVar20;
      }
    }
  }
  if (*(long *)(lVar15 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


