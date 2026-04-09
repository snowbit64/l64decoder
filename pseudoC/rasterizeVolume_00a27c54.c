// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rasterizeVolume
// Entry Point: 00a27c54
// Size: 1036 bytes
// Signature: undefined __thiscall rasterizeVolume(LightListRasterizer * this, ClippingMesh * param_1, ClippingContext * param_2, uint * param_3, uint param_4)


/* LightListRasterizer::rasterizeVolume(ClippingMesh&, LightListRasterizer::ClippingContext&,
   unsigned int&, unsigned int) */

void __thiscall
LightListRasterizer::rasterizeVolume
          (LightListRasterizer *this,ClippingMesh *param_1,ClippingContext *param_2,uint *param_3,
          uint param_4)

{
  uint uVar1;
  uint uVar2;
  ClippingMesh *this_00;
  ClippingMesh *this_01;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar9 = tpidr_el0;
  local_a8 = *(long *)(lVar9 + 0x28);
  this_00 = (ClippingMesh *)(param_2 + 0xc0);
  lVar18 = *(long *)(this + 0x28);
  ClippingMesh::clipAndCapZW
            (param_1,this_00,true,(ClippingMesh *)(param_2 + 0x40),(ClippingMesh *)(param_2 + 0x80),
             (ClippingMesh *)param_2);
  if (param_2[0x19d] != (ClippingContext)0x0) {
    ClippingMesh::print((char *)this_00);
  }
  this_01 = (ClippingMesh *)(param_2 + 0x100);
  ClippingMesh::clipAndCapW
            (this_00,this_01,true,(ClippingMesh *)param_2,
             *(float *)(*(long *)(param_2 + 0x188) + 0x2c) * *(float *)(param_2 + 0x180) * -0.01);
  if (param_2[0x19d] != (ClippingContext)0x0) {
    ClippingMesh::print((char *)this_01);
  }
  ClippingMesh::project(this_01,this_00,true,&fStack_ac,&fStack_b4,&local_b0,&local_b8);
  if (param_2[0x19d] != (ClippingContext)0x0) {
    ClippingMesh::print((char *)this_00);
  }
  iVar6 = *(int *)(param_2 + 0xd8);
  if (iVar6 != 0) {
    if (fStack_ac <= -1.0) {
      fStack_ac = -1.0;
    }
    uVar23 = NEON_fmin(fStack_b4,0x3f800000);
    uVar25 = NEON_fmin(local_b8,0x3f800000);
    fVar19 = (float)NEON_fmadd(fStack_ac,0x3f000000,0x3f000000);
    fVar20 = (float)NEON_fmadd(local_b0,0x3f000000,0x3f000000);
    fVar22 = (float)NEON_ucvtf(*(undefined4 *)(this + 8));
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xc));
    fVar24 = (float)NEON_fmadd(uVar23,0x3f000000,0x3f000000);
    fVar21 = (float)NEON_fmadd(uVar25,0x3f000000,0x3f000000);
    fStack_ac = (float)(int)(fVar19 * fVar22);
    local_b0 = (float)(int)(fVar20 * fVar26);
    fStack_b4 = (float)(int)(fVar24 * fVar22);
    uVar17 = (uint)(fVar19 * fVar22);
    local_b8 = (float)(int)(fVar21 * fVar26);
    uVar13 = (uint)(fVar24 * fVar22);
    uVar15 = (uint)(fVar20 * fVar26);
    uVar16 = (uint)(fVar21 * fVar26);
    if (param_2[0x19c] != (ClippingContext)0x0) {
      printf("Range (int) X:%u,%u Y:%u,%u\n",(ulong)uVar17,(ulong)uVar13,(ulong)uVar15,(ulong)uVar16
            );
    }
    ClippingMesh::clipXY(this_00,this_01,true);
    if (param_2[0x19d] != (ClippingContext)0x0) {
      ClippingMesh::print((char *)this_01);
    }
    if ((*(int *)(param_2 + 0x118) != 0) && (uVar17 < uVar13)) {
      uVar10 = 1;
      do {
        uVar1 = uVar17 + 1;
        fVar19 = (float)NEON_ucvtf(*(undefined4 *)(this + 8));
        uVar11 = (ulong)((uint)uVar10 ^ 1);
        fVar19 = (float)NEON_fmadd((float)(ulong)uVar1 / fVar19,0x40000000,0xbf800000);
        ClippingMesh::clipX((ClippingMesh *)(param_2 + uVar10 * 0x40 + 0xc0),
                            (ClippingMesh *)(param_2 + 0x140),true,
                            (ClippingMesh *)(param_2 + uVar11 * 0x40 + 0xc0),true,fVar19);
        if ((*(int *)(param_2 + 0x158) != 0) && (uVar14 = uVar15, uVar15 < uVar16)) {
          do {
            uVar2 = uVar14 + 1;
            fVar19 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xc));
            local_c0 = -1e+30;
            local_bc = 1e+30;
            fVar20 = (float)NEON_fmadd((float)(ulong)uVar14 / fVar19,0x40000000,0xbf800000);
            fVar19 = (float)NEON_fmadd((float)(ulong)uVar2 / fVar19,0x40000000,0xbf800000);
            uVar10 = ClippingMesh::maskY((ClippingMesh *)(param_2 + 0x140),fVar20,fVar19,&local_bc,
                                         &local_c0,*(float *)(*(long *)(param_2 + 0x188) + 0x2c));
            if ((uVar10 & 1) != 0) {
              fVar20 = *(float *)(param_2 + 400);
              uVar23 = *(undefined4 *)(param_2 + 0x194);
              uVar25 = *(undefined4 *)(param_2 + 0x198);
              fVar19 = logf(fVar20 * -local_c0);
              fVar21 = (float)NEON_fmadd(fVar19,uVar23,uVar25);
              fVar19 = logf(fVar20 * -local_bc);
              fVar19 = (float)NEON_fmadd(fVar19,uVar23,uVar25);
              uVar7 = *(uint *)(this + 0x14);
              fVar20 = (float)(int)fVar19;
              fVar19 = (float)(int)fVar21;
              if ((float)(int)fVar21 < 0.0) {
                fVar19 = 0.0;
              }
              if (fVar20 <= 1.0) {
                fVar20 = 1.0;
              }
              uVar3 = uVar7;
              if ((uint)(int)fVar19 <= uVar7) {
                uVar3 = (int)fVar19;
              }
              if ((uint)(int)fVar20 <= uVar7) {
                uVar7 = (int)fVar20;
              }
              if (uVar3 < uVar7) {
                iVar4 = *(int *)(this + 8);
                iVar5 = *(int *)(this + 0xc);
                iVar8 = *(int *)(this + 0x24);
                lVar12 = (ulong)uVar7 - (ulong)uVar3;
                uVar14 = (param_4 >> 5) + iVar8 * (uVar17 + iVar4 * (uVar14 + iVar5 * uVar3));
                do {
                  uVar10 = (ulong)uVar14;
                  uVar14 = uVar14 + iVar5 * iVar4 * iVar8;
                  lVar12 = lVar12 + -1;
                  *(uint *)(lVar18 + uVar10 * 4) =
                       *(uint *)(lVar18 + uVar10 * 4) | 1 << (ulong)(param_4 & 0x1f);
                } while (lVar12 != 0);
              }
            }
            uVar14 = uVar2;
          } while (uVar2 != uVar16);
        }
        uVar10 = uVar11;
        uVar17 = uVar1;
      } while (uVar1 != uVar13);
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6 != 0);
}


