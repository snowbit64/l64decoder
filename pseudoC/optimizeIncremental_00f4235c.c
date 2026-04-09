// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimizeIncremental
// Entry Point: 00f4235c
// Size: 392 bytes
// Signature: undefined __thiscall optimizeIncremental(btDbvt * this, int param_1)


/* btDbvt::optimizeIncremental(int) */

void __thiscall btDbvt::optimizeIncremental(btDbvt *this,int param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar13 = *(undefined8 **)this;
  iVar14 = *(int *)(this + 0x14);
  if (-1 < param_1) {
    iVar14 = param_1;
  }
  if ((puVar13 != (undefined8 *)0x0) && (0 < iVar14)) {
    while( true ) {
      plVar6 = puVar13 + 6;
      if (*plVar6 != 0) {
        uVar4 = 0;
        do {
          puVar5 = (undefined8 *)puVar13[4];
          if (puVar13 < puVar5) {
            puVar8 = (undefined8 *)puVar5[6];
            lVar9 = puVar5[4];
            uVar7 = (ulong)(puVar8 != puVar13);
            puVar10 = (ulong *)this;
            if (lVar9 != 0) {
              puVar10 = (ulong *)(lVar9 + (ulong)(*(undefined8 **)(lVar9 + 0x30) == puVar5) * 8 +
                                 0x28);
            }
            lVar11 = puVar5[uVar7 + 5];
            *puVar10 = (ulong)puVar13;
            *(undefined8 **)(lVar11 + 0x20) = puVar13;
            puVar5[4] = puVar13;
            plVar12 = puVar13 + 5;
            puVar13[4] = lVar9;
            puVar5[5] = *plVar12;
            puVar5[6] = *plVar6;
            *(undefined8 **)(*plVar12 + 0x20) = puVar5;
            *(undefined8 **)(*plVar6 + 0x20) = puVar5;
            plVar12[puVar8 == puVar13] = (long)puVar5;
            plVar12[uVar7] = lVar11;
            uVar16 = puVar5[1];
            uVar15 = *puVar5;
            uVar18 = puVar5[3];
            uVar17 = puVar5[2];
            uVar19 = *puVar13;
            uVar21 = puVar13[3];
            uVar20 = puVar13[2];
            puVar5[1] = puVar13[1];
            *puVar5 = uVar19;
            puVar5[3] = uVar21;
            puVar5[2] = uVar20;
            puVar13[1] = uVar16;
            *puVar13 = uVar15;
            puVar13[3] = uVar18;
            puVar13[2] = uVar17;
            puVar13 = puVar5;
          }
          uVar2 = *(uint *)(this + 0x18) >> uVar4;
          uVar4 = (ulong)((int)uVar4 + 1U & 0x1f);
          puVar13 = (undefined8 *)puVar13[((ulong)uVar2 & 1) + 5];
          plVar6 = puVar13 + 6;
        } while (*plVar6 != 0);
      }
      lVar9 = FUN_00f424e4(this,puVar13);
      uVar15 = 0;
      if (lVar9 != 0) {
        uVar15 = *(undefined8 *)this;
      }
      FUN_00f42680(this,uVar15,puVar13);
      iVar14 = iVar14 + -1;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      if (iVar14 == 0) break;
      puVar13 = *(undefined8 **)this;
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


