// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChildPoints
// Entry Point: 0097b2cc
// Size: 204 bytes
// Signature: undefined __thiscall getChildPoints(MeshSplitGeometry * this, uint param_1, float * param_2)


/* non-virtual thunk to MeshSplitGeometry::getChildPoints(unsigned int, float*) */

void __thiscall
MeshSplitGeometry::getChildPoints(MeshSplitGeometry *this,uint param_1,float *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  lVar5 = *(long *)(*(long *)(this + 0x10) + (ulong)param_1 * 8);
  pfVar6 = *(float **)(lVar5 + 0x2ef0);
  uVar2 = (uint)(*(int *)(lVar5 + 0x2ef8) - (int)pfVar6) >> 4;
  uVar3 = uVar2 & 0xffff;
  uVar8 = (ulong)uVar3;
  if (uVar3 != 0) {
    if ((uVar3 < 9) || (param_2 < pfVar6 + uVar8 * 4 + -1 && pfVar6 < param_2 + uVar8 * 3)) {
      lVar5 = 0;
    }
    else {
      uVar1 = 8;
      if ((uVar2 & 7) != 0) {
        uVar1 = uVar8 & 7;
      }
      lVar5 = uVar8 - uVar1;
      lVar9 = uVar1 - uVar8;
      pfVar7 = pfVar6 + 0x10;
      pfVar10 = param_2;
      do {
        fVar22 = *pfVar7;
        fVar26 = pfVar7[1];
        fVar30 = pfVar7[2];
        fVar23 = pfVar7[4];
        fVar27 = pfVar7[5];
        fVar31 = pfVar7[6];
        fVar24 = pfVar7[8];
        fVar28 = pfVar7[9];
        fVar32 = pfVar7[10];
        fVar25 = pfVar7[0xc];
        fVar29 = pfVar7[0xd];
        fVar33 = pfVar7[0xe];
        lVar9 = lVar9 + 8;
        fVar14 = pfVar7[-0xf];
        fVar18 = pfVar7[-0xe];
        fVar11 = pfVar7[-0xc];
        fVar15 = pfVar7[-0xb];
        fVar19 = pfVar7[-10];
        fVar12 = pfVar7[-8];
        fVar16 = pfVar7[-7];
        fVar20 = pfVar7[-6];
        fVar13 = pfVar7[-4];
        fVar17 = pfVar7[-3];
        fVar21 = pfVar7[-2];
        *pfVar10 = pfVar7[-0x10];
        pfVar10[1] = fVar14;
        pfVar10[2] = fVar18;
        pfVar10[3] = fVar11;
        pfVar10[4] = fVar15;
        pfVar10[5] = fVar19;
        pfVar10[6] = fVar12;
        pfVar10[7] = fVar16;
        pfVar10[8] = fVar20;
        pfVar10[9] = fVar13;
        pfVar10[10] = fVar17;
        pfVar10[0xb] = fVar21;
        pfVar10[0xc] = fVar22;
        pfVar10[0xd] = fVar26;
        pfVar10[0xe] = fVar30;
        pfVar10[0xf] = fVar23;
        pfVar10[0x10] = fVar27;
        pfVar10[0x11] = fVar31;
        pfVar10[0x12] = fVar24;
        pfVar10[0x13] = fVar28;
        pfVar10[0x14] = fVar32;
        pfVar10[0x15] = fVar25;
        pfVar10[0x16] = fVar29;
        pfVar10[0x17] = fVar33;
        pfVar7 = pfVar7 + 0x20;
        pfVar10 = pfVar10 + 0x18;
      } while (lVar9 != 0);
    }
    lVar9 = lVar5 - uVar8;
    pfVar7 = param_2 + lVar5 * 3 + 2;
    pfVar6 = pfVar6 + lVar5 * 4 + 2;
    do {
      bVar4 = lVar9 != -1;
      lVar9 = lVar9 + 1;
      pfVar7[-2] = pfVar6[-2];
      pfVar7[-1] = pfVar6[-1];
      *pfVar7 = *pfVar6;
      pfVar7 = pfVar7 + 3;
      pfVar6 = pfVar6 + 4;
    } while (bVar4);
  }
  return;
}


