// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyRemoveRigidBody
// Entry Point: 009bb54c
// Size: 360 bytes
// Signature: undefined __thiscall notifyRemoveRigidBody(Bt2Rope * this, btRigidBody * param_1)


/* Bt2Rope::notifyRemoveRigidBody(btRigidBody*) */

void __thiscall Bt2Rope::notifyRemoveRigidBody(Bt2Rope *this,btRigidBody *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  lVar8 = *(long *)this;
  uVar9 = (ulong)*(uint *)(lVar8 + 0x3f4);
  if (0 < (int)*(uint *)(lVar8 + 0x3f4)) {
    iVar6 = 0;
    do {
      lVar10 = *(long *)(lVar8 + 0x400);
      if (*(btRigidBody **)(lVar10 + (long)iVar6 * 0x68 + 0x18) == param_1) {
        uVar9 = (long)(int)uVar9 - 1;
        puVar1 = (undefined8 *)(lVar10 + uVar9 * 0x68);
        puVar11 = (undefined8 *)(lVar10 + (long)iVar6 * 0x68);
        uVar14 = *puVar1;
        uVar13 = puVar1[3];
        uVar12 = puVar1[2];
        uVar2 = *(undefined4 *)(puVar1 + 4);
        uVar17 = puVar11[1];
        uVar15 = *puVar11;
        uVar20 = puVar11[3];
        uVar19 = puVar11[2];
        puVar11[1] = puVar1[1];
        *puVar11 = uVar14;
        puVar11[3] = uVar13;
        puVar11[2] = uVar12;
        uVar3 = *(undefined4 *)(puVar11 + 4);
        *(undefined4 *)(puVar11 + 4) = uVar2;
        uVar12 = *(undefined8 *)((long)puVar1 + 0x24);
        uVar14 = *(undefined8 *)((long)puVar11 + 0x2c);
        uVar13 = *(undefined8 *)((long)puVar11 + 0x24);
        uVar22 = *(undefined8 *)((long)puVar11 + 0x3c);
        uVar21 = *(undefined8 *)((long)puVar11 + 0x34);
        *(undefined8 *)((long)puVar11 + 0x2c) = *(undefined8 *)((long)puVar1 + 0x2c);
        *(undefined8 *)((long)puVar11 + 0x24) = uVar12;
        uVar24 = *(undefined8 *)((long)puVar11 + 0x4c);
        uVar23 = *(undefined8 *)((long)puVar11 + 0x44);
        uVar12 = *(undefined8 *)((long)puVar1 + 0x34);
        uVar18 = *(undefined8 *)((long)puVar11 + 0x5c);
        uVar16 = *(undefined8 *)((long)puVar11 + 0x54);
        *(undefined8 *)((long)puVar11 + 0x3c) = *(undefined8 *)((long)puVar1 + 0x3c);
        *(undefined8 *)((long)puVar11 + 0x34) = uVar12;
        uVar12 = *(undefined8 *)((long)puVar1 + 0x44);
        *(undefined8 *)((long)puVar11 + 0x4c) = *(undefined8 *)((long)puVar1 + 0x4c);
        *(undefined8 *)((long)puVar11 + 0x44) = uVar12;
        uVar12 = *(undefined8 *)((long)puVar1 + 0x54);
        uVar2 = *(undefined4 *)((long)puVar1 + 100);
        uVar4 = *(undefined4 *)((long)puVar11 + 100);
        *(undefined8 *)((long)puVar11 + 0x5c) = *(undefined8 *)((long)puVar1 + 0x5c);
        *(undefined8 *)((long)puVar11 + 0x54) = uVar12;
        *(undefined4 *)((long)puVar11 + 100) = uVar2;
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x400) + uVar9 * 0x68);
        *(undefined8 *)((long)puVar1 + 0x2c) = uVar14;
        *(undefined8 *)((long)puVar1 + 0x24) = uVar13;
        puVar1[1] = uVar17;
        *puVar1 = uVar15;
        puVar1[3] = uVar20;
        puVar1[2] = uVar19;
        *(undefined4 *)(puVar1 + 4) = uVar3;
        *(undefined4 *)((long)puVar1 + 100) = uVar4;
        *(undefined8 *)((long)puVar1 + 0x3c) = uVar22;
        *(undefined8 *)((long)puVar1 + 0x34) = uVar21;
        *(undefined8 *)((long)puVar1 + 0x4c) = uVar24;
        *(undefined8 *)((long)puVar1 + 0x44) = uVar23;
        *(undefined8 *)((long)puVar1 + 0x5c) = uVar18;
        *(undefined8 *)((long)puVar1 + 0x54) = uVar16;
        lVar8 = *(long *)this;
        *(int *)(lVar8 + 0x3f4) = *(int *)(lVar8 + 0x3f4) + -1;
      }
      else {
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < (int)uVar9);
  }
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


