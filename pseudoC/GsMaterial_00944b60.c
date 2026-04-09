// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsMaterial
// Entry Point: 00944b60
// Size: 1104 bytes
// Signature: undefined __thiscall GsMaterial(GsMaterial * this, MaterialDesc * param_1)


/* GsMaterial::GsMaterial(MaterialDesc const&) */

void __thiscall GsMaterial::GsMaterial(GsMaterial *this,MaterialDesc *param_1)

{
  GsMaterial GVar1;
  undefined2 uVar2;
  void *__s;
  undefined8 *puVar3;
  size_t sVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  void **ppvVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  Entity::Entity((Entity *)this,*(char **)(param_1 + 8),(bool)param_1[0x10]);
  uVar13 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = uVar13;
  *(undefined ***)this = &PTR__GsMaterial_00fe03a8;
  lVar7 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined ***)(this + 0x20) = &PTR__GsMaterial_00fe03d0;
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x2000000;
  *(long *)(this + 0x30) = lVar7;
  *(long *)(this + 0x38) = lVar6;
  *(undefined8 *)(this + 0x40) = uVar16;
  *(undefined8 *)(this + 0x48) = uVar19;
  if (lVar7 != 0) {
    FUN_00f276d0(1,lVar7 + 8);
    lVar6 = *(long *)(this + 0x38);
  }
  if (lVar6 != 0) {
    FUN_00f276d0(1,lVar6 + 8);
  }
  if (*(long *)(this + 0x40) != 0) {
    FUN_00f276d0(1,*(long *)(this + 0x40) + 8);
  }
  if (*(long *)(this + 0x48) != 0) {
    FUN_00f276d0(1,*(long *)(this + 0x48) + 8);
  }
  uVar13 = *(undefined4 *)(param_1 + 0x38);
  fVar18 = 0.0;
  uVar19 = *(undefined8 *)(param_1 + 0x3c);
  GVar1 = *(GsMaterial *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x50) = uVar13;
  uVar16 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(this + 0x54) = uVar19;
  this[100] = GVar1;
  *(undefined8 *)(this + 0x5c) = uVar16;
  fVar14 = *(float *)(param_1 + 0x4c);
  fVar17 = fVar14 + 1.0;
  *(float *)(this + 0x68) = fVar14;
  if (fVar17 != 0.0) {
    fVar18 = ((1.0 - fVar14) * (1.0 - fVar14)) / (fVar17 * fVar17);
  }
  *(float *)(this + 0xa4) = fVar18;
  uVar15 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0xa8) = uVar13;
  lVar7 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(this + 0xac) = uVar15;
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  ppvVar12 = (void **)(this + 0x70);
  *ppvVar12 = (void *)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  uVar13 = *(undefined4 *)(param_1 + 0x70);
  *(long *)(this + 0x80) = lVar7;
  *(undefined8 *)(this + 0xb0) = uVar16;
  *(undefined4 *)(this + 0x88) = uVar13;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    FUN_00f276d0(1,lVar7 + 8);
    lVar7 = *(long *)(this + 0x80);
    uVar11 = (ulong)*(uint *)(this + 0x88);
    uVar9 = (*(long *)(lVar7 + 0x118) - *(long *)(lVar7 + 0x110) >> 5) * 0x6db6db6db6db6db7;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = 0;
    }
    else {
      lVar6 = *(long *)(lVar7 + 0x110) + uVar11 * 0xe0;
      uVar9 = *(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58) & 0x7fffffff8;
    }
                    /* try { // try from 00944cf4 to 00944cf7 has its CatchHandler @ 00944fb4 */
    __s = operator_new__(uVar9);
    lVar6 = *(long *)(lVar7 + 0x110);
    lVar10 = *(long *)(lVar7 + 0x118);
    *ppvVar12 = __s;
    uVar9 = (lVar10 - lVar6 >> 5) * 0x6db6db6db6db6db7;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      sVar4 = 0;
    }
    else {
      lVar6 = lVar6 + uVar11 * 0xe0;
      sVar4 = *(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58) & 0x7fffffff8;
    }
    memset(__s,0,sVar4);
    lVar6 = *(long *)(lVar7 + 0x110);
    uVar9 = (*(long *)(lVar7 + 0x118) - lVar6 >> 5) * 0x6db6db6db6db6db7;
    if (uVar11 <= uVar9 && uVar9 - uVar11 != 0) {
      lVar10 = lVar6 + uVar11 * 0xe0;
      uVar5 = (uint)((ulong)(*(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58)) >> 3);
      if (*(uint *)(param_1 + 0x74) <= uVar5) {
        uVar5 = *(uint *)(param_1 + 0x74);
      }
      if (uVar5 != 0) {
        lVar7 = 0;
        while( true ) {
          *(undefined8 *)((long)__s + lVar7) = *(undefined8 *)(param_1 + lVar7 + 0x80);
          if (*(long *)((long)*ppvVar12 + lVar7) != 0) {
            FUN_00f276d0(1,*(long *)((long)*ppvVar12 + lVar7) + 8);
          }
          if ((ulong)uVar5 * 8 + -8 == lVar7) break;
          __s = *ppvVar12;
          lVar7 = lVar7 + 8;
        }
        lVar7 = *(long *)(this + 0x80);
        uVar11 = (ulong)*(uint *)(this + 0x88);
        lVar6 = *(long *)(lVar7 + 0x110);
        uVar9 = (*(long *)(lVar7 + 0x118) - lVar6 >> 5) * 0x6db6db6db6db6db7;
      }
    }
    if (uVar11 < uVar9) {
      lVar6 = lVar6 + uVar11 * 0xe0;
      uVar9 = (*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40)) * 2 & 0xffffffff0;
    }
    else {
      uVar9 = 0;
    }
                    /* try { // try from 00944e24 to 00944e27 has its CatchHandler @ 00944fb0 */
    puVar3 = (undefined8 *)operator_new__(uVar9);
    lVar6 = *(long *)(lVar7 + 0x110);
    lVar10 = *(long *)(lVar7 + 0x118);
    *(undefined8 **)(this + 0x78) = puVar3;
    uVar9 = (lVar10 - lVar6 >> 5) * 0x6db6db6db6db6db7;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      sVar4 = 0;
    }
    else {
      lVar6 = lVar6 + uVar11 * 0xe0;
      sVar4 = (*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40)) * 2 & 0xffffffff0;
    }
    memset(puVar3,0,sVar4);
    uVar9 = (*(long *)(lVar7 + 0x118) - *(long *)(lVar7 + 0x110) >> 5) * 0x6db6db6db6db6db7;
    if (uVar11 <= uVar9 && uVar9 - uVar11 != 0) {
      lVar6 = *(long *)(lVar7 + 0x110) + uVar11 * 0xe0;
      uVar5 = (uint)((ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40)) >> 3);
      if (*(uint *)(param_1 + 0x78) <= uVar5) {
        uVar5 = *(uint *)(param_1 + 0x78);
      }
      if (uVar5 != 0) {
        uVar16 = *(undefined8 *)(param_1 + 0x100);
        puVar3[1] = *(undefined8 *)(param_1 + 0x108);
        *puVar3 = uVar16;
        if (uVar5 != 1) {
          lVar6 = (ulong)uVar5 - 1;
          lVar7 = 0x110;
          do {
            lVar6 = lVar6 + -1;
            puVar3 = (undefined8 *)(param_1 + lVar7);
            uVar16 = *puVar3;
            lVar10 = *(long *)(this + 0x78) + lVar7;
            lVar7 = lVar7 + 0x10;
            *(undefined8 *)(lVar10 + -0xf8) = puVar3[1];
            *(undefined8 *)(lVar10 + -0x100) = uVar16;
          } while (lVar6 != 0);
        }
        lVar7 = *(long *)(this + 0x80);
      }
    }
  }
  uVar13 = *(undefined4 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x90) = 0;
  uVar5 = 0x25;
  if (*(long *)(this + 0x38) != 0) {
    uVar5 = 0x225;
  }
  *(undefined4 *)(this + 0xa0) = uVar13;
  *(uint *)(this + 0x98) = uVar5;
  if (lVar7 != 0) {
    uVar9 = (ulong)*(uint *)(this + 0x88);
    uVar11 = (*(long *)(lVar7 + 0x118) - *(long *)(lVar7 + 0x110) >> 5) * 0x6db6db6db6db6db7;
    if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x110) + uVar9 * 0xe0;
      uVar5 = *(uint *)(lVar7 + 0x70) | uVar5;
      uVar8 = ~*(uint *)(lVar7 + 0x74);
    }
    *(uint *)(this + 0x98) = uVar8 & uVar5;
  }
  this[0x9c] = *(GsMaterial *)(param_1 + 0x66);
  uVar2 = *(undefined2 *)(param_1 + 100);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined2 *)(this + 0x9d) = uVar2;
  uVar13 = *(undefined4 *)(param_1 + 0x240);
  this[0x160] = (GsMaterial)0x1;
  *(undefined4 *)(this + 0x170) = uVar13;
  return;
}


