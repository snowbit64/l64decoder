// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btSoftBody
// Entry Point: 00f74b7c
// Size: 1888 bytes
// Signature: undefined __thiscall btSoftBody(btSoftBody * this, btSoftBodyWorldInfo * param_1, int param_2, btVector3 * param_3, float * param_4)


/* btSoftBody::btSoftBody(btSoftBodyWorldInfo*, int, btVector3 const*, float const*) */

void __thiscall
btSoftBody::btSoftBody
          (btSoftBody *this,btSoftBodyWorldInfo *param_1,int param_2,btVector3 *param_3,
          float *param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  
  *(undefined8 *)(this + 0xb8) = 0x5d5e0b6b00000000;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xb0) = 0x3f800000;
  *(undefined8 *)(this + 0xa8) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xe8) = 0x1ffffffff;
  *(undefined8 *)(this + 0xe0) = 0xffffffff00000001;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3f00000000000000;
  *(undefined4 *)(this + 0x100) = 1;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined8 *)(this + 0x114) = 0x3f800000;
  *(undefined8 *)(this + 0x11c) = 0;
  this[0x140] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 300) = 0;
  uVar19 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined8 *)(this + 0x1e4) = 0;
  *(undefined8 *)(this + 0x204) = 0;
  *(undefined8 *)(this + 0x224) = 0;
  *(undefined ***)this = &PTR__btSoftBody_0101b6c8;
  *(undefined8 *)(this + 0x264) = 0;
  *(undefined8 *)(this + 0x284) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4c8) = 0xffffffff;
  *(undefined8 *)(this + 0x354) = 0;
  *(undefined8 *)(this + 0x374) = 0;
  *(undefined8 *)(this + 0x548) = 0;
  *(undefined8 *)(this + 0x568) = 0;
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x528) = 0xffffffff;
  *(undefined8 *)(this + 0x394) = 0;
  *(undefined8 *)(this + 0x3b4) = 0;
  *(undefined8 *)(this + 0x5a8) = 0;
  *(undefined8 *)(this + 0x5c8) = 0;
  *(undefined8 *)(this + 0x580) = 0;
  *(undefined8 *)(this + 0x578) = 0;
  *(undefined8 *)(this + 0x588) = 0xffffffff;
  *(undefined8 *)(this + 0x3d4) = 0;
  *(undefined8 *)(this + 0x3f4) = 0;
  *(undefined4 *)(this + 0x100) = 8;
  *(undefined8 *)(this + 0x414) = 0;
  *(undefined8 *)(this + 0x434) = 0;
  *(undefined8 *)(this + 0x454) = 0;
  *(undefined8 *)(this + 0x474) = 0;
  *(undefined8 *)(this + 0x4dc) = 0;
  *(undefined8 *)(this + 0x4fc) = 0;
  *(undefined8 *)(this + 0x53c) = 0;
  *(undefined8 *)(this + 0x55c) = 0;
  *(undefined8 *)(this + 0x59c) = 0;
  *(undefined8 *)(this + 0x5bc) = 0;
  *(undefined8 *)(this + 0x5dc) = 0;
  *(undefined8 *)(this + 0x5fc) = 0;
  *(undefined8 *)(this + 0x674) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x2d8) = 0x3f800000;
  *(undefined8 *)(this + 0x19c) = 0x3dcccccd3f800000;
  *(undefined8 *)(this + 0x194) = 0x3e4ccccd;
  *(undefined8 *)(this + 0x1ac) = 0x3f8000003dcccccd;
  *(undefined8 *)(this + 0x1a4) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0x308) = 0x3f800000;
  *(btSoftBodyWorldInfo **)(this + 0x348) = param_1;
  *(undefined8 *)(this + 700) = 0;
  *(undefined8 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x168] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x160) = 0;
  this[0x1f8] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x1f0) = 0;
  this[0x218] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x210) = 0;
  this[0x238] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x230) = 0;
  this[0x278] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x270) = 0;
  this[0x298] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x290) = 0;
  this[0x368] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x360) = 0;
  this[0x388] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x380) = 0;
  this[0x3a8] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x3a0) = 0;
  this[0x3c8] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x3c0) = 0;
  this[1000] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x3e0) = 0;
  this[0x408] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x400) = 0;
  this[0x428] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x420) = 0;
  this[0x448] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x440) = 0;
  this[0x468] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x460) = 0;
  this[0x488] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x480) = 0;
  this[0x4f0] = (btSoftBody)0x1;
  this[0x510] = (btSoftBody)0x1;
  *(undefined4 *)(this + 0x4d0) = 0;
  this[0x550] = (btSoftBody)0x1;
  this[0x570] = (btSoftBody)0x1;
  *(undefined4 *)(this + 0x530) = 0;
  this[0x5b0] = (btSoftBody)0x1;
  this[0x5d0] = (btSoftBody)0x1;
  *(undefined4 *)(this + 0x590) = 0;
  this[0x5f0] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x5e8) = 0;
  this[0x610] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x608) = 0;
  this[0x688] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x680) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1bc) = 0x3f0000003f000000;
  *(undefined8 *)(this + 0x1b4) = 0x3f0000003f000000;
  *(undefined4 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1c4) = uVar19;
  *(undefined8 *)(this + 0x1d4) = 0x400000000;
  *(undefined8 *)(this + 0x1cc) = 0x100000000;
  *(undefined4 *)(this + 0x1dc) = 1;
  *(undefined2 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2b0) = 0x3f800000;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2e0) = 0x3f800000;
  *(undefined8 *)(this + 0x2ec) = 0;
  *(undefined8 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2f4) = 0x3f800000;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x490) = 0;
  this[0x4b4] = (btSoftBody)0x1;
  *(undefined8 *)(this + 0x49c) = 0;
  *(undefined8 *)(this + 0x494) = 0;
  *(undefined8 *)(this + 0x4ac) = 0;
  *(undefined8 *)(this + 0x4a4) = 0;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  setSolver(this,0);
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar4 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x28,0x10);
  puVar4[4] = this;
  puVar4[2] = 0;
  puVar4[3] = 0x3e800000ffffffff;
  *(undefined4 *)(puVar4 + 1) = 0x20;
  *(undefined8 **)(this + 200) = puVar4;
  *(undefined4 *)(this + 0x618) = 0x3f800000;
  *(undefined4 *)(this + 0x62c) = 0x3f800000;
  *puVar4 = &PTR__btConcaveShape_0101b908;
  *(undefined8 *)(this + 0x61c) = 0;
  *(undefined8 *)(this + 0x638) = 0;
  *(undefined8 *)(this + 0x624) = 0;
  *(undefined8 *)(this + 0x630) = 0;
  *(undefined4 *)(this + 0x640) = 0x3f800000;
  *(undefined8 *)(this + 0x64c) = 0;
  *(undefined8 *)(this + 0x644) = 0;
  *(undefined8 *)(this + 0x65c) = 0;
  *(undefined8 *)(this + 0x654) = 0;
  *(undefined4 *)(this + 0x664) = 0;
  *(undefined4 *)(this + 0x668) = 0x3f800000;
  lVar5 = appendMaterial();
  *(undefined8 *)(lVar5 + 8) = uVar19;
  *(undefined8 *)(lVar5 + 0x10) = 0x13f800000;
  fVar10 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
  uVar2 = *(uint *)(this + 0x374);
  if ((int)uVar2 < param_2) {
    lVar9 = (long)(int)uVar2;
    if (*(int *)(this + 0x378) < param_2) {
      if (param_2 == 0) {
        lVar6 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar6 = (*(code *)PTR_FUN_01048e38)((long)param_2 * 0x78,0x10);
        uVar2 = *(uint *)(this + 0x374);
      }
      if (0 < (int)uVar2) {
        lVar7 = 0;
        do {
          puVar4 = (undefined8 *)(lVar6 + lVar7);
          puVar8 = (undefined8 *)(*(long *)(this + 0x380) + lVar7);
          lVar7 = lVar7 + 0x78;
          uVar13 = puVar8[4];
          uVar12 = puVar8[7];
          uVar19 = puVar8[6];
          uVar18 = puVar8[1];
          uVar17 = *puVar8;
          uVar16 = puVar8[3];
          uVar15 = puVar8[2];
          puVar4[5] = puVar8[5];
          puVar4[4] = uVar13;
          puVar4[7] = uVar12;
          puVar4[6] = uVar19;
          puVar4[1] = uVar18;
          *puVar4 = uVar17;
          puVar4[3] = uVar16;
          puVar4[2] = uVar15;
          uVar15 = puVar8[10];
          uVar13 = puVar8[0xd];
          uVar12 = puVar8[0xc];
          uVar19 = puVar8[0xe];
          uVar17 = puVar8[9];
          uVar16 = puVar8[8];
          puVar4[0xb] = puVar8[0xb];
          puVar4[10] = uVar15;
          puVar4[0xd] = uVar13;
          puVar4[0xc] = uVar12;
          puVar4[0xe] = uVar19;
          puVar4[9] = uVar17;
          puVar4[8] = uVar16;
        } while ((ulong)uVar2 * 0x78 - lVar7 != 0);
      }
      if ((*(long *)(this + 0x380) != 0) && (this[0x388] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x380) = lVar6;
      *(int *)(this + 0x378) = param_2;
      this[0x388] = (btSoftBody)0x1;
    }
    lVar6 = param_2 - lVar9;
    lVar9 = lVar9 * 0x78;
    do {
      lVar6 = lVar6 + -1;
      puVar4 = (undefined8 *)(*(long *)(this + 0x380) + lVar9);
      lVar9 = lVar9 + 0x78;
      puVar4[0xe] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    } while (lVar6 != 0);
  }
  *(int *)(this + 0x374) = param_2;
  if (0 < param_2) {
    lVar9 = 0;
    do {
      lVar6 = *(long *)(this + 0x380);
      puVar4 = (undefined8 *)(lVar6 + lVar9);
      puVar4[0xe] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      if ((float *)param_3 == (float *)0x0) {
        uVar19 = 0;
        fVar20 = 0.0;
        fVar21 = 0.0;
      }
      else {
        uVar19 = *(undefined8 *)((long)param_3 + 8);
        fVar21 = *(float *)param_3;
        fVar20 = *(float *)((long)param_3 + 4);
        param_3 = (btVector3 *)((long)param_3 + 0x10);
      }
      *(float *)(puVar4 + 2) = fVar21;
      *(float *)((long)puVar4 + 0x14) = fVar20;
      puVar4[3] = uVar19;
      puVar4[5] = puVar4[3];
      puVar4[4] = puVar4[2];
      if (param_4 == (float *)0x0) {
        fVar11 = 1.0;
      }
      else {
        fVar11 = *param_4;
        param_4 = param_4 + 1;
      }
      fVar14 = 1.0 / fVar11;
      puVar8 = *(undefined8 **)(this + 0x4c0);
      if (fVar11 <= 0.0) {
        fVar14 = 0.0;
      }
      *(float *)(lVar6 + lVar9 + 0x60) = fVar14;
      if (puVar8 == (undefined8 *)0x0) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        puVar8 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
        puVar8[6] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
      }
      else {
        *(undefined8 *)(this + 0x4c0) = 0;
      }
      puVar8[5] = puVar4;
      puVar8[6] = 0;
      *(undefined4 *)((long)puVar8 + 0xc) = 0;
      *(float *)puVar8 = fVar21 - fVar10;
      *(float *)((long)puVar8 + 4) = fVar20 - fVar10;
      *(float *)(puVar8 + 1) = (float)uVar19 - fVar10;
      *(float *)(puVar8 + 2) = fVar21 + fVar10;
      *(float *)((long)puVar8 + 0x14) = fVar20 + fVar10;
      *(float *)(puVar8 + 3) = (float)uVar19 + fVar10;
      *(undefined4 *)((long)puVar8 + 0x1c) = 0;
      uVar19 = *(undefined8 *)(this + 0x4b8);
      puVar8[4] = 0;
      FUN_00f42680(this + 0x4b8,uVar19,puVar8);
      iVar3 = *(int *)(this + 0x4cc);
      lVar6 = lVar6 + lVar9;
      lVar9 = lVar9 + 0x78;
      *(undefined8 **)(lVar6 + 0x68) = puVar8;
      *(long *)(lVar6 + 8) = lVar5;
      *(int *)(this + 0x4cc) = iVar3 + 1;
    } while ((ulong)(uint)param_2 * 0x78 - lVar9 != 0);
  }
  puVar4 = *(undefined8 **)(this + 0x4b8);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x49c) = 0;
    *(undefined8 *)(this + 0x494) = 0;
    *(undefined8 *)(this + 0x4ac) = 0;
    *(undefined8 *)(this + 0x4a4) = 0;
  }
  else {
    fVar10 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
    fVar20 = *(float *)(puVar4 + 1);
    uVar19 = *puVar4;
    *(undefined4 *)(this + 0x4a0) = 0;
    *(float *)(this + 0x49c) = fVar20 - fVar10;
    *(ulong *)(this + 0x494) =
         CONCAT44((float)((ulong)uVar19 >> 0x20) - fVar10,(float)uVar19 - fVar10);
    uVar19 = puVar4[2];
    fVar20 = *(float *)(puVar4 + 3);
    *(undefined4 *)(this + 0x4b0) = 0;
    *(ulong *)(this + 0x4a4) =
         CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar10,(float)uVar19 + fVar10);
    *(float *)(this + 0x4ac) = fVar20 + fVar10;
    if (*(long *)(this + 0xc0) != 0) {
      plVar1 = *(long **)(*(long *)(this + 0x348) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00f752a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))
                (plVar1,*(long *)(this + 0xc0),this + 0x494,this + 0x4a4,
                 *(undefined8 *)(*(long *)(this + 0x348) + 0x28));
      return;
    }
  }
  return;
}


