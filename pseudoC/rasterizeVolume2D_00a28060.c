// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rasterizeVolume2D
// Entry Point: 00a28060
// Size: 848 bytes
// Signature: undefined __thiscall rasterizeVolume2D(LightListRasterizer * this, ClippingMesh * param_1, ClippingContext * param_2, uint * param_3, uint param_4)


/* LightListRasterizer::rasterizeVolume2D(ClippingMesh&, LightListRasterizer::ClippingContext&,
   unsigned int&, unsigned int) */

void __thiscall
LightListRasterizer::rasterizeVolume2D
          (LightListRasterizer *this,ClippingMesh *param_1,ClippingContext *param_2,uint *param_3,
          uint param_4)

{
  uint uVar1;
  uint uVar2;
  ClippingMesh *this_00;
  ClippingMesh *this_01;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  this_00 = (ClippingMesh *)(param_2 + 0xc0);
  lVar10 = *(long *)(this + 0x28);
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
  ClippingMesh::project(this_01,this_00,true,&fStack_7c,&local_84,&local_80,&local_88);
  if (param_2[0x19d] != (ClippingContext)0x0) {
    ClippingMesh::print((char *)this_00);
  }
  iVar3 = *(int *)(param_2 + 0xd8);
  if (iVar3 != 0) {
    if (fStack_7c <= -1.0) {
      fStack_7c = -1.0;
    }
    uVar18 = NEON_fmin(local_84,0x3f800000);
    uVar20 = NEON_fmin(local_88,0x3f800000);
    fVar14 = (float)NEON_fmadd(fStack_7c,0x3f000000,0x3f000000);
    fVar15 = (float)NEON_fmadd(local_80,0x3f000000,0x3f000000);
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(this + 8));
    fVar21 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xc));
    fVar19 = (float)NEON_fmadd(uVar18,0x3f000000,0x3f000000);
    fVar16 = (float)NEON_fmadd(uVar20,0x3f000000,0x3f000000);
    fStack_7c = (float)(int)(fVar14 * fVar17);
    local_80 = (float)(int)(fVar15 * fVar21);
    local_84 = (float)(int)(fVar19 * fVar17);
    uVar13 = (uint)(fVar14 * fVar17);
    local_88 = (float)(int)(fVar16 * fVar21);
    uVar8 = (uint)(fVar19 * fVar17);
    uVar11 = (uint)(fVar15 * fVar21);
    uVar12 = (uint)(fVar16 * fVar21);
    if (param_2[0x19c] != (ClippingContext)0x0) {
      printf("Range (int) X:%u,%u Y:%u,%u\n",(ulong)uVar13,(ulong)uVar8,(ulong)uVar11,(ulong)uVar12)
      ;
    }
    ClippingMesh::clipXY(this_00,this_01,true);
    if (param_2[0x19d] != (ClippingContext)0x0) {
      ClippingMesh::print((char *)this_01);
    }
    if ((*(int *)(param_2 + 0x118) != 0) && (uVar13 < uVar8)) {
      uVar5 = 1;
      do {
        uVar1 = uVar13 + 1;
        uVar7 = (ulong)((uint)uVar5 ^ 1);
        fVar14 = (float)NEON_ucvtf(*(undefined4 *)(this + 8));
        fVar14 = (float)NEON_fmadd((float)(ulong)uVar1 / fVar14,0x40000000,0xbf800000);
        ClippingMesh::clipX((ClippingMesh *)(param_2 + uVar5 * 0x40 + 0xc0),
                            (ClippingMesh *)(param_2 + 0x140),true,
                            (ClippingMesh *)(param_2 + uVar7 * 0x40 + 0xc0),true,fVar14);
        if ((*(int *)(param_2 + 0x158) != 0) && (uVar9 = uVar11, uVar11 < uVar12)) {
          do {
            uVar2 = uVar9 + 1;
            fVar14 = (float)NEON_ucvtf(*(undefined4 *)(this + 0xc));
            fVar15 = (float)NEON_fmadd((float)(ulong)uVar9 / fVar14,0x40000000,0xbf800000);
            fVar14 = (float)NEON_fmadd((float)(ulong)uVar2 / fVar14,0x40000000,0xbf800000);
            uVar5 = ClippingMesh::testY((ClippingMesh *)(param_2 + 0x140),fVar15,fVar14);
            if ((uVar5 & 1) != 0) {
              lVar6 = (ulong)((param_4 >> 5) +
                             (uVar13 + *(int *)(this + 8) * uVar9) * *(int *)(this + 0x24)) * 4;
              *(uint *)(lVar10 + lVar6) = *(uint *)(lVar10 + lVar6) | 1 << (ulong)(param_4 & 0x1f);
            }
            uVar9 = uVar2;
          } while (uVar12 != uVar2);
        }
        uVar5 = uVar7;
        uVar13 = uVar1;
      } while (uVar1 != uVar8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 != 0);
}


