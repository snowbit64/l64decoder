// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addWireMesh
// Entry Point: 009f5d9c
// Size: 904 bytes
// Signature: undefined __thiscall addWireMesh(DeferredDebugRenderer * this, Matrix4x4 * param_1, float * param_2, float * param_3, ushort * param_4, uint param_5, float param_6, CATEGORY param_7, bool param_8)


/* DeferredDebugRenderer::addWireMesh(Matrix4x4 const&, float const*, float const*, unsigned short
   const*, unsigned int, float, DeferredDebugRenderer::CATEGORY, bool) */

void __thiscall
DeferredDebugRenderer::addWireMesh
          (DeferredDebugRenderer *this,Matrix4x4 *param_1,float *param_2,float *param_3,
          ushort *param_4,uint param_5,float param_6,CATEGORY param_7,bool param_8)

{
  vector<float,std::__ndk1::allocator<float>> *this_00;
  __wrap_iter _Var1;
  __wrap_iter _Var2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  
  if (!param_8) {
    this = this + 0xf0;
  }
  if (param_5 != 0) {
    uVar7 = 0;
    this_00 = (vector<float,std::__ndk1::allocator<float>> *)(this + 0x18);
    do {
      fVar15 = *(float *)(param_1 + 0x10);
      fVar18 = *(float *)(param_1 + 0x14);
      fVar35 = *(float *)(param_1 + 0x18);
      uVar20 = *(undefined4 *)param_1;
      uVar21 = *(undefined4 *)(param_1 + 4);
      uVar33 = *(undefined4 *)(param_1 + 8);
      pfVar3 = param_3 + (ushort)(param_4[uVar7 & 0xffffffff] * 3);
      uVar34 = *(undefined4 *)(param_1 + 0x28);
      uVar29 = *(undefined4 *)(param_1 + 0x20);
      uVar31 = *(undefined4 *)(param_1 + 0x24);
      fVar30 = *(float *)(param_1 + 0x30);
      fVar22 = *(float *)(param_1 + 0x34);
      fVar32 = *(float *)(param_1 + 0x38);
      pfVar4 = param_3 + (ushort)(param_4[(int)uVar7 + 1] * 3);
      fVar10 = pfVar3[1] * param_6;
      fVar8 = *pfVar3 * param_6;
      fVar13 = pfVar3[2] * param_6;
      pfVar3 = param_3 + (ushort)(param_4[(int)uVar7 + 2] * 3);
      fVar23 = *param_2;
      fVar26 = param_2[1];
      fVar24 = *pfVar4;
      fVar25 = pfVar4[1];
      fVar28 = param_2[2];
      fVar27 = param_2[3];
      uVar16 = NEON_fmadd(fVar8,uVar20,fVar10 * fVar15);
      uVar19 = NEON_fmadd(fVar8,uVar21,fVar10 * fVar18);
      uVar9 = NEON_fmadd(fVar8,uVar33,fVar10 * fVar35);
      fVar11 = pfVar4[2];
      fVar12 = (float)NEON_fmadd(fVar13,uVar29,uVar16);
      fVar17 = (float)NEON_fmadd(fVar13,uVar31,uVar19);
      fVar8 = (float)NEON_fmadd(fVar13,uVar34,uVar9);
      fVar13 = *pfVar3;
      fVar10 = pfVar3[1];
      fVar14 = pfVar3[2];
      pfVar3 = (float *)operator_new(0x1c);
      pfVar3[3] = fVar23;
      pfVar3[4] = fVar26;
      *pfVar3 = fVar30 + fVar12;
      pfVar3[5] = fVar28;
      pfVar3[1] = fVar22 + fVar17;
      pfVar3[6] = fVar27;
      pfVar3[2] = fVar32 + fVar8;
                    /* try { // try from 009f5f24 to 009f5f2b has its CatchHandler @ 009f6164 */
      pfVar4 = (float *)operator_new(0x1c);
      fVar25 = fVar25 * param_6;
      fVar24 = fVar24 * param_6;
      uVar16 = NEON_fmadd(fVar24,uVar20,fVar25 * fVar15);
      uVar19 = NEON_fmadd(fVar24,uVar21,fVar25 * fVar18);
      uVar9 = NEON_fmadd(fVar24,uVar33,fVar25 * fVar35);
      fVar11 = fVar11 * param_6;
      fVar25 = (float)NEON_fmadd(fVar11,uVar29,uVar16);
      fVar12 = (float)NEON_fmadd(fVar11,uVar31,uVar19);
      fVar8 = (float)NEON_fmadd(fVar11,uVar34,uVar9);
      *pfVar4 = fVar30 + fVar25;
      pfVar4[3] = fVar23;
      pfVar4[4] = fVar26;
      pfVar4[2] = fVar32 + fVar8;
      pfVar4[1] = fVar22 + fVar12;
      pfVar4[5] = fVar28;
      pfVar4[6] = fVar27;
                    /* try { // try from 009f5fbc to 009f5fc3 has its CatchHandler @ 009f615c */
      pfVar5 = (float *)operator_new(0x1c);
      _Var1 = (__wrap_iter)pfVar3;
      fVar10 = fVar10 * param_6;
      fVar13 = fVar13 * param_6;
      uVar6 = *(undefined8 *)(this + 0x20);
      fVar14 = fVar14 * param_6;
      uVar16 = NEON_fmadd(fVar13,uVar20,fVar10 * fVar15);
      uVar19 = NEON_fmadd(fVar13,uVar21,fVar10 * fVar18);
      uVar9 = NEON_fmadd(fVar13,uVar33,fVar10 * fVar35);
      fVar25 = (float)NEON_fmadd(fVar14,uVar29,uVar16);
      fVar10 = (float)NEON_fmadd(fVar14,uVar31,uVar19);
      fVar8 = (float)NEON_fmadd(fVar14,uVar34,uVar9);
      pfVar5[3] = fVar23;
      *pfVar5 = fVar30 + fVar25;
      pfVar5[4] = fVar26;
      pfVar5[1] = fVar22 + fVar10;
      pfVar5[2] = fVar32 + fVar8;
      pfVar5[5] = fVar28;
      pfVar5[6] = fVar27;
                    /* try { // try from 009f6050 to 009f605f has its CatchHandler @ 009f6138 */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
      insert<std::__ndk1::__wrap_iter<float*>>(this_00,(__wrap_iter)uVar6,_Var1,_Var1 + 0x1c);
      _Var2 = (__wrap_iter)pfVar4;
                    /* try { // try from 009f6068 to 009f6077 has its CatchHandler @ 009f6134 */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
      insert<std::__ndk1::__wrap_iter<float*>>
                (this_00,(__wrap_iter)*(undefined8 *)(this + 0x20),_Var2,_Var2 + 0x1c);
                    /* try { // try from 009f607c to 009f608b has its CatchHandler @ 009f6130 */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
      insert<std::__ndk1::__wrap_iter<float*>>
                (this_00,(__wrap_iter)*(undefined8 *)(this + 0x20),_Var2,_Var2 + 0x1c);
      _Var2 = (__wrap_iter)pfVar5;
                    /* try { // try from 009f6094 to 009f60a3 has its CatchHandler @ 009f612c */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
      insert<std::__ndk1::__wrap_iter<float*>>
                (this_00,(__wrap_iter)*(undefined8 *)(this + 0x20),_Var2,_Var2 + 0x1c);
                    /* try { // try from 009f60a8 to 009f60b7 has its CatchHandler @ 009f6128 */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
      insert<std::__ndk1::__wrap_iter<float*>>
                (this_00,(__wrap_iter)*(undefined8 *)(this + 0x20),_Var2,_Var2 + 0x1c);
                    /* try { // try from 009f60bc to 009f60cb has its CatchHandler @ 009f6124 */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
      insert<std::__ndk1::__wrap_iter<float*>>
                (this_00,(__wrap_iter)*(undefined8 *)(this + 0x20),_Var1,_Var1 + 0x1c);
      operator_delete(pfVar5);
      operator_delete(pfVar4);
      operator_delete(pfVar3);
      uVar7 = uVar7 + 3;
    } while ((ulong)param_5 + (ulong)param_5 * 2 != uVar7);
  }
  return;
}


