// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: minimizeArea
// Entry Point: 008cf648
// Size: 620 bytes
// Signature: undefined __thiscall minimizeArea(VertexFormat * this, vector * param_1)


/* FillPlaneGeometry::VertexFormat::minimizeArea(std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> > const&) */

void __thiscall FillPlaneGeometry::VertexFormat::minimizeArea(VertexFormat *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar3 = *(ushort *)(this + 0x16);
  do {
    if (uVar3 == 0xffff) {
      return;
    }
    uVar4 = *(ushort *)(this + 0x14);
    uVar5 = uVar3;
    uVar9 = (uint)uVar4;
    if ((uint)uVar4 <= (uint)uVar3) {
      uVar5 = uVar4;
      uVar9 = (uint)uVar3;
    }
    uVar9 = (uVar9 - 1) * uVar9;
    if ((int)uVar9 < 0) {
      uVar9 = uVar9 + 1;
    }
    sVar6 = *(short *)(*(long *)param_1 + ((ulong)((uint)uVar5 + (uVar9 >> 1)) & 0xffff) * 2);
    if (sVar6 == -1) {
LAB_008cf758:
      uVar3 = *(ushort *)(this + 0x18);
      if (uVar3 == 0xffff) {
LAB_008cf8a8:
        if (sVar6 == -1) {
          return;
        }
      }
      else {
        uVar4 = *(ushort *)(this + 0x14);
        uVar12 = (uint)uVar3;
        uVar9 = (uint)uVar4;
        if ((uint)uVar4 <= (uint)uVar3) {
          uVar12 = (uint)uVar4;
          uVar9 = (uint)uVar3;
        }
        uVar9 = (uVar9 - 1) * uVar9;
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        sVar7 = *(short *)(*(long *)param_1 + ((ulong)(uVar12 + (uVar9 >> 1)) & 0xffff) * 2);
        if (sVar7 == -1) {
          uVar4 = *(ushort *)(this + 0x16);
          uVar10 = (uint)uVar3;
          uVar12 = uVar10;
          uVar9 = (uint)uVar4;
          if (uVar4 <= uVar10) {
            uVar12 = (uint)uVar4;
            uVar9 = uVar10;
          }
          uVar9 = (uVar9 - 1) * uVar9;
          if ((int)uVar9 < 0) {
            uVar9 = uVar9 + 1;
          }
          sVar7 = *(short *)(*(long *)param_1 + ((ulong)(uVar12 + (uVar9 >> 1)) & 0xffff) * 2);
          if (sVar7 == -1) goto LAB_008cf8a8;
          fVar16 = *(float *)(this + 0xc);
          fVar18 = *(float *)(this + 0x10);
          lVar2 = 2;
          if (fVar16 < fVar18) {
            lVar2 = 1;
          }
          lVar1 = 8;
          if (fVar16 >= fVar18) {
            lVar1 = 4;
          }
          lVar14 = lVar2 * 4;
          fVar20 = *(float *)(this + lVar1 + 8);
          fVar19 = *(float *)(this + lVar14 + 8);
          *(short *)(this + lVar2 * 2 + 0x14) = sVar7;
          *(float *)(this + lVar1 + 8) = fVar20 - fVar19;
          *(float *)(this + lVar14 + 8) =
               *(float *)(this + lVar14 + 8) + *(float *)(this + lVar14 + 8);
          if (*(float *)(this + lVar1 + 8) < 1e-05) {
            if (fVar18 <= fVar16) {
              *(undefined2 *)(this + 0x16) = *(undefined2 *)(this + 0x18);
              *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x10);
            }
            goto LAB_008cf670;
          }
        }
        else {
          fVar16 = *(float *)(this + 0x10);
          pfVar11 = (float *)(this + 8);
          fVar18 = *pfVar11;
          uVar13 = (ulong)(fVar18 >= fVar16);
          uVar15 = (ulong)(fVar18 < fVar16);
          pfVar11[uVar15 * 2] = pfVar11[uVar15 * 2] - pfVar11[uVar13 * 2];
          pfVar11[uVar13 * 2] = pfVar11[uVar13 * 2] + pfVar11[uVar13 * 2];
          fVar19 = pfVar11[uVar15 * 2];
          *(short *)(this + uVar13 * 4 + 0x14) = sVar7;
          if (fVar19 < 1e-05) {
            if (fVar16 <= fVar18) {
              *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x16);
              *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0xc);
            }
            goto LAB_008cf670;
          }
        }
      }
    }
    else {
      fVar16 = *(float *)(this + 0xc);
      pfVar11 = (float *)(this + 8);
      fVar18 = *pfVar11;
      bVar8 = fVar18 < fVar16;
      uVar13 = (ulong)!bVar8;
      pfVar11[bVar8] = pfVar11[bVar8] - pfVar11[uVar13];
      pfVar11[uVar13] = pfVar11[uVar13] + pfVar11[uVar13];
      fVar19 = pfVar11[bVar8];
      *(short *)(this + uVar13 * 2 + 0x14) = sVar6;
      if (1e-05 <= fVar19) goto LAB_008cf758;
      bVar8 = fVar18 < fVar16;
      uVar9 = 2;
      if (!bVar8) {
        uVar9 = 1;
      }
      uVar17 = *(undefined4 *)(this + (ulong)uVar9 * 4 + 8);
      *(undefined2 *)(this + (ulong)bVar8 * 2 + 0x14) =
           *(undefined2 *)(this + (ulong)uVar9 * 2 + 0x14);
      *(undefined4 *)(this + (ulong)bVar8 * 4 + 8) = uVar17;
      if (!bVar8) {
        uVar17 = *(undefined4 *)(this + (ulong)(uVar9 + 1) * 4 + 8);
        *(undefined2 *)(this + (ulong)uVar9 * 2 + 0x14) =
             *(undefined2 *)(this + (ulong)(uVar9 + 1) * 2 + 0x14);
        *(undefined4 *)(this + (ulong)uVar9 * 4 + 8) = uVar17;
      }
LAB_008cf670:
      *(undefined2 *)(this + 0x18) = 0xffff;
      *(undefined4 *)(this + 0x10) = 0;
    }
    uVar3 = *(ushort *)(this + 0x16);
  } while( true );
}


