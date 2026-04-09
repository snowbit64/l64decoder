// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readServerUpdateFromStream
// Entry Point: 009833fc
// Size: 936 bytes
// Signature: undefined __thiscall readServerUpdateFromStream(MeshSplitManager * this, GsBitStream * param_1, float param_2, float param_3, float param_4)


/* MeshSplitManager::readServerUpdateFromStream(GsBitStream*, float, float, float) */

void __thiscall
MeshSplitManager::readServerUpdateFromStream
          (MeshSplitManager *this,GsBitStream *param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_f8;
  byte local_f4 [4];
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  float local_cc;
  float fStack_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  Mutex::enterCriticalSection();
  local_f4[0] = 0;
  GsBitStream::readBits(param_1,local_f4,8,true);
  if (local_f4[0] != 0) {
    uVar10 = 0;
    do {
      uVar6 = GsBitStream::readBits(param_1,(uchar *)&local_f8,0x20,true);
      if ((uVar6 & 1) == 0) break;
      local_f0 = 0;
      uVar6 = GsBitStream::readBits(param_1,(uchar *)&local_f0,*(uint *)(this + 0x1f0),true);
      uVar1 = local_f0;
      if ((uVar6 & 1) == 0) break;
      local_f0 = 0;
      uVar21 = *(undefined4 *)(this + 0x1e0);
      uVar20 = *(undefined4 *)(this + 0x1ec);
      uVar6 = GsBitStream::readBits(param_1,(uchar *)&local_f0,*(uint *)(this + 0x204),true);
      uVar2 = local_f0;
      if ((uVar6 & 1) == 0) break;
      local_f0 = 0;
      uVar17 = *(undefined4 *)(this + 500);
      uVar19 = *(undefined4 *)(this + 0x200);
      uVar6 = GsBitStream::readBits(param_1,(uchar *)&local_f0,*(uint *)(this + 0x218),true);
      uVar5 = local_f0;
      if ((uVar6 & 1) == 0) break;
      uVar18 = *(undefined4 *)(this + 0x208);
      local_f0 = 0;
      uVar16 = *(undefined4 *)(this + 0x214);
      uVar6 = GsBitStream::readBits(param_1,(uchar *)&local_f0,0xc,true);
      if ((uVar6 & 1) == 0) break;
      fVar11 = (float)NEON_ucvtf(local_f0);
      local_f0 = 0;
      local_c0 = fVar11 * 0.0002441406 * 6.283185;
      uVar6 = GsBitStream::readBits(param_1,(uchar *)&local_f0,0xc,true);
      if ((uVar6 & 1) == 0) break;
      fVar11 = (float)NEON_ucvtf(local_f0);
      local_f0 = 0;
      local_bc = fVar11 * 0.0002441406 * 6.283185;
      uVar6 = GsBitStream::readBits(param_1,(uchar *)&local_f0,0xc,true);
      if ((uVar6 & 1) == 0) break;
      lVar9 = *(long *)(this + 0x1c8);
      uVar12 = NEON_ucvtf(uVar1);
      fVar11 = (float)NEON_ucvtf(local_f0);
      uVar13 = NEON_ucvtf(uVar2);
      uVar14 = NEON_ucvtf(uVar5);
      iVar8 = 0;
      uVar21 = NEON_fnmsub(uVar12,uVar21,uVar20);
      iVar3 = (int)((ulong)(*(long *)(this + 0x1d0) - lVar9) >> 2) * -0x45d1745d;
      local_b8 = fVar11 * 0.0002441406 * 6.283185;
      iVar7 = iVar3 + -1;
      uVar17 = NEON_fnmsub(uVar13,uVar17,uVar19);
      uVar20 = NEON_fnmsub(uVar14,uVar18,uVar16);
      if (0 < iVar3) {
        do {
          while( true ) {
            iVar3 = iVar8 + iVar7;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            uVar1 = iVar3 >> 1;
            uVar2 = *(uint *)(lVar9 + (long)(int)uVar1 * 0x2c);
            if (uVar2 < local_f8) break;
            if (uVar2 <= local_f8) {
              lVar9 = lVar9 + (ulong)uVar1 * 0x2c;
              *(undefined4 *)(lVar9 + 4) = uVar21;
              *(undefined4 *)(lVar9 + 8) = uVar17;
              *(undefined4 *)(lVar9 + 0xc) = uVar20;
              fVar11 = (1.0 - *(float *)(lVar9 + 0x20)) * *(float *)(lVar9 + 0x24);
              fVar11 = (float)NEON_fmadd(param_2 - fVar11,0x3d4ccccd,fVar11);
              fVar15 = param_3 - *(float *)(lVar9 + 0x28);
              if (param_2 * 3.0 < fVar11) {
                fVar11 = param_2 * 3.0;
              }
              if (param_4 * 3.0 < fVar15) {
                fVar15 = param_4 * 3.0;
              }
              GsQuaternion::GsQuaternion((GsQuaternion *)&local_f0,(Vector3 *)&local_c0);
              fVar15 = fVar15 + fVar11;
              *(undefined4 *)(lVar9 + 0x20) = 0;
              *(ulong *)(lVar9 + 0x18) = CONCAT44(uStack_e4,uStack_e8);
              *(ulong *)(lVar9 + 0x10) = CONCAT44(uStack_ec,local_f0);
              if (fVar15 <= 1.0) {
                fVar15 = 1.0;
              }
              *(float *)(lVar9 + 0x24) = fVar15;
              *(float *)(lVar9 + 0x28) = param_3;
              goto LAB_00983744;
            }
            iVar7 = uVar1 - 1;
            if (iVar7 < iVar8) goto LAB_00983678;
          }
          iVar8 = uVar1 + 1;
        } while (iVar8 <= iVar7);
      }
LAB_00983678:
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = local_f8;
      uStack_ec = uVar21;
      uStack_e8 = uVar17;
      uStack_e4 = uVar20;
      GsQuaternion::GsQuaternion((GsQuaternion *)&local_110,(Vector3 *)&local_c0);
      local_d0 = 0;
      uStack_d8 = uStack_108;
      local_e0 = local_110;
      local_cc = param_2 + param_4;
      fStack_c8 = param_3;
      std::__ndk1::
      vector<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>>
      ::insert((vector<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>>
                *)(this + 0x1c8),(int)*(undefined8 *)(this + 0x1c8) + iVar8 * 0x2c,
               (MovingShapeData *)&local_f0);
LAB_00983744:
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_f4[0]);
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


