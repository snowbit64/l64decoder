// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendLink
// Entry Point: 00f79fa4
// Size: 480 bytes
// Signature: undefined __thiscall appendLink(btSoftBody * this, int param_1, Material * param_2)


/* btSoftBody::appendLink(int, btSoftBody::Material*) */

void __thiscall btSoftBody::appendLink(btSoftBody *this,int param_1,Material *param_2)

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
    uStack_78 = 0;
    local_80 = 0;
    if (param_2 == (Material *)0x0) {
      uVar10 = 0;
      param_2 = **(Material ***)(this + 0x480);
    }
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(this + 0x3a0) + (ulong)(uint)param_1 * 0x48);
    uStack_78 = puVar7[3];
    local_80 = puVar7[2];
    uStack_68 = puVar7[5];
    local_70 = puVar7[4];
    uVar10 = *puVar7;
    param_2 = (Material *)puVar7[1];
    uStack_58 = puVar7[7];
    local_60 = puVar7[6];
    local_50 = puVar7[8];
  }
  uVar5 = *(uint *)(this + 0x394);
  if (uVar5 == *(uint *)(this + 0x398)) {
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
        lVar4 = (*(code *)PTR_FUN_01048e38)((long)iVar2 * 0x48,0x10);
        uVar5 = *(uint *)(this + 0x394);
      }
      if (0 < (int)uVar5) {
        lVar8 = 0;
        do {
          puVar7 = (undefined8 *)(lVar4 + lVar8);
          puVar1 = (undefined8 *)(*(long *)(this + 0x3a0) + lVar8);
          lVar8 = lVar8 + 0x48;
          uVar9 = *puVar1;
          puVar7[1] = puVar1[1];
          *puVar7 = uVar9;
          uVar13 = puVar1[4];
          uVar12 = puVar1[7];
          uVar11 = puVar1[6];
          uVar9 = puVar1[8];
          uVar15 = puVar1[3];
          uVar14 = puVar1[2];
          puVar7[5] = puVar1[5];
          puVar7[4] = uVar13;
          puVar7[7] = uVar12;
          puVar7[6] = uVar11;
          puVar7[8] = uVar9;
          puVar7[3] = uVar15;
          puVar7[2] = uVar14;
        } while ((ulong)uVar5 * 0x48 - lVar8 != 0);
      }
      if ((*(long *)(this + 0x3a0) != 0) && (this[0x3a8] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar5 = *(uint *)(this + 0x394);
      *(long *)(this + 0x3a0) = lVar4;
      *(int *)(this + 0x398) = iVar2;
      this[0x3a8] = (btSoftBody)0x1;
    }
  }
  puVar7 = (undefined8 *)(*(long *)(this + 0x3a0) + (long)(int)uVar5 * 0x48);
  puVar7[3] = uStack_78;
  puVar7[2] = local_80;
  puVar7[5] = uStack_68;
  puVar7[4] = local_70;
  *puVar7 = uVar10;
  puVar7[1] = param_2;
  puVar7[7] = uStack_58;
  puVar7[6] = local_60;
  puVar7[8] = local_50;
  *(int *)(this + 0x394) = *(int *)(this + 0x394) + 1;
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


