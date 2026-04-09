// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createModules<BitVector>
// Entry Point: 00769a98
// Size: 1552 bytes
// Signature: TypedModules * __thiscall createModules<BitVector>(DensityMapMultiModifierLua * this, DensityMapExecute * param_1)


/* DensityMapModifier::TypedModules<DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >* 
   DensityMapMultiModifierLua::createModules<BitVector>(DensityMapMultiModifierLua::DensityMapExecute&)
    */

TypedModules * __thiscall
DensityMapMultiModifierLua::createModules<BitVector>
          (DensityMapMultiModifierLua *this,DensityMapExecute *param_1)

{
  uint *puVar1;
  uint *puVar2;
  long **pplVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint in_w16;
  ulong uVar21;
  ulong *__s;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  uint local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined2 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  lVar13 = *(long *)(param_1 + 0x70);
  lVar4 = *(long *)(param_1 + 0x78);
  lVar7 = lVar4 - lVar13;
  if (lVar7 == 0) {
    uVar18 = 0;
    goto LAB_00769b6c;
  }
  uVar15 = lVar7 / 0xa0;
  uVar21 = uVar15;
  if (uVar15 < 2) {
    uVar21 = 1;
  }
  if (uVar21 < 2) {
LAB_00769b1c:
    uVar14 = 0;
    uVar18 = 0;
  }
  else {
    uVar14 = uVar15;
    if (uVar15 < 2) {
      uVar14 = 1;
    }
    if ((int)(uVar14 - 1) == -1 || uVar14 - 1 >> 0x20 != 0) goto LAB_00769b1c;
    uVar14 = uVar21 & 0xfffffffffffffffe;
    uVar18 = 0;
    uVar19 = 0;
    puVar16 = (uint *)(lVar13 + 0xbc);
    uVar20 = uVar14;
    do {
      puVar1 = puVar16 + -0x29;
      if (*puVar1 != 2) {
        in_w16 = puVar16[-0x28];
      }
      puVar2 = puVar16 + -1;
      if (*puVar2 != 2) {
        this = (DensityMapMultiModifierLua *)(ulong)*puVar16;
      }
      puVar16 = puVar16 + 0x50;
      if (uVar18 <= in_w16 && *puVar1 != 2) {
        uVar18 = in_w16;
      }
      if (uVar19 <= (uint)this && *puVar2 != 2) {
        uVar19 = (uint)this;
      }
      uVar20 = uVar20 - 2;
    } while (uVar20 != 0);
    if (uVar18 <= uVar19) {
      uVar18 = uVar19;
    }
    if (uVar21 == uVar14) goto LAB_00769b6c;
  }
  puVar16 = (uint *)(lVar13 + uVar14 * 0xa0 + 0x1c);
  do {
    uVar14 = uVar14 + 1;
    if ((puVar16[-1] != 2) && (uVar18 <= *puVar16)) {
      uVar18 = *puVar16;
    }
    puVar16 = puVar16 + 0x28;
  } while ((uVar14 & 0xffffffff) < uVar15);
LAB_00769b6c:
  uVar18 = uVar18 + 2;
  uVar21 = (ulong)uVar18;
  *(uint *)(param_1 + 0xa8) = uVar18;
  puVar12 = (ulong *)operator_new__(uVar21 * 0x18 + 8);
  __s = puVar12 + 1;
  *puVar12 = uVar21;
  if (uVar18 != 0) {
    memset(__s,0,((uVar21 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
  }
  if (lVar4 != lVar13) {
    uVar15 = 0;
    do {
      puVar17 = (undefined8 *)(lVar13 + uVar15 * 0xa0);
      pplVar3 = (long **)(puVar17 + 2);
      if (*(int *)(puVar17 + 3) == 0) {
        lVar13 = lVar13 + uVar15 * 0xa0;
        uVar23 = *puVar17;
        uVar6 = *(uint *)(lVar13 + 0x1c);
        uVar22 = *(undefined8 *)param_1;
        uVar24 = *(undefined8 *)(lVar13 + 8);
        uVar10 = (**(code **)(**pplVar3 + 0x28))();
        uVar19 = *(uint *)(lVar13 + 0x20);
        uVar5 = *(uint *)(lVar13 + 0x24);
        uVar11 = ~(-1 << (ulong)(uVar5 & 0x1f));
        uVar9 = (**(code **)(**pplVar3 + 0x28))();
        local_f0 = -1 << (ulong)(uVar9 & 0x1f);
        local_124 = *(undefined8 *)(lVar13 + 0x18);
        local_128 = ~local_f0;
        local_148 = NEON_rev64(uVar23,4);
        uStack_114 = *(undefined8 *)(lVar13 + 0x30);
        local_11c = *(undefined8 *)(lVar13 + 0x28);
        local_10c = *(undefined4 *)(lVar13 + 0x38);
        uStack_f4 = uVar11 << (ulong)(uVar19 & 0x1f);
        local_f8 = local_f0 & (uStack_f4 ^ 0xffffffff);
        uStack_f4 = ~uStack_f4;
        local_158 = 0;
        uStack_150 = 0;
        local_ec = 0;
        local_e8 = 0;
        uStack_c8 = *(undefined8 *)(lVar13 + 0x58);
        local_d0 = *(undefined8 *)(lVar13 + 0x50);
        uStack_b8 = *(undefined8 *)(lVar13 + 0x68);
        uStack_c0 = *(undefined8 *)(lVar13 + 0x60);
        uStack_d8 = *(undefined8 *)(lVar13 + 0x48);
        local_e0 = *(undefined8 *)(lVar13 + 0x40);
        uStack_98 = *(undefined8 *)(lVar13 + 0x88);
        local_a0 = *(undefined8 *)(lVar13 + 0x80);
        uStack_88 = *(undefined8 *)(lVar13 + 0x98);
        uStack_90 = *(undefined8 *)(lVar13 + 0x90);
        uStack_a8 = *(undefined8 *)(lVar13 + 0x78);
        local_b0 = *(undefined8 *)(lVar13 + 0x70);
        uStack_140 = uVar24;
        local_138 = uVar10;
        uStack_134 = uVar19;
        local_130 = uVar5;
        uStack_12c = uVar11;
        local_100 = uVar22;
        FUN_00833d74(__s + (ulong)uVar6 * 3,&local_158);
      }
      else if (*(int *)(puVar17 + 3) == 1) {
        if (uVar18 != 0) {
          uVar14 = 0;
          lVar13 = lVar13 + uVar15 * 0xa0;
          puVar12 = __s;
          do {
            if (uVar14 != *(uint *)(lVar13 + 0x1c)) {
              uVar22 = *(undefined8 *)param_1;
              uVar23 = *puVar17;
              uVar24 = *(undefined8 *)(lVar13 + 8);
              uVar10 = (**(code **)(**pplVar3 + 0x28))();
              uVar19 = *(uint *)(lVar13 + 0x24);
              uVar5 = *(uint *)(lVar13 + 0x20);
              uVar6 = ~(-1 << (ulong)(uVar19 & 0x1f));
              uVar11 = (**(code **)(**pplVar3 + 0x28))();
              local_f0 = -1 << (ulong)(uVar11 & 0x1f);
              local_128 = ~local_f0;
              local_148 = NEON_rev64(uVar23,4);
              local_124 = *(undefined8 *)(lVar13 + 0x18);
              uStack_114 = *(undefined8 *)(lVar13 + 0x30);
              local_11c = *(undefined8 *)(lVar13 + 0x28);
              local_10c = *(undefined4 *)(lVar13 + 0x38);
              uStack_f4 = uVar6 << (ulong)(uVar5 & 0x1f);
              local_f8 = local_f0 & (uStack_f4 ^ 0xffffffff);
              uStack_f4 = ~uStack_f4;
              local_158 = 0;
              uStack_150 = 0;
              local_ec = 0;
              local_e8 = 0;
              uStack_c8 = *(undefined8 *)(lVar13 + 0x58);
              local_d0 = *(undefined8 *)(lVar13 + 0x50);
              uStack_b8 = *(undefined8 *)(lVar13 + 0x68);
              uStack_c0 = *(undefined8 *)(lVar13 + 0x60);
              uStack_d8 = *(undefined8 *)(lVar13 + 0x48);
              local_e0 = *(undefined8 *)(lVar13 + 0x40);
              uStack_98 = *(undefined8 *)(lVar13 + 0x88);
              local_a0 = *(undefined8 *)(lVar13 + 0x80);
              uStack_88 = *(undefined8 *)(lVar13 + 0x98);
              uStack_90 = *(undefined8 *)(lVar13 + 0x90);
              uStack_a8 = *(undefined8 *)(lVar13 + 0x78);
              local_b0 = *(undefined8 *)(lVar13 + 0x70);
              uStack_140 = uVar24;
              local_138 = uVar10;
              uStack_134 = uVar5;
              local_130 = uVar19;
              uStack_12c = uVar6;
              local_100 = uVar22;
              FUN_00833d74(puVar12,&local_158);
            }
            uVar14 = uVar14 + 1;
            puVar12 = puVar12 + 3;
          } while (uVar21 != uVar14);
        }
      }
      else if (uVar18 != 0) {
        lVar13 = lVar13 + uVar15 * 0xa0;
        puVar12 = __s;
        uVar14 = uVar21;
        do {
          uVar22 = *(undefined8 *)param_1;
          uVar23 = *puVar17;
          uVar24 = *(undefined8 *)(lVar13 + 8);
          uVar10 = (**(code **)(**pplVar3 + 0x28))();
          uVar19 = *(uint *)(lVar13 + 0x24);
          uVar5 = *(uint *)(lVar13 + 0x20);
          uVar6 = ~(-1 << (ulong)(uVar19 & 0x1f));
          uVar11 = (**(code **)(**pplVar3 + 0x28))();
          local_f0 = -1 << (ulong)(uVar11 & 0x1f);
          local_148 = NEON_rev64(uVar23,4);
          local_128 = ~local_f0;
          uStack_114 = *(undefined8 *)(lVar13 + 0x30);
          local_11c = *(undefined8 *)(lVar13 + 0x28);
          local_124 = *(undefined8 *)(lVar13 + 0x18);
          local_10c = *(undefined4 *)(lVar13 + 0x38);
          uStack_f4 = uVar6 << (ulong)(uVar5 & 0x1f);
          local_158 = 0;
          uStack_150 = 0;
          local_f8 = local_f0 & (uStack_f4 ^ 0xffffffff);
          uStack_f4 = ~uStack_f4;
          local_ec = 0;
          local_e8 = 0;
          uStack_c8 = *(undefined8 *)(lVar13 + 0x58);
          local_d0 = *(undefined8 *)(lVar13 + 0x50);
          uStack_b8 = *(undefined8 *)(lVar13 + 0x68);
          uStack_c0 = *(undefined8 *)(lVar13 + 0x60);
          uStack_d8 = *(undefined8 *)(lVar13 + 0x48);
          local_e0 = *(undefined8 *)(lVar13 + 0x40);
          uStack_98 = *(undefined8 *)(lVar13 + 0x88);
          local_a0 = *(undefined8 *)(lVar13 + 0x80);
          uStack_88 = *(undefined8 *)(lVar13 + 0x98);
          uStack_90 = *(undefined8 *)(lVar13 + 0x90);
          uStack_a8 = *(undefined8 *)(lVar13 + 0x78);
          local_b0 = *(undefined8 *)(lVar13 + 0x70);
          uStack_140 = uVar24;
          local_138 = uVar10;
          uStack_134 = uVar5;
          local_130 = uVar19;
          uStack_12c = uVar6;
          local_100 = uVar22;
          FUN_00833d74(puVar12,&local_158);
          puVar12 = puVar12 + 3;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      lVar13 = *(long *)(param_1 + 0x70);
      uVar14 = (*(long *)(param_1 + 0x78) - lVar13 >> 5) * -0x3333333333333333;
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (uVar15 <= uVar14 && uVar14 - uVar15 != 0);
  }
  if (*(long *)(lVar8 + 0x28) == local_80) {
    return (TypedModules *)__s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


