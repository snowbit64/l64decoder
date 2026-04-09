// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendTetra
// Entry Point: 00f7a57c
// Size: 536 bytes
// Signature: undefined __thiscall appendTetra(btSoftBody * this, int param_1, Material * param_2)


/* btSoftBody::appendTetra(int, btSoftBody::Material*) */

void __thiscall btSoftBody::appendTetra(btSoftBody *this,int param_1,Material *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (param_1 < 0) {
    uVar10 = 0;
    local_50 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    if (param_2 == (Material *)0x0) {
      uVar10 = 0;
      param_2 = **(Material ***)(this + 0x480);
    }
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(this + 0x3e0) + (ulong)(uint)param_1 * 0x88);
    uStack_78 = puVar7[0xb];
    local_80 = puVar7[10];
    uStack_68 = puVar7[0xd];
    local_70 = puVar7[0xc];
    uStack_58 = puVar7[0xf];
    local_60 = puVar7[0xe];
    uStack_b8 = puVar7[3];
    local_c0 = puVar7[2];
    uStack_a8 = puVar7[5];
    local_b0 = puVar7[4];
    uStack_98 = puVar7[7];
    local_a0 = puVar7[6];
    uStack_88 = puVar7[9];
    local_90 = puVar7[8];
    uVar10 = *puVar7;
    param_2 = (Material *)puVar7[1];
    local_50 = puVar7[0x10];
  }
  uVar5 = *(uint *)(this + 0x3d4);
  if (uVar5 == *(uint *)(this + 0x3d8)) {
    iVar2 = uVar5 << 1;
    if (uVar5 == 0) {
      iVar2 = 1;
    }
    if ((int)uVar5 < iVar2) {
      if (iVar2 == 0) {
        lVar4 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar4 = (*(code *)PTR_FUN_01048e38)((long)iVar2 * 0x88,0x10);
        uVar5 = *(uint *)(this + 0x3d4);
      }
      if (0 < (int)uVar5) {
        lVar8 = 0;
        do {
          puVar7 = (undefined8 *)(lVar4 + lVar8);
          puVar1 = (undefined8 *)(*(long *)(this + 0x3e0) + lVar8);
          lVar8 = lVar8 + 0x88;
          uVar9 = *puVar1;
          puVar7[1] = puVar1[1];
          *puVar7 = uVar9;
          uVar12 = puVar1[6];
          uVar11 = puVar1[9];
          uVar9 = puVar1[8];
          uVar16 = puVar1[3];
          uVar15 = puVar1[2];
          uVar14 = puVar1[5];
          uVar13 = puVar1[4];
          puVar7[7] = puVar1[7];
          puVar7[6] = uVar12;
          puVar7[9] = uVar11;
          puVar7[8] = uVar9;
          puVar7[3] = uVar16;
          puVar7[2] = uVar15;
          puVar7[5] = uVar14;
          puVar7[4] = uVar13;
          uVar13 = puVar1[0xc];
          uVar12 = puVar1[0xf];
          uVar11 = puVar1[0xe];
          uVar9 = puVar1[0x10];
          uVar15 = puVar1[0xb];
          uVar14 = puVar1[10];
          puVar7[0xd] = puVar1[0xd];
          puVar7[0xc] = uVar13;
          puVar7[0xf] = uVar12;
          puVar7[0xe] = uVar11;
          puVar7[0x10] = uVar9;
          puVar7[0xb] = uVar15;
          puVar7[10] = uVar14;
        } while ((ulong)uVar5 * 0x88 - lVar8 != 0);
      }
      if ((*(long *)(this + 0x3e0) != 0) && (this[1000] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar5 = *(uint *)(this + 0x3d4);
      *(long *)(this + 0x3e0) = lVar4;
      *(int *)(this + 0x3d8) = iVar2;
      this[1000] = (btSoftBody)0x1;
    }
  }
  puVar7 = (undefined8 *)(*(long *)(this + 0x3e0) + (long)(int)uVar5 * 0x88);
  puVar7[0xb] = uStack_78;
  puVar7[10] = local_80;
  puVar7[0xd] = uStack_68;
  puVar7[0xc] = local_70;
  *puVar7 = uVar10;
  puVar7[1] = param_2;
  puVar7[0xf] = uStack_58;
  puVar7[0xe] = local_60;
  puVar7[3] = uStack_b8;
  puVar7[2] = local_c0;
  puVar7[5] = uStack_a8;
  puVar7[4] = local_b0;
  puVar7[0x10] = local_50;
  puVar7[7] = uStack_98;
  puVar7[6] = local_a0;
  puVar7[9] = uStack_88;
  puVar7[8] = local_90;
  *(int *)(this + 0x3d4) = *(int *)(this + 0x3d4) + 1;
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


