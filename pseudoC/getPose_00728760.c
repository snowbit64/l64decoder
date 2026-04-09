// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPose
// Entry Point: 00728760
// Size: 404 bytes
// Signature: undefined __thiscall getPose(StoppingPath * this, Vector2 * param_1, Vector2 * param_2, float * param_3, float param_4)


/* StoppingPath::getPose(Vector2&, Vector2&, float&, float) const */

void __thiscall
StoppingPath::getPose
          (StoppingPath *this,Vector2 *param_1,Vector2 *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pfVar1 = *(float **)(this + 8);
  pfVar3 = (float *)(*(long *)this + 0x18);
  if (pfVar3 == pfVar1) {
LAB_00728790:
    pfVar2 = pfVar3;
    if (pfVar3 != pfVar1) {
      fVar7 = (float)((ulong)*(undefined8 *)(pfVar3 + -2) >> 0x20);
      fVar4 = param_4 - pfVar3[-6];
      fVar6 = (float)*(undefined8 *)(pfVar3 + -2);
      fVar5 = (float)NEON_fmadd(*(float *)(this + 0x1c) * (pfVar1[-6] - pfVar3[-6]),fVar4,
                                fVar4 * *(float *)(this + 0x1c) * -0.5 * fVar4);
      fVar5 = fVar5 / SQRT(fVar7 * fVar7 + fVar6 * fVar6);
      fVar4 = 0.0;
      if ((0.0 <= fVar5) && (fVar4 = 1.0, fVar5 <= 1.0)) {
        fVar4 = fVar5;
      }
      fVar8 = 1.0 - fVar4;
      fVar5 = (float)NEON_fmadd(fVar4,0x40000000,0x3f800000);
      fVar14 = (float)NEON_fmadd(fVar4,0xc0000000,0x40400000);
      fVar20 = fVar4 * fVar4;
      fVar15 = fVar20 * fVar14;
      fVar19 = fVar20 * (fVar4 + -1.0);
      fVar9 = fVar8 * fVar8;
      fVar16 = (float)NEON_fmadd(fVar20,0xc0000000,fVar14 * (fVar4 + fVar4));
      fVar20 = fVar20 + (fVar4 + -1.0) * (fVar4 + fVar4);
      fVar14 = fVar5 * fVar9;
      fVar13 = (float)NEON_fmadd(fVar9,0x40000000,fVar5 * (-fVar8 - fVar8));
      fVar12 = fVar9 + fVar4 * (-fVar8 - fVar8);
      fVar9 = fVar4 * fVar9;
      fVar17 = (float)*(undefined8 *)(pfVar3 + -4);
      fVar18 = (float)((ulong)*(undefined8 *)(pfVar3 + -4) >> 0x20);
      fVar5 = (float)*(undefined8 *)(pfVar3 + 2);
      fVar8 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
      fVar10 = (float)*(undefined8 *)(pfVar3 + 4);
      fVar11 = (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
      *(ulong *)param_1 =
           CONCAT44(fVar18 * fVar14 + fVar7 * fVar9 + fVar8 * fVar15 + fVar11 * fVar19,
                    fVar17 * fVar14 + fVar6 * fVar9 + fVar5 * fVar15 + fVar10 * fVar19);
      *(ulong *)param_2 =
           CONCAT44(fVar8 * fVar16 + fVar15 * 0.0 +
                    fVar7 * fVar12 + fVar9 * 0.0 + fVar18 * fVar13 + fVar14 * 0.0 +
                    fVar11 * fVar20 + fVar19 * 0.0,
                    fVar5 * fVar16 + fVar15 * 0.0 +
                    fVar6 * fVar12 + fVar9 * 0.0 + fVar17 * fVar13 + fVar14 * 0.0 +
                    fVar10 * fVar20 + fVar19 * 0.0);
      fVar4 = (float)NEON_fmadd(pfVar3[1] - pfVar3[-5],fVar4,pfVar3[-5]);
      *param_3 = fVar4;
      return;
    }
  }
  else {
    do {
      if (param_4 < *pfVar3) goto LAB_00728790;
      pfVar3 = pfVar3 + 6;
      pfVar2 = pfVar1;
    } while (pfVar3 != pfVar1);
  }
  *(undefined8 *)param_1 = *(undefined8 *)(pfVar2 + -4);
  *(undefined8 *)param_2 = *(undefined8 *)(pfVar2 + -2);
  *param_3 = pfVar2[-5];
  return;
}


