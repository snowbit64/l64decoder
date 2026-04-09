// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointDriveAxis
// Entry Point: 009a544c
// Size: 424 bytes
// Signature: undefined __thiscall setJointDriveAxis(Bt2ScenegraphPhysicsContext * this, uint param_1, SetJointDriveAxis * param_2)


/* Bt2ScenegraphPhysicsContext::setJointDriveAxis(unsigned int,
   Bt2ScenegraphPhysicsContext::SetJointDriveAxis const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setJointDriveAxis
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetJointDriveAxis *param_2)

{
  uint uVar1;
  SetJointDriveAxis SVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  long lVar4;
  Bt2ScenegraphPhysicsContext *pBVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pBVar5 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar3 = this + 0x1c8;
    do {
      if (*(uint *)(pBVar5 + 0x20) >= param_1) {
        pBVar3 = pBVar5;
      }
      pBVar5 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar5 + (ulong)(*(uint *)(pBVar5 + 0x20) < param_1) * 8);
    } while (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar3 != this + 0x1c8) && (*(uint *)(pBVar3 + 0x20) <= param_1)) {
      lVar4 = *(long *)(pBVar3 + 0x30);
      uVar1 = *(uint *)(param_2 + 4);
      uVar8 = (ulong)uVar1;
      if (*param_2 == (SetJointDriveAxis)0x0) {
        SVar2 = param_2[9];
        lVar9 = lVar4 + (long)(int)uVar1 * 0x44;
        *(undefined *)(lVar9 + 0x1e0) = 0;
        *(undefined *)(lVar9 + 0x1ec) = 0;
        *(undefined4 *)(lVar9 + 0x1e4) = 0;
        if (SVar2 != (SetJointDriveAxis)0x0) {
          lVar11 = lVar4 + (long)(int)uVar1 * 0x44;
          uVar12 = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(lVar9 + 0x1e4) = *(undefined4 *)(param_2 + 0x1c);
          *(undefined *)(lVar9 + 0x1e0) = 1;
          *(undefined4 *)(lVar11 + 0x1e8) = uVar12;
          *(undefined8 *)(lVar11 + 0x1d8) = 0x3f666666;
        }
        if (param_2[8] != (SetJointDriveAxis)0x0) {
          fVar13 = *(float *)(param_2 + 0xc);
          uVar12 = *(undefined4 *)(param_2 + 0x10);
          fVar15 = *(float *)(*(long *)(this + 0x30) + 0x9c);
          lVar4 = lVar4 + (long)(int)uVar1 * 0x44;
          *(undefined *)(lVar9 + 0x1e0) = 1;
          fVar14 = (float)NEON_fmadd(fVar15,fVar13,uVar12);
          *(undefined *)(lVar9 + 0x1ec) = 1;
          fVar14 = 1.0 / (fVar15 * fVar14);
          uVar12 = *(undefined4 *)(param_2 + 0x18);
          *(undefined4 *)(lVar4 + 0x1e8) = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(lVar4 + 0x1f0) = uVar12;
          *(float *)(lVar4 + 0x1dc) = fVar14;
          *(float *)(lVar4 + 0x1d8) = fVar13 * fVar15 * fVar14;
        }
      }
      else {
        lVar9 = lVar4 + 0xcc + uVar8;
        puVar6 = (undefined *)(lVar9 + 0x83);
        *puVar6 = 0;
        puVar10 = (undefined4 *)(lVar4 + 0xcc + uVar8 * 4 + 0x98);
        *puVar10 = 0;
        puVar7 = (undefined *)(lVar9 + 0x80);
        *puVar7 = 0;
        if (param_2[9] != (SetJointDriveAxis)0x0) {
          lVar9 = lVar4 + uVar8 * 4;
          *puVar10 = *(undefined4 *)(param_2 + 0x1c);
          uVar12 = *(undefined4 *)(param_2 + 0x14);
          *puVar7 = 1;
          *(undefined4 *)(lVar9 + 300) = 0x3f666666;
          *(undefined4 *)(lVar9 + 0x13c) = 0;
          *(undefined4 *)(lVar9 + 0x174) = uVar12;
        }
        if (param_2[8] != (SetJointDriveAxis)0x0) {
          lVar4 = lVar4 + uVar8 * 4;
          lVar9 = *(long *)(this + 0x30);
          *(undefined4 *)(lVar4 + 0x174) = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(lVar4 + 0x154) = *(undefined4 *)(param_2 + 0x18);
          fVar13 = *(float *)(param_2 + 0xc);
          fVar15 = *(float *)(lVar9 + 0x9c);
          fVar14 = (float)NEON_fmadd(fVar15,fVar13,*(undefined4 *)(param_2 + 0x10));
          *puVar7 = 1;
          *puVar6 = 1;
          fVar14 = 1.0 / (fVar15 * fVar14);
          *(float *)(lVar4 + 0x13c) = fVar14;
          *(float *)(lVar4 + 300) = fVar13 * fVar15 * fVar14;
          return;
        }
      }
    }
  }
  return;
}


