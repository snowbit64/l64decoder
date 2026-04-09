// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillVertexBuffer
// Entry Point: 006f6e48
// Size: 500 bytes
// Signature: undefined __cdecl fillVertexBuffer(uint param_1, float param_2, float param_3, float param_4, float param_5, uint param_6, uint param_7, uint param_8, uint param_9, float param_10, float param_11, float param_12, float param_13, float param_14, float param_15, float param_16, float param_17, float param_18, float param_19, float param_20, float param_21, bool param_22)


/* TextureOverlayRenderer::fillVertexBuffer(unsigned int, float, float, float, float, unsigned int,
   unsigned int, unsigned int, unsigned int, float, float, float, float, float, float, float, float,
   float, float, float, float, bool) */

void TextureOverlayRenderer::fillVertexBuffer
               (uint param_1,float param_2,float param_3,float param_4,float param_5,uint param_6,
               uint param_7,uint param_8,uint param_9,float param_10,float param_11,float param_12,
               float param_13,float param_14,float param_15,float param_16,float param_17,
               float param_18,float param_19,float param_20,float param_21,bool param_22)

{
  long lVar1;
  TextureOverlayRenderer *this;
  uint in_w6;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  float local_98;
  float fStack_94;
  long local_88;
  
  this = (TextureOverlayRenderer *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  prepareTransformation
            (this,(Matrix4x4 *)&local_c8,param_2,param_3,param_4,param_5,param_18,param_19,param_20)
  ;
  pfVar2 = (float *)(*(long *)(this + 0x4f0) + (ulong)(uint)(*(int *)(this + 0x480) << 2) * 0x1c);
  uVar3 = NEON_fmadd(local_c8,0,local_b8 * 0.0);
  uVar4 = NEON_fmadd(fStack_c4,0,fStack_b4 * 0.0);
  pfVar2[2] = (float)param_7;
  fVar7 = (float)NEON_fmadd(local_a8,0,uVar3);
  fVar5 = (float)NEON_fmadd(uStack_a4,0,uVar4);
  pfVar2[3] = param_10;
  pfVar2[5] = param_21;
  pfVar2[4] = param_11;
  fVar6 = (float)(ulong)param_6;
  *pfVar2 = local_98 + fVar7;
  pfVar2[1] = fStack_94 + fVar5;
  pfVar2[6] = fVar6;
  if ((in_w6 & 1) != 0) {
    pfVar2[4] = 1.0 - param_11;
  }
  uVar3 = NEON_fmadd(local_c8,0,local_b8);
  uVar4 = NEON_fmadd(fStack_c4,0,fStack_b4);
  pfVar2[9] = (float)param_8;
  pfVar2[10] = param_12;
  pfVar2[0xb] = param_13;
  pfVar2[0xc] = param_21;
  pfVar2[0xd] = fVar6;
  fVar7 = (float)NEON_fmadd(local_a8,0,uVar3);
  fVar5 = (float)NEON_fmadd(uStack_a4,0,uVar4);
  pfVar2[7] = fVar7 + local_98;
  pfVar2[8] = fVar5 + fStack_94;
  if ((in_w6 & 1) != 0) {
    pfVar2[0xb] = 1.0 - param_13;
  }
  pfVar2[0x11] = param_14;
  pfVar2[0x12] = param_15;
  pfVar2[0x10] = (float)param_9;
  pfVar2[0x13] = param_21;
  pfVar2[0x14] = fVar6;
  fVar7 = (float)NEON_fmadd(local_a8,0,local_c8 + local_b8 * 0.0);
  fVar5 = (float)NEON_fmadd(uStack_a4,0,fStack_c4 + fStack_b4 * 0.0);
  pfVar2[0xe] = local_98 + fVar7;
  pfVar2[0xf] = fStack_94 + fVar5;
  if ((in_w6 & 1) != 0) {
    pfVar2[0x12] = 1.0 - param_15;
  }
  pfVar2[0x17] = (float)(uint)param_22;
  pfVar2[0x18] = param_16;
  pfVar2[0x19] = param_17;
  pfVar2[0x1a] = param_21;
  pfVar2[0x1b] = fVar6;
  fVar5 = (float)NEON_fmadd(local_a8,0,local_c8 + local_b8);
  fVar6 = (float)NEON_fmadd(uStack_a4,0,fStack_c4 + fStack_b4);
  pfVar2[0x15] = fVar5 + local_98;
  pfVar2[0x16] = fVar6 + fStack_94;
  if ((in_w6 & 1) != 0) {
    pfVar2[0x19] = 1.0 - param_17;
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


