// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementStartFollow
// Entry Point: 0070b618
// Size: 488 bytes
// Signature: undefined __thiscall movementStartFollow(AnimalLocomotionSystem * this, vector * param_1, float param_2)


/* AnimalLocomotionSystem::movementStartFollow(std::__ndk1::vector<Vector3,
   std::__ndk1::allocator<Vector3> > const&, float) */

void __thiscall
AnimalLocomotionSystem::movementStartFollow
          (AnimalLocomotionSystem *this,vector *param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  
  puVar1 = *(undefined4 **)param_1;
  uVar11 = *puVar1;
  uVar15 = puVar1[2];
  *(undefined4 *)(this + 0x448) = 0;
  *(undefined4 *)(this + 0x444) = 0;
  lVar7 = *(long *)(param_1 + 8);
  *(undefined4 *)(this + 0x42c) = uVar11;
  *(undefined4 *)(this + 0x430) = uVar15;
  *(undefined4 *)(this + 0x428) = 2;
  puVar2 = *(undefined4 **)(this + 0x460);
  uVar10 = (lVar7 - (long)puVar1 >> 2) * -0x5555555555555555;
  uVar4 = uVar10 & 0xffffffff;
  uVar6 = *(long *)(this + 0x468) - (long)puVar2 >> 3;
  if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
    if (uVar4 < uVar6) {
      *(undefined4 **)(this + 0x468) = puVar2 + uVar4 * 2;
    }
  }
  else {
    std::__ndk1::vector<Vector2,std::__ndk1::allocator<Vector2>>::__append
              ((vector<Vector2,std::__ndk1::allocator<Vector2>> *)(this + 0x460),uVar4 - uVar6);
    puVar2 = *(undefined4 **)(this + 0x460);
  }
  *(undefined4 *)(this + 0x478) = 1;
  if ((int)uVar10 != 0) {
    puVar1 = *(undefined4 **)param_1;
    uVar4 = uVar10 & 0xffffffff;
    if ((uVar4 < 8) || ((puVar2 < puVar1 + uVar4 * 3 && (puVar1 < puVar2 + uVar4 * 2)))) {
      lVar7 = 0;
    }
    else {
      puVar8 = puVar2 + 8;
      lVar7 = uVar4 - (uVar10 & 7);
      lVar5 = lVar7;
      puVar9 = puVar1;
      do {
        lVar5 = lVar5 + -8;
        uVar19 = puVar9[2];
        uVar11 = puVar9[3];
        uVar20 = puVar9[5];
        uVar15 = puVar9[6];
        uVar21 = puVar9[8];
        uVar14 = puVar9[9];
        uVar22 = puVar9[0xb];
        uVar23 = puVar9[0xc];
        uVar27 = puVar9[0xe];
        uVar24 = puVar9[0xf];
        uVar28 = puVar9[0x11];
        uVar25 = puVar9[0x12];
        uVar29 = puVar9[0x14];
        uVar26 = puVar9[0x15];
        uVar30 = puVar9[0x17];
        puVar8[-8] = *puVar9;
        puVar8[-7] = uVar19;
        puVar8[-6] = uVar11;
        puVar8[-5] = uVar20;
        puVar8[-4] = uVar15;
        puVar8[-3] = uVar21;
        puVar8[-2] = uVar14;
        puVar8[-1] = uVar22;
        *puVar8 = uVar23;
        puVar8[1] = uVar27;
        puVar8[2] = uVar24;
        puVar8[3] = uVar28;
        puVar8[4] = uVar25;
        puVar8[5] = uVar29;
        puVar8[6] = uVar26;
        puVar8[7] = uVar30;
        puVar8 = puVar8 + 0x10;
        puVar9 = puVar9 + 0x18;
      } while (lVar5 != 0);
      if ((uVar10 & 7) == 0) goto LAB_0070b720;
    }
    lVar5 = uVar4 - lVar7;
    puVar1 = puVar1 + lVar7 * 3 + 2;
    puVar8 = puVar2 + lVar7 * 2 + 1;
    do {
      lVar5 = lVar5 + -1;
      uVar11 = *puVar1;
      puVar8[-1] = puVar1[-2];
      *puVar8 = uVar11;
      puVar1 = puVar1 + 3;
      puVar8 = puVar8 + 2;
    } while (lVar5 != 0);
  }
LAB_0070b720:
  uVar3 = *(undefined8 *)(puVar2 + 2);
  uVar17 = *(undefined8 *)(this + 0x42c);
  *(undefined8 *)(this + 0x44c) = uVar3;
  fVar12 = (float)uVar3 - (float)uVar17;
  fVar13 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
  fVar18 = fVar13 * fVar13 + fVar12 * fVar12;
  fVar16 = 1.0;
  if (1e-06 < fVar18) {
    fVar16 = 1.0 / SQRT(fVar18);
  }
  *(float *)(this + 0x48c) = param_2;
  *(undefined4 *)(this + 0x3fc) = 0;
  this[0x4a5] = (AnimalLocomotionSystem)0x1;
  *(ulong *)(this + 0x434) = CONCAT44(fVar13 * fVar16,fVar12 * fVar16);
  *(ulong *)(this + 0x43c) = CONCAT44(fVar13 * fVar16 * 0.0001,fVar12 * fVar16 * 0.0001);
  uVar11 = AnimalAnimationSystem::getActiveAnimationSpeed();
  *(undefined4 *)(this + 0x4a0) = uVar11;
  *(undefined8 *)(this + 0x454) = *(undefined8 *)(this + 0x42c);
  return;
}


