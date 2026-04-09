// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointersToIndices
// Entry Point: 00f798e8
// Size: 720 bytes
// Signature: undefined pointersToIndices(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::pointersToIndices() */

void btSoftBody::pointersToIndices(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long in_x0;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int local_20;
  undefined4 uStack_1c;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar2 = *(uint *)(in_x0 + 0x374);
  local_20 = 0;
  lVar1 = 0;
  if (uVar2 != 0) {
    lVar1 = *(long *)(in_x0 + 0x380);
  }
  if (0 < (int)uVar2) {
    uVar6 = 1;
    lVar9 = 0x68;
    lVar11 = *(long *)(*(long *)(in_x0 + 0x380) + 0x68);
    while( true ) {
      if (lVar11 != 0) {
        *(ulong *)(lVar11 + 0x28) = CONCAT44(uStack_1c,local_20);
      }
      local_20 = (int)uVar6;
      if (uVar2 == uVar6) break;
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x78;
      lVar11 = *(long *)(*(long *)(in_x0 + 0x380) + lVar9);
    }
  }
  uVar2 = *(uint *)(in_x0 + 0x394);
  if (0 < (int)uVar2) {
    lVar9 = 0;
    do {
      lVar11 = *(long *)(in_x0 + 0x3a0) + lVar9;
      *(long *)(lVar11 + 0x10) = (*(long *)(lVar11 + 0x10) - lVar1 >> 3) * -0x1111111111111111;
      lVar11 = *(long *)(in_x0 + 0x3a0) + lVar9;
      lVar9 = lVar9 + 0x48;
      *(long *)(lVar11 + 0x18) = (*(long *)(lVar11 + 0x18) - lVar1 >> 3) * -0x1111111111111111;
    } while ((ulong)uVar2 * 0x48 - lVar9 != 0);
  }
  uVar2 = *(uint *)(in_x0 + 0x3b4);
  local_20 = 0;
  if (0 < (int)uVar2) {
    lVar9 = 0;
    iVar4 = 1;
    do {
      iVar8 = iVar4;
      lVar11 = *(long *)(in_x0 + 0x3c0) + lVar9;
      *(long *)(lVar11 + 0x10) = (*(long *)(lVar11 + 0x10) - lVar1 >> 3) * -0x1111111111111111;
      lVar11 = *(long *)(in_x0 + 0x3c0) + lVar9;
      *(long *)(lVar11 + 0x18) = (*(long *)(lVar11 + 0x18) - lVar1 >> 3) * -0x1111111111111111;
      lVar11 = *(long *)(in_x0 + 0x3c0) + lVar9;
      *(long *)(lVar11 + 0x20) = (*(long *)(lVar11 + 0x20) - lVar1 >> 3) * -0x1111111111111111;
      lVar11 = *(long *)(*(long *)(in_x0 + 0x3c0) + lVar9 + 0x40);
      if (lVar11 != 0) {
        *(ulong *)(lVar11 + 0x28) = CONCAT44(uStack_1c,local_20);
      }
      lVar9 = lVar9 + 0x48;
      iVar4 = iVar8 + 1;
      local_20 = iVar8;
    } while ((ulong)uVar2 * 0x48 - lVar9 != 0);
  }
  uVar2 = *(uint *)(in_x0 + 0x3f4);
  uVar6 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    plVar7 = *(long **)(in_x0 + 0x400);
    if (uVar2 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar6 & 0xfffffffe;
      plVar12 = plVar7;
      uVar13 = uVar10;
      do {
        uVar13 = uVar13 - 2;
        *plVar12 = (*plVar12 - lVar1 >> 3) * -0x1111111111111111;
        plVar12[0xd] = (plVar12[0xd] - lVar1 >> 3) * -0x1111111111111111;
        plVar12 = plVar12 + 0x1a;
      } while (uVar13 != 0);
      if (uVar10 == uVar6) goto LAB_00f79b0c;
    }
    lVar9 = uVar6 - uVar10;
    plVar7 = plVar7 + uVar10 * 0xd;
    do {
      lVar9 = lVar9 + -1;
      *plVar7 = (*plVar7 - lVar1 >> 3) * -0x1111111111111111;
      plVar7 = plVar7 + 0xd;
    } while (lVar9 != 0);
  }
LAB_00f79b0c:
  uVar2 = *(uint *)(in_x0 + 0x354);
  if (0 < (int)uVar2) {
    uVar6 = 0;
    lVar11 = *(long *)(in_x0 + 0x360);
    lVar9 = 0x28;
    do {
      if (0 < *(int *)(lVar11 + uVar6 * 0x58 + 0x20)) {
        lVar14 = 0;
        do {
          lVar15 = lVar14 * 8;
          lVar14 = lVar14 + 1;
          *(long *)(lVar11 + lVar9 + lVar15) =
               (*(long *)(lVar11 + lVar9 + lVar15) - lVar1 >> 3) * -0x1111111111111111;
          lVar11 = *(long *)(in_x0 + 0x360);
        } while (lVar14 < *(int *)(lVar11 + uVar6 * 0x58 + 0x20));
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x58;
    } while (uVar6 != uVar2);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


