// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BoundingAxisAlignedBox
// Entry Point: 00b60200
// Size: 520 bytes
// Signature: undefined __thiscall BoundingAxisAlignedBox(BoundingAxisAlignedBox * this, vector * param_1)


/* BoundingAxisAlignedBox::BoundingAxisAlignedBox(std::__ndk1::vector<BoundingAxisAlignedBox,
   std::__ndk1::allocator<BoundingAxisAlignedBox> > const&) */

void __thiscall
BoundingAxisAlignedBox::BoundingAxisAlignedBox(BoundingAxisAlignedBox *this,vector *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  BoundingVolume::BoundingVolume((BoundingVolume *)this,1);
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  lVar1 = *(long *)param_1;
  lVar4 = *(long *)(param_1 + 8);
  *(undefined8 *)(this + 0x24) = 0xf645371976453719;
  *(undefined8 *)(this + 0x1c) = 0x7645371976453719;
  *(undefined ***)this = &PTR__BoundingAxisAlignedBox_00fea2e8;
  *(undefined8 *)(this + 0x2c) = 0xf6453719f6453719;
  lVar4 = lVar4 - lVar1;
  if (lVar4 == 0) {
    fVar5 = 0.0;
    fVar7 = 0.0;
    fVar9 = 0.0;
  }
  else {
    fVar7 = -1e+33;
    fVar9 = 1e+33;
    uVar2 = 0;
    uVar3 = (lVar4 >> 3) * 0x6db6db6db6db6db7;
    fVar5 = fVar9;
    fVar10 = fVar7;
    fVar8 = fVar7;
    fVar6 = fVar9;
    do {
      lVar4 = lVar1 + uVar2 * 0x38;
      uVar2 = (ulong)((int)uVar2 + 1);
      if (fVar10 < *(float *)(lVar4 + 0x1c)) {
        fVar10 = *(float *)(lVar4 + 0x1c);
      }
      *(float *)(this + 0x28) = fVar10;
      if (*(float *)(lVar4 + 0x1c) < fVar5) {
        fVar5 = *(float *)(lVar4 + 0x1c);
      }
      *(float *)(this + 0x1c) = fVar5;
      if (fVar7 < *(float *)(lVar4 + 0x20)) {
        fVar7 = *(float *)(lVar4 + 0x20);
      }
      *(float *)(this + 0x2c) = fVar7;
      if (*(float *)(lVar4 + 0x20) < fVar9) {
        fVar9 = *(float *)(lVar4 + 0x20);
      }
      *(float *)(this + 0x20) = fVar9;
      if (fVar8 < *(float *)(lVar4 + 0x24)) {
        fVar8 = *(float *)(lVar4 + 0x24);
      }
      *(float *)(this + 0x30) = fVar8;
      fVar11 = *(float *)(lVar4 + 0x24);
      *(undefined4 *)(this + 0x18) = 0;
      if (fVar11 < fVar6) {
        fVar6 = fVar11;
      }
      *(float *)(this + 0x24) = fVar6;
      *(float *)(this + 0xc) = (fVar10 + fVar5) * 0.5;
      *(float *)(this + 0x10) = (fVar7 + fVar9) * 0.5;
      *(float *)(this + 0x14) = (fVar8 + fVar6) * 0.5;
      if (fVar10 < *(float *)(lVar4 + 0x28)) {
        fVar10 = *(float *)(lVar4 + 0x28);
      }
      *(float *)(this + 0x28) = fVar10;
      if (*(float *)(lVar4 + 0x28) < fVar5) {
        fVar5 = *(float *)(lVar4 + 0x28);
      }
      *(float *)(this + 0x1c) = fVar5;
      if (fVar7 < *(float *)(lVar4 + 0x2c)) {
        fVar7 = *(float *)(lVar4 + 0x2c);
      }
      *(float *)(this + 0x2c) = fVar7;
      if (*(float *)(lVar4 + 0x2c) < fVar9) {
        fVar9 = *(float *)(lVar4 + 0x2c);
      }
      *(float *)(this + 0x20) = fVar9;
      if (fVar8 < *(float *)(lVar4 + 0x30)) {
        fVar8 = *(float *)(lVar4 + 0x30);
      }
      *(float *)(this + 0x30) = fVar8;
      fVar11 = *(float *)(lVar4 + 0x30);
      *(undefined4 *)(this + 0x18) = 0;
      if (fVar11 < fVar6) {
        fVar6 = fVar11;
      }
      *(float *)(this + 0x24) = fVar6;
      *(float *)(this + 0xc) = (fVar10 + fVar5) * 0.5;
      *(float *)(this + 0x10) = (fVar7 + fVar9) * 0.5;
      *(float *)(this + 0x14) = (fVar8 + fVar6) * 0.5;
    } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
    fVar5 = (fVar5 + fVar10) * 0.5;
    fVar7 = (fVar9 + fVar7) * 0.5;
    fVar9 = (fVar6 + fVar8) * 0.5;
  }
  *(float *)(this + 0xc) = fVar5;
  *(float *)(this + 0x10) = fVar7;
  *(float *)(this + 0x14) = fVar9;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


