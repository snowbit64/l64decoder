// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _insideTriangle
// Entry Point: 00eba6a0
// Size: 132 bytes
// Signature: undefined __thiscall _insideTriangle(CTriangulator * this, TVec * param_1, TVec * param_2, TVec * param_3, TVec * param_4)


/* FLOAT_MATH::CTriangulator::_insideTriangle(FLOAT_MATH::TVec const&, FLOAT_MATH::TVec const&,
   FLOAT_MATH::TVec const&, FLOAT_MATH::TVec const&) */

bool __thiscall
FLOAT_MATH::CTriangulator::_insideTriangle
          (CTriangulator *this,TVec *param_1,TVec *param_2,TVec *param_3,TVec *param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = *(double *)param_3;
  dVar6 = *(double *)(param_3 + 8);
  bVar1 = false;
  dVar2 = *(double *)param_2;
  dVar3 = *(double *)(param_2 + 8);
  dVar4 = *(double *)param_4;
  dVar5 = *(double *)(param_4 + 8);
  dVar8 = (double)NEON_fmadd(dVar7 - dVar2,dVar5 - dVar3,(dVar4 - dVar2) * -(dVar6 - dVar3));
  if (0.0 <= dVar8) {
    dVar9 = *(double *)param_1;
    dVar8 = *(double *)(param_1 + 8);
    dVar6 = (double)NEON_fmadd(dVar9 - dVar7,dVar5 - dVar6,(dVar4 - dVar7) * -(dVar8 - dVar6));
    if (0.0 <= dVar6) {
      dVar2 = (double)NEON_fmadd(dVar2 - dVar9,dVar5 - dVar8,(dVar4 - dVar9) * -(dVar3 - dVar8));
      bVar1 = 0.0 <= dVar2;
    }
  }
  return bVar1;
}


