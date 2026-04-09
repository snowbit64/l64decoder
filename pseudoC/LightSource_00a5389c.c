// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LightSource
// Entry Point: 00a5389c
// Size: 1144 bytes
// Signature: undefined __thiscall LightSource(LightSource * this, char * param_1, LIGHT_TYPE param_2, Vector3 * param_3, bool param_4, bool param_5, bool param_6, float param_7, float param_8, float param_9, uint param_10, bool param_11, float param_12, float param_13, float param_14, float param_15, float param_16, uint param_17, float param_18, bool param_19)


/* LightSource::LightSource(char const*, LightSource::LIGHT_TYPE, Vector3 const&, bool, bool, bool,
   float, float, float, unsigned int, bool, float, float, float, float, float, unsigned int, float,
   bool) */

void __thiscall
LightSource::LightSource
          (LightSource *this,char *param_1,LIGHT_TYPE param_2,Vector3 *param_3,bool param_4,
          bool param_5,bool param_6,float param_7,float param_8,float param_9,uint param_10,
          bool param_11,float param_12,float param_13,float param_14,float param_15,float param_16,
          uint param_17,float param_18,bool param_19)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  float fVar17;
  float fVar18;
  long lVar19;
  long lVar20;
  undefined uStack_108;
  
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined ***)this = &PTR__LightSource_00fe3768;
                    /* try { // try from 00a53920 to 00a53927 has its CatchHandler @ 00a53d24 */
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x210));
  *(undefined8 *)(this + 0x160) = 0;
  uVar3 = 3;
  if (!param_4) {
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x168) = 0;
  *(LIGHT_TYPE *)(this + 0x16c) = param_2;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x2000;
  uVar1 = uVar3 | 4;
  if (!param_5) {
    uVar1 = uVar3;
  }
  uVar4 = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_3 + 8);
  uVar3 = uVar1 | 0x20;
  if (!param_6) {
    uVar3 = uVar1;
  }
  *(undefined8 *)(this + 0x170) = uVar4;
  uVar1 = uVar3 | 0x40;
  if (!param_11) {
    uVar1 = uVar3;
  }
  uVar4 = *(undefined8 *)param_3;
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_3 + 8);
  uVar7 = NEON_fmin(param_13,0x43330000);
  uVar3 = uVar1 | 0x80;
  if (param_2 != 0 || !param_19) {
    uVar3 = uVar1;
  }
  *(uint *)(this + 0x1b8) = param_10;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = uVar4;
  *(uint *)(this + 0x20c) = uVar3;
  *(undefined4 *)(this + 0x19c) = uVar7;
  *(float *)(this + 0x194) = param_12;
  *(float *)(this + 0x198) = param_14;
  uVar3 = param_17;
  if (7 < param_17) {
    uVar3 = 8;
  }
  if (param_17 == 0) {
    uVar3 = 1;
  }
  uVar1 = uVar3 - 1;
  uVar5 = (ulong)uVar1;
  *(undefined4 *)(this + 0x17c) = 0;
  *(float *)(this + 0x1ac) = param_7;
  *(float *)(this + 0x1b0) = param_8;
  *(float *)(this + 0x1b4) = param_9;
  *(float *)(this + 0x1bc) = param_15;
  *(float *)(this + 0x1c0) = param_16;
  *(uint *)(this + 0x1c4) = uVar3;
  this[0x1c8] = (LightSource)0x1;
  *(float *)(this + 0x1cc) = param_18;
  if (uVar3 != 0 && uVar1 != 0) {
    lVar2 = (ulong)uVar3 - 2;
    lVar20 = 2;
    lVar19 = 1;
    uVar4 = 0x200000001;
    uVar6 = 0;
    uStack_108 = (undefined)lVar2;
    do {
      uVar10 = NEON_ucvtf(uVar4,4);
      fVar17 = (float)uVar10 / (float)(ulong)uVar3;
      fVar18 = (float)((ulong)uVar10 >> 0x20) / (float)(ulong)uVar3;
      auVar11[8] = (byte)uVar6 | 1;
      auVar11._0_8_ = uVar6;
      auVar11[9] = (char)(uVar6 >> 8);
      auVar11[10] = (char)(uVar6 >> 0x10);
      auVar11[11] = (char)(uVar6 >> 0x18);
      auVar11[12] = (char)(uVar6 >> 0x20);
      auVar11[13] = (char)(uVar6 >> 0x28);
      auVar11[14] = (char)(uVar6 >> 0x30);
      auVar11[15] = (char)(uVar6 >> 0x38);
      auVar12[8] = uStack_108;
      auVar12._0_8_ = lVar2;
      auVar12[9] = (char)((ulong)lVar2 >> 8);
      auVar12[10] = (char)((ulong)lVar2 >> 0x10);
      auVar12[11] = (char)((ulong)lVar2 >> 0x18);
      auVar12[12] = (char)((ulong)lVar2 >> 0x20);
      auVar12[13] = (char)((ulong)lVar2 >> 0x28);
      auVar12[14] = (char)((ulong)lVar2 >> 0x30);
      auVar12[15] = (char)((ulong)lVar2 >> 0x38);
      auVar12 = NEON_cmhs(auVar12,auVar11,8);
      fVar8 = powf(param_15 / 0.15,fVar18);
      fVar9 = powf(param_15 / 0.15,fVar17);
      fVar17 = fVar17 * (param_15 + -0.15) + 0.15;
      fVar18 = fVar18 * (param_15 + -0.15) + 0.15;
      if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        *(float *)(this + (lVar19 + -1) * 4 + 0x1d0) = fVar17 + (fVar9 * 0.15 - fVar17) * param_18;
      }
      if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        *(float *)(this + (lVar20 + -1) * 4 + 0x1d0) = fVar18 + (fVar8 * 0.15 - fVar18) * param_18;
      }
      uVar4 = CONCAT44((int)((ulong)uVar4 >> 0x20) + 2,(int)uVar4 + 2);
      uVar6 = uVar6 + 2;
      lVar19 = lVar19 + 2;
      lVar20 = lVar20 + 2;
    } while (((ulong)uVar3 & 0xe) != uVar6);
  }
  if (uVar1 < 8) {
    *(float *)(this + uVar5 * 4 + 0x1d0) = param_15;
    if ((int)(uVar5 + 1) != 8) {
      *(float *)(this + (uVar5 + 1) * 4 + 0x1d0) = param_15;
      if ((int)(uVar5 + 2) != 8) {
        *(float *)(this + (uVar5 + 2) * 4 + 0x1d0) = param_15;
        if ((int)(uVar5 + 3) != 8) {
          *(float *)(this + (uVar5 + 3) * 4 + 0x1d0) = param_15;
          if ((int)(uVar5 + 4) != 8) {
            *(float *)(this + (uVar5 + 4) * 4 + 0x1d0) = param_15;
            if ((int)(uVar5 + 5) != 8) {
              *(float *)(this + (uVar5 + 5) * 4 + 0x1d0) = param_15;
              if ((int)(uVar5 + 6) != 8) {
                *(float *)(this + (uVar5 + 6) * 4 + 0x1d0) = param_15;
                if ((int)(uVar5 + 7) != 8) {
                  *(float *)(this + (uVar5 + 7) * 4 + 0x1d0) = param_15;
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_2 != 0) {
    *(undefined4 *)(this + 0x1c4) = 1;
  }
  this[0x1f0] = (LightSource)0x0;
  fVar8 = (*(float *)(this + 0x19c) * 0.5 * 3.141593) / 180.0;
  *(undefined8 *)(this + 0x1fc) = 0;
  *(undefined8 *)(this + 0x204) = 0;
  *(undefined8 *)(this + 500) = 0;
  fVar18 = cosf(fVar8);
  fVar17 = *(float *)(this + 0x198);
  uVar13 = SUB41(fVar17,0);
  uVar14 = (undefined)((uint)fVar17 >> 8);
  uVar15 = (undefined)((uint)fVar17 >> 0x10);
  uVar16 = (undefined)((uint)fVar17 >> 0x18);
  uVar7 = 0x40a00000;
  *(float *)(this + 0x1a4) = fVar18;
  if ((5.0 < fVar17) || (uVar7 = 0, fVar17 < 0.0)) {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = (undefined)((uint)uVar7 >> 0x10);
    uVar16 = (undefined)((uint)uVar7 >> 0x18);
    *(undefined4 *)(this + 0x198) = uVar7;
  }
  fVar18 = (float)NEON_fmadd(fVar8 / -5.0,CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))),
                             fVar8);
  fVar17 = cosf(fVar18);
  uVar3 = *(uint *)(this + 0x40);
  *(float *)(this + 0x1a8) = fVar17;
  *(float *)(this + 0x1a0) = fVar18 + fVar18;
  *(uint *)(this + 0x40) = uVar3 | 0x5000;
  if (((uVar3 >> 0xf & 1) == 0) && ((uVar3 & 0x2002) != 0)) {
    *(uint *)(this + 0x40) = uVar3 | 0xd000;
                    /* try { // try from 00a53cb4 to 00a53cc3 has its CatchHandler @ 00a53d14 */
    CullingManager::addDirtyLightSource
              ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
  }
  uVar4 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x240) = 0x2000000020;
  *(undefined8 *)(this + 0x238) = uVar4;
  *(undefined8 *)(this + 0x230) = 0x4248000040200000;
  return;
}


