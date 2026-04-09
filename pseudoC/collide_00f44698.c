// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collide
// Entry Point: 00f44698
// Size: 1108 bytes
// Signature: undefined __cdecl collide(btDispatcher * param_1)


/* btDbvtBroadphase::collide(btDispatcher*) */

void btDbvtBroadphase::collide(btDispatcher *param_1)

{
  btDbvtNode **this;
  long *plVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined **local_90;
  btDispatcher *pbStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  (**(code **)(*(long *)param_1 + 0x70))();
  this = (btDbvtNode **)(param_1 + 8);
  btDbvt::optimizeIncremental
            ((btDbvt *)this,(*(int *)(param_1 + 0xf4) * *(int *)(param_1 + 0x1c)) / 100 + 1);
  if (*(int *)(param_1 + 0x100) != 0) {
    iVar7 = (*(int *)(param_1 + 0xf0) * *(int *)(param_1 + 0x7c)) / 100 + 1;
    btDbvt::optimizeIncremental((btDbvt *)(param_1 + 0x68),iVar7);
    uVar4 = *(int *)(param_1 + 0x100) - iVar7;
    *(uint *)(param_1 + 0x100) = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  }
  iVar7 = *(int *)(param_1 + 0xec);
  uVar4 = iVar7 + 2;
  if (-1 < iVar7 + 1) {
    uVar4 = iVar7 + 1;
  }
  iVar7 = (iVar7 + 1) - (uVar4 & 0xfffffffe);
  *(int *)(param_1 + 0xec) = iVar7;
  if (*(long *)(param_1 + (long)iVar7 * 8 + 200) != 0) {
    lVar6 = *(long *)(param_1 + (long)iVar7 * 8 + 200);
    do {
      lVar2 = *(long *)(lVar6 + 0x50);
      plVar1 = (long *)(param_1 + (long)*(int *)(lVar6 + 0x58) * 8 + 200);
      if (*(long *)(lVar6 + 0x48) != 0) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x48) + 0x50);
      }
      *plVar1 = lVar2;
      if (*(long *)(lVar6 + 0x50) != 0) {
        *(undefined8 *)(*(long *)(lVar6 + 0x50) + 0x48) = *(undefined8 *)(lVar6 + 0x48);
      }
      *(undefined8 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(param_1 + 0xd8);
      if (*(long *)(param_1 + 0xd8) != 0) {
        *(long *)(*(long *)(param_1 + 0xd8) + 0x48) = lVar6;
      }
      *(long *)(param_1 + 0xd8) = lVar6;
      uVar12 = *(undefined8 *)(lVar6 + 0x40);
      FUN_00f424e4(this,uVar12);
      if (*(long *)(param_1 + 0x10) != 0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(param_1 + 0x10) = uVar12;
      puVar13 = *(undefined8 **)(param_1 + 0x70);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      pbStack_88 = *(btDispatcher **)(lVar6 + 0x24);
      local_90 = *(undefined ***)(lVar6 + 0x1c);
      uStack_78 = *(undefined8 *)(lVar6 + 0x34);
      local_80 = *(undefined8 *)(lVar6 + 0x2c);
      if (puVar13 == (undefined8 *)0x0) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        puVar13 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
        puVar13[6] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar13[5] = 0;
        puVar13[4] = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      puVar13[4] = 0;
      puVar13[5] = lVar6;
      puVar13[6] = 0;
      puVar13[1] = pbStack_88;
      *puVar13 = local_90;
      puVar13[3] = uStack_78;
      puVar13[2] = local_80;
      FUN_00f42680(param_1 + 0x68,*(undefined8 *)(param_1 + 0x68),puVar13);
      iVar7 = *(int *)(param_1 + 0x7c);
      *(int *)(param_1 + 0x7c) = iVar7 + 1;
      *(undefined8 **)(lVar6 + 0x40) = puVar13;
      *(undefined4 *)(lVar6 + 0x58) = 2;
      lVar6 = lVar2;
    } while (lVar2 != 0);
    *(int *)(param_1 + 0x100) = iVar7 + 1;
    param_1[0x11e] = (btDispatcher)0x1;
  }
  local_90 = &PTR__ICollide_01018ed0;
  pbStack_88 = param_1;
  if ((param_1[0x11d] != (btDispatcher)0x0) &&
     (btDbvt::collideTTpersistentStack
                ((btDbvt *)this,*(btDbvtNode **)(param_1 + 8),*(btDbvtNode **)(param_1 + 0x68),
                 (ICollide *)&local_90), param_1[0x11d] != (btDispatcher)0x0)) {
    btDbvt::collideTTpersistentStack((btDbvt *)this,*this,*this,(ICollide *)&local_90);
  }
  if (param_1[0x11e] == (btDispatcher)0x0) goto LAB_00f44a5c;
  lVar6 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x38))();
  iVar7 = *(int *)(lVar6 + 4);
  if (iVar7 < 1) goto LAB_00f44a5c;
  iVar11 = (*(int *)(param_1 + 0xf8) * iVar7) / 100;
  iVar10 = *(int *)(param_1 + 0xfc);
  if (*(int *)(param_1 + 0xfc) <= iVar11) {
    iVar10 = iVar11;
  }
  iVar11 = iVar7;
  if (iVar10 <= iVar7) {
    iVar11 = iVar10;
  }
  if (iVar11 < 1) {
LAB_00f44a40:
    iVar10 = 0;
    if (iVar7 != 0) {
      iVar10 = (*(int *)(param_1 + 0x114) + iVar11) / iVar7;
    }
    iVar7 = (*(int *)(param_1 + 0x114) + iVar11) - iVar10 * iVar7;
  }
  else {
    iVar10 = 0;
    do {
      iVar3 = 0;
      if (iVar7 != 0) {
        iVar3 = (*(int *)(param_1 + 0x114) + iVar10) / iVar7;
      }
      plVar1 = (long *)(*(long *)(lVar6 + 0x10) +
                       (long)((*(int *)(param_1 + 0x114) + iVar10) - iVar3 * iVar7) * 0x20);
      pfVar8 = *(float **)(*plVar1 + 0x40);
      pfVar9 = *(float **)(plVar1[1] + 0x40);
      if (pfVar9[4] < *pfVar8) {
LAB_00f44a0c:
        (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))();
        iVar11 = iVar11 + -1;
        iVar10 = iVar10 + -1;
        iVar7 = *(int *)(lVar6 + 4);
      }
      else {
        if (pfVar8[4] < *pfVar9) goto LAB_00f44a0c;
        if (pfVar9[5] < pfVar8[1]) goto LAB_00f44a0c;
        if (pfVar8[5] < pfVar9[1]) goto LAB_00f44a0c;
        if (pfVar9[6] < pfVar8[2]) goto LAB_00f44a0c;
        if (pfVar8[6] < pfVar9[2]) goto LAB_00f44a0c;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
    if (0 < iVar7) goto LAB_00f44a40;
    iVar7 = 0;
  }
  *(int *)(param_1 + 0x114) = iVar7;
LAB_00f44a5c:
  param_1[0x11e] = (btDispatcher)0x0;
  uVar4 = *(uint *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0xfc) = 1;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  if (uVar4 == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = (float)(ulong)*(uint *)(param_1 + 0x108) / (float)(ulong)uVar4;
  }
  *(float *)(param_1 + 0x10c) = fVar14;
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) >> 1;
  *(uint *)(param_1 + 0x104) = uVar4 >> 1;
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


