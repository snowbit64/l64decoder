// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DoNode
// Entry Point: 00f8b63c
// Size: 1032 bytes
// Signature: undefined __thiscall DoNode(CollideSDF_RS * this, Node * param_1)


/* btSoftColliders::CollideSDF_RS::DoNode(btSoftBody::Node&) const */

void __thiscall btSoftColliders::CollideSDF_RS::DoNode(CollideSDF_RS *this,Node *param_1)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  sCti asStack_c0 [8];
  float local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  Node *local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[0x70] & 1) == 0) {
    pfVar2 = (float *)(this + 0x20);
    if (*(float *)(param_1 + 0x60) <= 0.0) {
      pfVar2 = (float *)(this + 0x24);
    }
    uVar4 = btSoftBody::checkContact
                      (*(btSoftBody **)(this + 8),*(btCollisionObjectWrapper **)(this + 0x10),
                       (btVector3 *)(param_1 + 0x10),*pfVar2,asStack_c0);
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(this + 0x18);
      fVar8 = *(float *)(param_1 + 0x60);
      if (lVar5 == 0) {
        if (fVar8 <= 0.0) goto LAB_00f8b9c0;
        lVar5 = *(long *)(*(long *)(this + 0x10) + 0x10);
        fVar9 = fVar8;
      }
      else {
        fVar9 = *(float *)(lVar5 + 0x19c) + fVar8;
        if (fVar9 <= 0.0) goto LAB_00f8b9c0;
      }
      if (((DoNode(btSoftBody::Node&)::iwiStatic & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&DoNode(btSoftBody::Node&)::iwiStatic), iVar3 != 0)) {
        DoNode(btSoftBody::Node&)::iwiStatic._24_8_ = 0;
        DoNode(btSoftBody::Node&)::iwiStatic._16_8_ = 0;
        DoNode(btSoftBody::Node&)::iwiStatic._40_8_ = 0;
        DoNode(btSoftBody::Node&)::iwiStatic._32_8_ = 0;
        DoNode(btSoftBody::Node&)::iwiStatic._8_8_ = 0;
        DoNode(btSoftBody::Node&)::iwiStatic._0_8_ = 0;
        __cxa_guard_release(&DoNode(btSoftBody::Node&)::iwiStatic);
      }
      puVar6 = DoNode(btSoftBody::Node&)::iwiStatic;
      lVar7 = *(long *)(this + 0x18);
      local_68 = *(float *)(param_1 + 0x10) - *(float *)(lVar5 + 0x38);
      fStack_64 = *(float *)(param_1 + 0x14) - *(float *)(lVar5 + 0x3c);
      local_60 = *(float *)(param_1 + 0x18) - *(float *)(lVar5 + 0x40);
      if (lVar7 == 0) {
        lVar5 = *(long *)(this + 8);
        fVar14 = 0.0;
        fVar15 = 0.0;
        fVar10 = 0.0;
        fVar11 = *(float *)(lVar5 + 0x240);
      }
      else {
        lVar5 = *(long *)(this + 8);
        fVar14 = (float)NEON_fnmsub(*(float *)(lVar7 + 400),local_60,
                                    *(float *)(lVar7 + 0x194) * fStack_64);
        fVar10 = (float)NEON_fnmsub(*(float *)(lVar7 + 0x194),local_68,
                                    *(float *)(lVar7 + 0x18c) * local_60);
        fVar13 = (float)NEON_fnmsub(*(float *)(lVar7 + 0x18c),fStack_64,
                                    *(float *)(lVar7 + 400) * local_68);
        fVar11 = *(float *)(lVar5 + 0x240);
        fVar14 = fVar11 * (fVar14 + *(float *)(lVar7 + 0x17c));
        fVar15 = fVar11 * (fVar10 + *(float *)(lVar7 + 0x180));
        fVar10 = fVar11 * (fVar13 + *(float *)(lVar7 + 0x184));
        puVar6 = (undefined1 *)(lVar7 + 0x14c);
      }
      local_58 = fVar11 * fVar8;
      fVar14 = *(float *)(param_1 + 0x10) - (fVar14 + *(float *)(param_1 + 0x20));
      uVar17 = NEON_fnmsub(*(float *)((long)puVar6 + 0x10),local_68,*(float *)puVar6 * fStack_64);
      fVar13 = *(float *)(param_1 + 0x14) - (fVar15 + *(float *)(param_1 + 0x24));
      fVar21 = (float)NEON_fnmsub(*(float *)((long)puVar6 + 4),local_60,
                                  *(float *)((long)puVar6 + 0x24) * local_68);
      fVar8 = (float)NEON_fnmsub(*(float *)puVar6,local_60,
                                 *(float *)((long)puVar6 + 0x20) * local_68);
      fVar18 = (float)NEON_fnmsub(*(float *)((long)puVar6 + 0x14),local_68,
                                  *(float *)((long)puVar6 + 4) * fStack_64);
      fVar23 = (float)NEON_fnmsub(*(float *)((long)puVar6 + 0x18),local_68,
                                  *(float *)((long)puVar6 + 8) * fStack_64);
      uVar12 = NEON_fmsub(uVar17,fStack_64,fVar9);
      fVar15 = (float)NEON_fnmsub(*(float *)((long)puVar6 + 0x20),fStack_64,
                                  *(float *)((long)puVar6 + 0x10) * local_60);
      uVar25 = NEON_fnmsub(*(float *)((long)puVar6 + 8),local_60,
                           *(float *)((long)puVar6 + 0x28) * local_68);
      fVar20 = (float)NEON_fnmsub(*(float *)((long)puVar6 + 0x28),fStack_64,
                                  *(float *)((long)puVar6 + 0x18) * local_60);
      fVar19 = (float)NEON_fmadd(fVar18,local_68,uVar12);
      fVar26 = (float)NEON_fnmsub(uVar25,fStack_64,fVar21 * local_60);
      uVar16 = NEON_fnmsub(*(float *)((long)puVar6 + 0x24),fStack_64,
                           *(float *)((long)puVar6 + 0x14) * local_60);
      fVar22 = (float)NEON_fnmsub(fVar21,local_68,fVar8 * fStack_64);
      fVar24 = (float)NEON_fnmsub(fVar23,fStack_64,fVar18 * local_60);
      fVar23 = (float)NEON_fnmsub(uVar17,local_60,fVar23 * local_68);
      uVar17 = NEON_fmadd(fVar8,local_60,fVar9);
      uVar12 = NEON_fmsub(uVar16,local_60,fVar9);
      fVar27 = (float)NEON_fnmsub(fVar15,local_60,fVar20 * local_68);
      fVar21 = (float)NEON_fmsub(uVar25,local_68,uVar17);
      local_88 = (float)NEON_fnmsub(fVar24,fVar22,fVar26 * fVar19);
      fVar9 = *(float *)(param_1 + 0x18) - (fVar10 + *(float *)(param_1 + 0x28));
      fVar8 = (float)NEON_fmadd(fVar20,fStack_64,uVar12);
      fVar18 = (float)NEON_fnmsub(uVar16,local_68,fVar15 * fStack_64);
      uVar12 = NEON_fmadd(uStack_b4,fVar13,local_b8 * fVar14);
      local_98 = (float)NEON_fnmsub(fVar21,fVar19,fVar23 * fVar22);
      fVar15 = (float)NEON_fmadd(local_b0,fVar9,uVar12);
      local_8c = 0;
      local_78 = (float)NEON_fnmsub(fVar26,fVar23,fVar21 * fVar24);
      local_7c = 0;
      uVar12 = NEON_fmadd(local_98,fVar8,local_88 * fVar27);
      local_6c = 0;
      fVar14 = (float)NEON_fmsub(fVar15,local_b8,fVar14);
      uVar16 = NEON_fmsub(fVar15,uStack_b4,fVar13);
      fVar10 = *(float *)(*(long *)(*(long *)(this + 0x10) + 0x10) + 0xf4) *
               *(float *)(lVar5 + 0x194);
      fVar13 = (float)NEON_fmadd(local_78,fVar18,uVar12);
      uVar12 = NEON_fmsub(fVar15,local_b0,fVar9);
      local_5c = 0;
      fVar15 = fVar10 * fVar15;
      uVar16 = NEON_fmadd(uVar16,uVar16,fVar14 * fVar14);
      local_70 = 1.0 / (fVar13 * fVar11);
      fVar9 = (float)NEON_fmadd(uVar12,uVar12,uVar16);
      fStack_94 = (float)NEON_fnmsub(fVar23,fVar18,fVar27 * fVar19);
      local_90 = (float)NEON_fnmsub(fVar27,fVar22,fVar21 * fVar18);
      fStack_84 = (float)NEON_fnmsub(fVar8,fVar19,fVar24 * fVar18);
      local_80 = (float)NEON_fnmsub(fVar26,fVar18,fVar8 * fVar22);
      fStack_54 = 0.0;
      if (fVar15 * fVar15 <= fVar9) {
        fStack_54 = 1.0 - fVar10;
      }
      fStack_74 = (float)NEON_fnmsub(fVar27,fVar24,fVar8 * fVar23);
      fVar8 = (float)NEON_fnmsub(fVar8,fVar21,fVar27 * fVar26);
      local_98 = local_70 * local_98;
      fStack_94 = local_70 * fStack_94;
      local_90 = local_70 * local_90;
      local_88 = local_70 * local_88;
      fStack_84 = local_70 * fStack_84;
      local_80 = local_70 * local_80;
      local_78 = local_70 * local_78;
      fStack_74 = local_70 * fStack_74;
      local_70 = local_70 * fVar8;
      lVar7 = 0x19c;
      if ((*(uint *)(*(long *)(*(long *)(this + 0x10) + 0x10) + 0xe0) & 3) != 0) {
        lVar7 = 0x1a0;
      }
      local_50 = *(undefined4 *)(lVar5 + lVar7);
      local_a0 = param_1;
      btAlignedObjectArray<btSoftBody::RContact>::push_back
                ((btAlignedObjectArray<btSoftBody::RContact> *)(lVar5 + 0x410),
                 (RContact *)asStack_c0);
      lVar5 = *(long *)(this + 0x18);
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xe0) & 3) == 0)) {
        if ((*(uint *)(lVar5 + 0xec) & 0xfffffffe) != 4) {
          *(undefined4 *)(lVar5 + 0xec) = 1;
        }
        *(undefined4 *)(lVar5 + 0xf0) = 0;
      }
    }
  }
LAB_00f8b9c0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


