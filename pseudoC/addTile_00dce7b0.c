// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTile
// Entry Point: 00dce7b0
// Size: 1452 bytes
// Signature: undefined __thiscall addTile(dtNavMesh * this, uchar * param_1, int param_2, int param_3, uint param_4, uint * param_5)


/* dtNavMesh::addTile(unsigned char*, int, int, unsigned int, unsigned int*) */

void __thiscall
dtNavMesh::addTile(dtNavMesh *this,uchar *param_1,int param_2,int param_3,uint param_4,uint *param_5
                  )

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  undefined4 *puVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  uint *puVar24;
  uint **ppuVar25;
  uint *puVar26;
  uint *local_170 [32];
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  if (*(int *)param_1 != 0x444e4156) {
    uVar11 = 0x80000001;
    goto LAB_00dced28;
  }
  uVar11 = 0x80000004;
  if (*(int *)(param_1 + 4) != 7) {
    uVar11 = 0x80000002;
    goto LAB_00dced28;
  }
  uVar17 = *(uint *)(this + 0x38) &
           *(int *)(param_1 + 8) * -0x72594cbd + *(int *)(param_1 + 0xc) * -0x27e9c7bf;
  lVar13 = *(long *)(this + 0x40);
  lVar20 = *(long *)(lVar13 + (long)(int)uVar17 * 8);
  if (lVar20 != 0) {
    do {
      lVar22 = *(long *)(lVar20 + 8);
      if ((((lVar22 != 0) && (*(int *)(lVar22 + 8) == *(int *)(param_1 + 8))) &&
          (*(int *)(lVar22 + 0xc) == *(int *)(param_1 + 0xc))) &&
         (*(int *)(lVar22 + 0x10) == *(int *)(param_1 + 0x10))) {
        uVar11 = 0x80000000;
        goto LAB_00dced28;
      }
      lVar20 = *(long *)(lVar20 + 0x60);
    } while (lVar20 != 0);
  }
  if (param_4 == 0) {
    puVar26 = *(uint **)(this + 0x48);
    if (puVar26 == (uint *)0x0) goto LAB_00dced28;
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(puVar26 + 0x18);
    *(undefined8 *)(puVar26 + 0x18) = 0;
  }
  else {
    uVar6 = *(uint *)(this + 0x5c);
    uVar7 = *(uint *)(this + 0x60);
    uVar5 = param_4 >> (ulong)(uVar7 & 0x1f) & (-1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
    if (*(int *)(this + 0x30) <= (int)uVar5) goto LAB_00dced28;
    puVar26 = (uint *)(*(long *)(this + 0x50) + (long)(int)uVar5 * 0x68);
    puVar24 = (uint *)0x0;
    ppuVar25 = (uint **)(this + 0x48);
    do {
      puVar23 = puVar24;
      puVar24 = *ppuVar25;
      if (puVar24 == (uint *)0x0) break;
      ppuVar25 = (uint **)(puVar24 + 0x18);
    } while (puVar24 != puVar26);
    if (puVar24 != puVar26) goto LAB_00dced28;
    ppuVar25 = (uint **)(this + 0x48);
    if (puVar23 != (uint *)0x0) {
      ppuVar25 = (uint **)(puVar23 + 0x18);
    }
    *ppuVar25 = *(uint **)(*(long *)(this + 0x50) + (long)(int)uVar5 * 0x68 + 0x60);
    *puVar26 = param_4 >> (ulong)(uVar7 + uVar6 & 0x1f) &
               (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU);
  }
  puVar3 = param_1 + 100;
  lVar20 = (long)(int)uVar17 * 8;
  *(undefined8 *)(puVar26 + 0x18) = *(undefined8 *)(lVar13 + lVar20);
  *(uint **)(lVar13 + lVar20) = puVar26;
  iVar19 = *(int *)(param_1 + 0x28);
  iVar15 = *(int *)(param_1 + 0x2c);
  iVar12 = *(int *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x24);
  iVar9 = *(int *)(param_1 + 0x30);
  lVar13 = (long)(*(int *)(param_1 + 0x1c) * 0xc);
  lVar20 = (long)(*(int *)(param_1 + 0x18) << 5);
  *(uchar **)(puVar26 + 4) = puVar3 + lVar13;
  *(uchar **)(puVar26 + 6) = puVar3;
  puVar4 = puVar3 + lVar13 + lVar20;
  puVar3 = puVar4 + iVar12 * 0xc;
  puVar1 = puVar3 + iVar8 * 0xc;
  puVar2 = puVar1 + iVar19 * 0xc;
  *(uchar **)(puVar26 + 8) = puVar4;
  *(uchar **)(puVar26 + 10) = puVar3;
  *(uchar **)(puVar26 + 0xc) = puVar1;
  *(uchar **)(puVar26 + 0xe) = puVar2;
  *(uchar **)(puVar26 + 0x10) = puVar2 + (iVar15 << 2);
  *(uchar **)(puVar26 + 0x12) = puVar2 + (iVar15 << 2) + (iVar9 << 4);
  if (iVar9 << 4 == 0) {
    *(undefined8 *)(puVar26 + 0x10) = 0;
  }
  uVar17 = iVar12 - 1;
  uVar16 = (ulong)uVar17;
  puVar26[1] = 0;
  *(undefined4 *)(puVar4 + (long)(int)uVar17 * 0xc + 4) = 0xffffffff;
  if (1 < iVar12) {
    if (uVar17 < 2) {
      uVar18 = 0;
    }
    else {
      uVar21 = 0;
      uVar18 = uVar16 & 0xfffffffe;
      puVar14 = (undefined4 *)(param_1 + lVar20 + lVar13 + 0x74);
      do {
        iVar19 = (int)uVar21;
        uVar21 = uVar21 + 2;
        puVar14[-3] = iVar19 + 1;
        *puVar14 = (int)uVar21;
        puVar14 = puVar14 + 6;
      } while (uVar18 != uVar21);
      if (uVar18 == uVar16) goto LAB_00dcea5c;
    }
    puVar14 = (undefined4 *)(param_1 + lVar20 + uVar18 * 0xc + lVar13 + 0x68);
    do {
      uVar18 = uVar18 + 1;
      *puVar14 = (int)uVar18;
      puVar14 = puVar14 + 3;
    } while (uVar16 != uVar18);
  }
LAB_00dcea5c:
  *(uchar **)(puVar26 + 2) = param_1;
  *(uchar **)(puVar26 + 0x14) = param_1;
  puVar26[0x16] = param_2;
  puVar26[0x17] = param_3;
  connectIntLinks(this,(dtMeshTile *)puVar26);
  baseOffMeshLinks(this,(dtMeshTile *)puVar26);
  iVar19 = *(int *)(param_1 + 8);
  iVar12 = *(int *)(param_1 + 0xc);
  puVar24 = *(uint **)(*(long *)(this + 0x40) +
                      (long)(int)(iVar19 * -0x72594cbd + iVar12 * -0x27e9c7bf &
                                 *(uint *)(this + 0x38)) * 8);
  if (puVar24 != (uint *)0x0) {
    uVar17 = 0;
    do {
      lVar13 = *(long *)(puVar24 + 2);
      if (((lVar13 != 0) && (*(int *)(lVar13 + 8) == iVar19)) &&
         ((*(int *)(lVar13 + 0xc) == iVar12 && ((int)uVar17 < 0x20)))) {
        local_170[(int)uVar17] = puVar24;
        uVar17 = uVar17 + 1;
      }
      puVar24 = *(uint **)(puVar24 + 0x18);
    } while (puVar24 != (uint *)0x0);
    if (0 < (int)uVar17) {
      uVar16 = (ulong)uVar17;
      ppuVar25 = local_170;
      do {
        puVar24 = *ppuVar25;
        if (puVar24 != puVar26) {
          connectExtLinks(this,(dtMeshTile *)puVar26,(dtMeshTile *)puVar24,-1);
          connectExtLinks(this,(dtMeshTile *)puVar24,(dtMeshTile *)puVar26,-1);
        }
        connectExtOffMeshLinks(this,(dtMeshTile *)puVar26,(dtMeshTile *)puVar24,-1);
        connectExtOffMeshLinks(this,(dtMeshTile *)puVar24,(dtMeshTile *)puVar26,-1);
        ppuVar25 = ppuVar25 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  iVar19 = 0;
  do {
    iVar12 = *(int *)(param_1 + 8);
    iVar15 = *(int *)(param_1 + 0xc);
    switch(iVar19) {
    case 0:
      iVar12 = iVar12 + 1;
      break;
    case 1:
      iVar12 = iVar12 + 1;
    case 2:
      iVar15 = iVar15 + 1;
      break;
    case 3:
      iVar12 = iVar12 + -1;
      iVar15 = iVar15 + 1;
      break;
    case 4:
      iVar12 = iVar12 + -1;
      break;
    case 5:
      iVar12 = iVar12 + -1;
    case 6:
switchD_00dcebbc_caseD_6:
      iVar15 = iVar15 + -1;
      break;
    case 7:
      iVar12 = iVar12 + 1;
      goto switchD_00dcebbc_caseD_6;
    }
    puVar24 = *(uint **)(*(long *)(this + 0x40) +
                        (long)(int)(iVar12 * -0x72594cbd + iVar15 * -0x27e9c7bf &
                                   *(uint *)(this + 0x38)) * 8);
    if (puVar24 != (uint *)0x0) {
      uVar17 = 0;
      do {
        lVar13 = *(long *)(puVar24 + 2);
        if (((lVar13 != 0) && (*(int *)(lVar13 + 8) == iVar12)) &&
           ((*(int *)(lVar13 + 0xc) == iVar15 && ((int)uVar17 < 0x20)))) {
          local_170[(int)uVar17] = puVar24;
          uVar17 = uVar17 + 1;
        }
        puVar24 = *(uint **)(puVar24 + 0x18);
      } while (puVar24 != (uint *)0x0);
      if (0 < (int)uVar17) {
        uVar16 = (ulong)uVar17;
        uVar17 = iVar19 + 4U & 7;
        ppuVar25 = local_170;
        do {
          puVar24 = *ppuVar25;
          connectExtLinks(this,(dtMeshTile *)puVar26,(dtMeshTile *)puVar24,iVar19);
          connectExtLinks(this,(dtMeshTile *)puVar24,(dtMeshTile *)puVar26,uVar17);
          connectExtOffMeshLinks(this,(dtMeshTile *)puVar26,(dtMeshTile *)puVar24,iVar19);
          connectExtOffMeshLinks(this,(dtMeshTile *)puVar24,(dtMeshTile *)puVar26,uVar17);
          uVar16 = uVar16 - 1;
          ppuVar25 = ppuVar25 + 1;
        } while (uVar16 != 0);
      }
    }
    iVar19 = iVar19 + 1;
  } while (iVar19 != 8);
  if (param_5 != (uint *)0x0) {
    *param_5 = (int)((ulong)((long)puVar26 - *(long *)(this + 0x50)) >> 3) * -0x3b13b13b <<
               (ulong)(*(uint *)(this + 0x60) & 0x1f) |
               *puVar26 << (ulong)(*(int *)(this + 0x5c) + *(uint *)(this + 0x60) & 0x1f);
  }
  uVar11 = 0x40000000;
LAB_00dced28:
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


