// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomShader
// Entry Point: 009463e4
// Size: 556 bytes
// Signature: undefined __thiscall setCustomShader(GsMaterial * this, CustomShader * param_1, uint param_2)


/* GsMaterial::setCustomShader(CustomShader*, unsigned int) */

void __thiscall GsMaterial::setCustomShader(GsMaterial *this,CustomShader *param_1,uint param_2)

{
  long lVar1;
  void *pvVar2;
  size_t sVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = (ulong)param_2;
  if (*(CustomShader **)(this + 0x80) != param_1) {
    releaseCustomShaderResources();
    *(void **)(this + 0x70) = (void *)0x0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(CustomShader **)(this + 0x80) = param_1;
    if (param_1 != (CustomShader *)0x0) {
      FUN_00f276d0(1,param_1 + 8);
      lVar9 = *(long *)(this + 0x80);
      *(uint *)(this + 0x88) = param_2;
      uVar7 = (*(long *)(lVar9 + 0x118) - *(long *)(lVar9 + 0x110) >> 5) * 0x6db6db6db6db6db7;
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        uVar7 = 0;
      }
      else {
        lVar5 = *(long *)(lVar9 + 0x110) + uVar8 * 0xe0;
        uVar7 = *(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58) & 0x7fffffff8;
      }
      pvVar2 = operator_new__(uVar7);
      lVar5 = *(long *)(lVar9 + 0x110);
      lVar1 = *(long *)(lVar9 + 0x118);
      *(void **)(this + 0x70) = pvVar2;
      uVar7 = (lVar1 - lVar5 >> 5) * 0x6db6db6db6db6db7;
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        sVar3 = 0;
      }
      else {
        lVar5 = lVar5 + uVar8 * 0xe0;
        sVar3 = *(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58) & 0x7fffffff8;
      }
      memset(pvVar2,0,sVar3);
      uVar7 = (*(long *)(lVar9 + 0x118) - *(long *)(lVar9 + 0x110) >> 5) * 0x6db6db6db6db6db7;
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        uVar7 = 0;
      }
      else {
        lVar5 = *(long *)(lVar9 + 0x110) + uVar8 * 0xe0;
        uVar7 = (*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40)) * 2 & 0xffffffff0;
      }
      pvVar2 = operator_new__(uVar7);
      lVar5 = *(long *)(lVar9 + 0x110);
      lVar9 = *(long *)(lVar9 + 0x118);
      *(void **)(this + 0x78) = pvVar2;
      uVar7 = (lVar9 - lVar5 >> 5) * 0x6db6db6db6db6db7;
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        sVar3 = 0;
      }
      else {
        lVar5 = lVar5 + uVar8 * 0xe0;
        sVar3 = (*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40)) * 2 & 0xffffffff0;
      }
      memset(pvVar2,0,sVar3);
    }
    initMaterialAttributes();
    uVar4 = 0x25;
    if (*(long *)(this + 0x38) != 0) {
      uVar4 = 0x225;
    }
    lVar9 = *(long *)(this + 0x80);
    *(uint *)(this + 0x98) = uVar4;
    if (lVar9 != 0) {
      uVar8 = (ulong)*(uint *)(this + 0x88);
      uVar7 = (*(long *)(lVar9 + 0x118) - *(long *)(lVar9 + 0x110) >> 5) * 0x6db6db6db6db6db7;
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x110) + uVar8 * 0xe0;
        uVar4 = *(uint *)(lVar9 + 0x70) | uVar4;
        uVar6 = ~*(uint *)(lVar9 + 0x74);
      }
      *(uint *)(this + 0x98) = uVar6 & uVar4;
    }
    this[0x160] = (GsMaterial)0x1;
    return;
  }
  setCustomShaderVariation(this,param_2,false);
  return;
}


