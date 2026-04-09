// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VertexFormat
// Entry Point: 008d2934
// Size: 468 bytes
// Signature: undefined __thiscall VertexFormat(VertexFormat * this, VertexFormat * param_1, ushort param_2, ushort param_3)


/* FillPlaneGeometry::VertexFormat::VertexFormat(FillPlaneGeometry::VertexFormat const*, unsigned
   short, unsigned short) */

void __thiscall
FillPlaneGeometry::VertexFormat::VertexFormat
          (VertexFormat *this,VertexFormat *param_1,ushort param_2,ushort param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined8 *)this = 0;
  uVar5 = (ulong)param_3;
  fVar7 = *(float *)(param_1 + (ulong)param_2 * 0x20 + 8);
  sVar1 = *(short *)(param_1 + (ulong)param_2 * 0x20 + 0x14);
  *(short *)(this + 0x14) = sVar1;
  sVar2 = *(short *)(param_1 + (ulong)param_2 * 0x20 + 0x16);
  *(float *)(this + 8) = fVar7 * 0.5;
  fVar7 = *(float *)(param_1 + (ulong)param_2 * 0x20 + 0xc);
  *(short *)(this + 0x16) = sVar2;
  sVar3 = *(short *)(param_1 + (ulong)param_2 * 0x20 + 0x18);
  *(short *)(this + 0x18) = sVar3;
  *(float *)(this + 0xc) = fVar7 * 0.5;
  sVar4 = *(short *)(param_1 + uVar5 * 0x20 + 0x14);
  *(float *)(this + 0x10) = *(float *)(param_1 + (ulong)param_2 * 0x20 + 0x10) * 0.5;
  if (sVar4 != -1) {
    lVar6 = 0;
    if ((((sVar1 != sVar4) && (sVar1 != -1)) && (lVar6 = 1, sVar2 != sVar4)) &&
       ((sVar2 != -1 && (lVar6 = 2, sVar3 != -1 && sVar3 != sVar4)))) {
      lVar6 = 3;
    }
    uVar8 = *(undefined4 *)(param_1 + uVar5 * 0x20 + 8);
    uVar9 = *(undefined4 *)(this + lVar6 * 4 + 8);
    *(short *)(this + lVar6 * 2 + 0x14) = sVar4;
    sVar1 = *(short *)(param_1 + uVar5 * 0x20 + 0x16);
    uVar8 = NEON_fmadd(uVar8,0x3f000000,uVar9);
    *(undefined4 *)(this + lVar6 * 4 + 8) = uVar8;
    if (sVar1 != -1) {
      lVar6 = 0;
      if ((*(short *)(this + 0x14) != sVar1) && (*(short *)(this + 0x14) != -1)) {
        lVar6 = 1;
        if ((*(short *)(this + 0x16) != sVar1) &&
           ((*(short *)(this + 0x16) != -1 &&
            (lVar6 = 2, *(short *)(this + 0x18) != -1 && *(short *)(this + 0x18) != sVar1)))) {
          lVar6 = 3;
        }
      }
      uVar8 = *(undefined4 *)(param_1 + uVar5 * 0x20 + 0xc);
      uVar9 = *(undefined4 *)(this + lVar6 * 4 + 8);
      *(short *)(this + lVar6 * 2 + 0x14) = sVar1;
      sVar1 = *(short *)(param_1 + uVar5 * 0x20 + 0x18);
      uVar8 = NEON_fmadd(uVar8,0x3f000000,uVar9);
      *(undefined4 *)(this + lVar6 * 4 + 8) = uVar8;
      if (sVar1 != -1) {
        lVar6 = 0;
        if ((*(short *)(this + 0x14) != sVar1) && (*(short *)(this + 0x14) != -1)) {
          lVar6 = 1;
          if ((*(short *)(this + 0x16) != sVar1) &&
             ((*(short *)(this + 0x16) != -1 &&
              (lVar6 = 2, *(short *)(this + 0x18) != -1 && *(short *)(this + 0x18) != sVar1)))) {
            lVar6 = 3;
          }
        }
        uVar8 = *(undefined4 *)(param_1 + uVar5 * 0x20 + 0x10);
        uVar9 = *(undefined4 *)(this + lVar6 * 4 + 8);
        *(short *)(this + lVar6 * 2 + 0x14) = sVar1;
        uVar8 = NEON_fmadd(uVar8,0x3f000000,uVar9);
        *(undefined4 *)(this + lVar6 * 4 + 8) = uVar8;
      }
    }
  }
  *(ushort *)(this + 0x1a) = param_2;
  *(ushort *)(this + 0x1c) = param_3;
  return;
}


