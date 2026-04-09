// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShadowFocusBoxVerts
// Entry Point: 00a463b8
// Size: 276 bytes
// Signature: undefined __cdecl getShadowFocusBoxVerts(Geometry * param_1, Vector3 * param_2)


/* ShadowRenderController::getShadowFocusBoxVerts(Geometry const*, Vector3*) */

float * ShadowRenderController::getShadowFocusBoxVerts(Geometry *param_1,Vector3 *param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if (((byte)param_1[0x30] & 1) == 0) {
    pfVar3 = (float *)0x0;
  }
  else {
    Geometry::getCollisionProxyMesh();
    pfVar3 = (float *)TriangleSet::getPositions();
    if (pfVar3 != (float *)0x0) {
      iVar1 = TriangleSet::getNumVertices();
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = 0;
        uVar6 = 0;
        do {
          fVar8 = pfVar3[1];
          fVar9 = pfVar3[2];
          if (uVar6 != 0) {
            uVar5 = (ulong)uVar6;
            pfVar4 = (float *)(param_2 + 4);
            do {
              if (((*pfVar3 == pfVar4[-1]) && (fVar8 == *pfVar4)) && (fVar9 == pfVar4[1]))
              goto LAB_00a46434;
              pfVar4 = pfVar4 + 3;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
            if (7 < uVar6) {
              uVar7 = 0;
              goto LAB_00a464a8;
            }
          }
          pfVar4 = (float *)(param_2 + (ulong)uVar6 * 0xc);
          uVar6 = uVar6 + 1;
          *pfVar4 = *pfVar3;
          pfVar4[1] = fVar8;
          pfVar4[2] = fVar9;
LAB_00a46434:
          pfVar3 = pfVar3 + 3;
          uVar7 = uVar7 + 1;
          uVar2 = TriangleSet::getNumVertices();
        } while (uVar7 < uVar2);
      }
      uVar7 = 1;
LAB_00a464a8:
      pfVar3 = (float *)(ulong)(uVar7 & uVar6 == 8);
    }
  }
  return pfVar3;
}


